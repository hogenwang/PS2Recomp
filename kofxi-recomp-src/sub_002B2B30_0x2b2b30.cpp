#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B2B30
// Address: 0x2b2b30 - 0x2b2e18
void sub_002B2B30_0x2b2b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2B30_0x2b2b30");
#endif

    switch (ctx->pc) {
        case 0x2b2ba8u: goto label_2b2ba8;
        case 0x2b2cb0u: goto label_2b2cb0;
        case 0x2b2cdcu: goto label_2b2cdc;
        case 0x2b2cfcu: goto label_2b2cfc;
        case 0x2b2df4u: goto label_2b2df4;
        default: break;
    }

    ctx->pc = 0x2b2b30u;

    // 0x2b2b30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b2b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b2b34: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b2b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b2b38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b2b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b2b3c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2b2b3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2b40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b2b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b2b44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2b48: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b2b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2b4c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2b2b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2b2b50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2b54: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b2b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b2b58: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b2b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b2b5c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2b60: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2b2b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2b2b64: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2B2B64u;
    {
        const bool branch_taken_0x2b2b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B64u;
        // 0x2b2b68: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b64) {
            ctx->pc = 0x2B2DECu;
            goto label_2b2dec;
        }
    }
    ctx->pc = 0x2B2B6Cu;
    // 0x2b2b6c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2b2b70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2B70u;
    {
        const bool branch_taken_0x2b2b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B70u;
        // 0x2b2b74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b70) {
            ctx->pc = 0x2B2B80u;
            goto label_2b2b80;
        }
    }
    ctx->pc = 0x2B2B78u;
    // 0x2b2b78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B2B78u;
    {
        const bool branch_taken_0x2b2b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B78u;
        // 0x2b2b7c: 0x8e130074  lw          $s3, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b78) {
            ctx->pc = 0x2B2BA0u;
            goto label_2b2ba0;
        }
    }
    ctx->pc = 0x2B2B80u;
label_2b2b80:
    // 0x2b2b80: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2b2b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2b2b84: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b2b84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2b88: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2b2b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2b2b8c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2b2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2b2b90: 0x51182b  sltu        $v1, $v0, $s1
    ctx->pc = 0x2b2b90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2b2b94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b2b94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2b98: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2B2B98u;
    {
        const bool branch_taken_0x2b2b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B98u;
        // 0x2b2b9c: 0x223900a  movz        $s2, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b98) {
            ctx->pc = 0x2B2C54u;
            goto label_2b2c54;
        }
    }
    ctx->pc = 0x2B2BA0u;
label_2b2ba0:
    // 0x2b2ba0: 0xc0a5b08  jal         func_296C20
    ctx->pc = 0x2B2BA0u;
    SET_GPR_U32(ctx, 31, 0x2B2BA8u);
    ctx->pc = 0x2B2BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2BA0u;
    // 0x2b2ba4: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C20u, 0x2B2BA0u, 0x2B2BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2BA8u;
label_2b2ba8:
    // 0x2b2ba8: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2b2ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2b2bac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b2bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2bb0: 0x2332021  addu        $a0, $s1, $s3
    ctx->pc = 0x2b2bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2b2bb4: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x2b2bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x2b2bb8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2b2bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2b2bbc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B2BBCu;
    {
        const bool branch_taken_0x2b2bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2BBCu;
        // 0x2b2bc0: 0x8e050050  lw          $a1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2bbc) {
            ctx->pc = 0x2B2C00u;
            goto label_2b2c00;
        }
    }
    ctx->pc = 0x2B2BC4u;
    // 0x2b2bc4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2b2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b2bc8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B2BC8u;
    {
        const bool branch_taken_0x2b2bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2BC8u;
        // 0x2b2bcc: 0x2ce20002  sltiu       $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2bc8) {
            ctx->pc = 0x2B2C04u;
            goto label_2b2c04;
        }
    }
    ctx->pc = 0x2B2BD0u;
    // 0x2b2bd0: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2b2bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2b2bd4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B2BD4u;
    {
        const bool branch_taken_0x2b2bd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2bd4) {
            ctx->pc = 0x2B2BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2BD4u;
            // 0x2b2bd8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2BDCu;
            goto label_2b2bdc;
        }
    }
    ctx->pc = 0x2B2BDCu;
label_2b2bdc:
    // 0x2b2bdc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2b2bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2b2be0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2b2be0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2b2be4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x2b2be4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x2b2be8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b2be8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2bec: 0x87001b  divu        $zero, $a0, $a3
    ctx->pc = 0x2b2becu;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2b2bf0: 0x1010  mfhi        $v0
    ctx->pc = 0x2b2bf0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2b2bf4: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2b2bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b2bf8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2B2BF8u;
    {
        const bool branch_taken_0x2b2bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2BF8u;
        // 0x2b2bfc: 0x539023  subu        $s2, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2bf8) {
            ctx->pc = 0x2B2C54u;
            goto label_2b2c54;
        }
    }
    ctx->pc = 0x2B2C00u;
label_2b2c00:
    // 0x2b2c00: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x2b2c00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2b2c04:
    // 0x2b2c04: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B2C04u;
    {
        const bool branch_taken_0x2b2c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2c04) {
            ctx->pc = 0x2B2C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2C04u;
            // 0x2b2c08: 0x87001b  divu        $zero, $a0, $a3 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2C24u;
            goto label_2b2c24;
        }
    }
    ctx->pc = 0x2B2C0Cu;
    // 0x2b2c0c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2b2c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b2c10: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2C10u;
    {
        const bool branch_taken_0x2b2c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2c10) {
            ctx->pc = 0x2B2C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2C10u;
            // 0x2b2c14: 0x87001b  divu        $zero, $a0, $a3 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2C24u;
            goto label_2b2c24;
        }
    }
    ctx->pc = 0x2B2C18u;
    // 0x2b2c18: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2b2c18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2b2c1c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B2C1Cu;
    {
        const bool branch_taken_0x2b2c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C1Cu;
        // 0x2b2c20: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c1c) {
            ctx->pc = 0x2B2C54u;
            goto label_2b2c54;
        }
    }
    ctx->pc = 0x2B2C24u;
label_2b2c24:
    // 0x2b2c24: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B2C24u;
    {
        const bool branch_taken_0x2b2c24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2c24) {
            ctx->pc = 0x2B2C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2C24u;
            // 0x2b2c28: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2C2Cu;
            goto label_2b2c2c;
        }
    }
    ctx->pc = 0x2B2C2Cu;
label_2b2c2c:
    // 0x2b2c2c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b2c2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2c30: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2b2c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b2c34: 0x1810  mfhi        $v1
    ctx->pc = 0x2b2c34u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b2c38: 0xe31023  subu        $v0, $a3, $v1
    ctx->pc = 0x2b2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2b2c3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B2C3Cu;
    {
        const bool branch_taken_0x2b2c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C3Cu;
        // 0x2b2c40: 0x43a80b  movn        $s5, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c3c) {
            ctx->pc = 0x2B2C4Cu;
            goto label_2b2c4c;
        }
    }
    ctx->pc = 0x2B2C44u;
    // 0x2b2c44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2C44u;
    {
        const bool branch_taken_0x2b2c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C44u;
        // 0x2b2c48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c44) {
            ctx->pc = 0x2B2C50u;
            goto label_2b2c50;
        }
    }
    ctx->pc = 0x2B2C4Cu;
label_2b2c4c:
    // 0x2b2c4c: 0x15102b  sltu        $v0, $zero, $s5
    ctx->pc = 0x2b2c4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2b2c50:
    // 0x2b2c50: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2b2c50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2b2c54:
    // 0x2b2c54: 0x8e070050  lw          $a3, 0x50($s0)
    ctx->pc = 0x2b2c54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2c58: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2b2c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b2c5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b2c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2c60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b2c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2c64: 0xacf2004c  sw          $s2, 0x4C($a3)
    ctx->pc = 0x2b2c64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 18));
    // 0x2b2c68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b2c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2c6c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2b2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b2c70: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2c74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b2c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2b2c78: 0xac750040  sw          $s5, 0x40($v1)
    ctx->pc = 0x2b2c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 21));
    // 0x2b2c7c: 0x102200a  movz        $a0, $t0, $v0
    ctx->pc = 0x2b2c7cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 8));
    // 0x2b2c80: 0x933821  addu        $a3, $a0, $s3
    ctx->pc = 0x2b2c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2b2c84: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2c88: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2b2c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2b2c8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b2c90: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x2b2c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x2b2c94: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2b2c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2c98: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2b2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2b2c9c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2b2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2b2ca0: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x2b2ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x2b2ca4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2ca8: 0xc049c48  jal         func_127120
    ctx->pc = 0x2B2CA8u;
    SET_GPR_U32(ctx, 31, 0x2B2CB0u);
    ctx->pc = 0x2B2CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2CA8u;
    // 0x2b2cac: 0x8c640058  lw          $a0, 0x58($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2B2CA8u, 0x2B2CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2CB0u;
label_2b2cb0:
    // 0x2b2cb0: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x2b2cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2cb4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b2cb8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B2CB8u;
    {
        const bool branch_taken_0x2b2cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2cb8) {
            ctx->pc = 0x2B2CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2CB8u;
            // 0x2b2cbc: 0x8ca2004c  lw          $v0, 0x4C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2D04u;
            goto label_2b2d04;
        }
    }
    ctx->pc = 0x2B2CC0u;
    // 0x2b2cc0: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x2b2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x2b2cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b2cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2cc8: 0xaca20050  sw          $v0, 0x50($a1)
    ctx->pc = 0x2b2cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 2));
    // 0x2b2ccc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b2cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2cd0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2b2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2cd4: 0xc0ab12a  jal         func_2AC4A8
    ctx->pc = 0x2B2CD4u;
    SET_GPR_U32(ctx, 31, 0x2B2CDCu);
    ctx->pc = 0x2B2CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2CD4u;
    // 0x2b2cd8: 0x8c45005c  lw          $a1, 0x5C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC4A8u, 0x2B2CD4u, 0x2B2CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2CDCu;
label_2b2cdc:
    // 0x2b2cdc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2ce0: 0x2b33021  addu        $a2, $s5, $s3
    ctx->pc = 0x2b2ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x2b2ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b2ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2ce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b2ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b2cec: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2b2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2b2cf0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b2cf4: 0xc0ab100  jal         func_2AC400
    ctx->pc = 0x2B2CF4u;
    SET_GPR_U32(ctx, 31, 0x2B2CFCu);
    ctx->pc = 0x2B2CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2CF4u;
    // 0x2b2cf8: 0xac62004c  sw          $v0, 0x4C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC400u, 0x2B2CF4u, 0x2B2CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2CFCu;
label_2b2cfc:
    // 0x2b2cfc: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x2b2cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2d00: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x2b2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_2b2d04:
    // 0x2b2d04: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x2b2d04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x2b2d08: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2d0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b2d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b2d10: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2B2D10u;
    {
        const bool branch_taken_0x2b2d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D10u;
        // 0x2b2d14: 0x8c62004c  lw          $v0, 0x4C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d10) {
            ctx->pc = 0x2B2D6Cu;
            goto label_2b2d6c;
        }
    }
    ctx->pc = 0x2B2D18u;
    // 0x2b2d18: 0x8c66005c  lw          $a2, 0x5C($v1)
    ctx->pc = 0x2b2d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2b2d1c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2b2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2b2d20: 0x3043003f  andi        $v1, $v0, 0x3F
    ctx->pc = 0x2b2d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2b2d24: 0x24c6fffd  addiu       $a2, $a2, -0x3
    ctx->pc = 0x2b2d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x2b2d28: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2b2d28u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b2d2c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x2b2d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2d30: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2b2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b2d34: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2D34u;
    {
        const bool branch_taken_0x2b2d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2d34) {
            ctx->pc = 0x2B2D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2D34u;
            // 0x2b2d38: 0x90a2004c  lbu         $v0, 0x4C($a1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2D4Cu;
            goto label_2b2d4c;
        }
    }
    ctx->pc = 0x2B2D3Cu;
    // 0x2b2d3c: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x2b2d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2b2d40: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2b2d40u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b2d44: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x2b2d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2d48: 0x90a2004c  lbu         $v0, 0x4C($a1)
    ctx->pc = 0x2b2d48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 76)));
label_2b2d4c:
    // 0x2b2d4c: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x2b2d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b2d50: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2d54: 0x90620040  lbu         $v0, 0x40($v1)
    ctx->pc = 0x2b2d54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2b2d58: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x2b2d58u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b2d5c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2d60: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2b2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2b2d64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B2D64u;
    {
        const bool branch_taken_0x2b2d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D64u;
        // 0x2b2d68: 0x24420003  addiu       $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d64) {
            ctx->pc = 0x2B2D98u;
            goto label_2b2d98;
        }
    }
    ctx->pc = 0x2B2D6Cu;
label_2b2d6c:
    // 0x2b2d6c: 0x8c66005c  lw          $a2, 0x5C($v1)
    ctx->pc = 0x2b2d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2b2d70: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2b2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2b2d74: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2b2d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2b2d78: 0x24c6fffe  addiu       $a2, $a2, -0x2
    ctx->pc = 0x2b2d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
    // 0x2b2d7c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2b2d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b2d80: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2d84: 0x9062004c  lbu         $v0, 0x4C($v1)
    ctx->pc = 0x2b2d84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2b2d88: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x2b2d88u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b2d8c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2d90: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2b2d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2b2d94: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b2d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2b2d98:
    // 0x2b2d98: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x2b2d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x2b2d9c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2b2d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2da0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2b2da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2b2da4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2b2da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2b2da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b2da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2dac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2b2dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2db0: 0xac460038  sw          $a2, 0x38($v0)
    ctx->pc = 0x2b2db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 6));
    // 0x2b2db4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b2db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2db8: 0x8e070050  lw          $a3, 0x50($s0)
    ctx->pc = 0x2b2db8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2dbc: 0xdce200e0  ld          $v0, 0xE0($a3)
    ctx->pc = 0x2b2dbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 224)));
    // 0x2b2dc0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2b2dc0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x2b2dc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b2dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b2dc8: 0xfce200e0  sd          $v0, 0xE0($a3)
    ctx->pc = 0x2b2dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 224), GPR_U64(ctx, 2));
    // 0x2b2dcc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2dd0: 0xac710014  sw          $s1, 0x14($v1)
    ctx->pc = 0x2b2dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 17));
    // 0x2b2dd4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2b2dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2dd8: 0xac540018  sw          $s4, 0x18($v0)
    ctx->pc = 0x2b2dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 20));
    // 0x2b2ddc: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2b2ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2de0: 0xac720024  sw          $s2, 0x24($v1)
    ctx->pc = 0x2b2de0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 18));
    // 0x2b2de4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2b2de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b2de8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2b2de8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_2b2dec:
    // 0x2b2dec: 0xc0aca8a  jal         func_2B2A28
    ctx->pc = 0x2B2DECu;
    SET_GPR_U32(ctx, 31, 0x2B2DF4u);
    ctx->pc = 0x2B2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2A28u, 0x2B2DECu, 0x2B2DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2DF4u;
label_2b2df4:
    // 0x2b2df4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2b2df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b2df8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b2df8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b2dfc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b2dfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b2e00: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b2e00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b2e04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b2e04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2e08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b2e08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2e10: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E10u;
        // 0x2b2e14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2E18u;
}
