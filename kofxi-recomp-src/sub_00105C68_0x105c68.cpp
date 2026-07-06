#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00105C68
// Address: 0x105c68 - 0x105ea8
void sub_00105C68_0x105c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105C68_0x105c68");
#endif

    switch (ctx->pc) {
        case 0x105cc0u: goto label_105cc0;
        case 0x105cc4u: goto label_105cc4;
        case 0x105cccu: goto label_105ccc;
        case 0x105ce8u: goto label_105ce8;
        case 0x105cf0u: goto label_105cf0;
        case 0x105d38u: goto label_105d38;
        case 0x105d5cu: goto label_105d5c;
        case 0x105dd0u: goto label_105dd0;
        case 0x105e00u: goto label_105e00;
        case 0x105e30u: goto label_105e30;
        case 0x105e64u: goto label_105e64;
        case 0x105e7cu: goto label_105e7c;
        default: break;
    }

    ctx->pc = 0x105c68u;

    // 0x105c68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x105c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x105c6c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x105c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x105c70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x105c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x105c74: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x105c74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105c78: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x105c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x105c7c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x105c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x105c80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105c84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x105c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c88: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x105c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x105c8c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x105c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x105c90: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x105c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x105c94: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x105c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x105c98: 0xae200820  sw          $zero, 0x820($s1)
    ctx->pc = 0x105c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2080), GPR_U32(ctx, 0));
    // 0x105c9c: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x105c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x105ca0: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x105ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x105ca4: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x105ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x105ca8: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x105ca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x105cac: 0xae200824  sw          $zero, 0x824($s1)
    ctx->pc = 0x105cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2084), GPR_U32(ctx, 0));
    // 0x105cb0: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x105cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x105cb4: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x105cb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x105cb8: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x105cb8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x105cbc: 0x0  nop
    ctx->pc = 0x105cbcu;
    // NOP
label_105cc0:
    // 0x105cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_105cc4:
    // 0x105cc4: 0xc0417aa  jal         func_105EA8
    ctx->pc = 0x105CC4u;
    SET_GPR_U32(ctx, 31, 0x105CCCu);
    ctx->pc = 0x105CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105CC4u;
            // 0x105cc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x105EA8u;
    if (runtime->hasFunction(0x105EA8u)) {
        auto targetFn = runtime->lookupFunction(0x105EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CCCu; }
        if (ctx->pc != 0x105CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00105EA8_0x105ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CCCu; }
        if (ctx->pc != 0x105CCCu) { return; }
    }
    ctx->pc = 0x105CCCu;
label_105ccc:
    // 0x105ccc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x105cccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105cd0: 0x12b3fffc  beq         $s5, $s3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x105CD0u;
    {
        const bool branch_taken_0x105cd0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 19));
        ctx->pc = 0x105CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105CD0u;
            // 0x105cd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105cd0) {
            ctx->pc = 0x105CC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105cc4;
        }
    }
    ctx->pc = 0x105CD8u;
    // 0x105cd8: 0x12b2fff9  beq         $s5, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x105CD8u;
    {
        const bool branch_taken_0x105cd8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 18));
        if (branch_taken_0x105cd8) {
            ctx->pc = 0x105CC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105cc0;
        }
    }
    ctx->pc = 0x105CE0u;
    // 0x105ce0: 0xc041cda  jal         func_107368
    ctx->pc = 0x105CE0u;
    SET_GPR_U32(ctx, 31, 0x105CE8u);
    ctx->pc = 0x105CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105CE0u;
            // 0x105ce4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107368u;
    if (runtime->hasFunction(0x107368u)) {
        auto targetFn = runtime->lookupFunction(0x107368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CE8u; }
        if (ctx->pc != 0x105CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107368_0x107368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CE8u; }
        if (ctx->pc != 0x105CE8u) { return; }
    }
    ctx->pc = 0x105CE8u;
label_105ce8:
    // 0x105ce8: 0xc041cda  jal         func_107368
    ctx->pc = 0x105CE8u;
    SET_GPR_U32(ctx, 31, 0x105CF0u);
    ctx->pc = 0x105CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105CE8u;
            // 0x105cec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107368u;
    if (runtime->hasFunction(0x107368u)) {
        auto targetFn = runtime->lookupFunction(0x107368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CF0u; }
        if (ctx->pc != 0x105CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107368_0x107368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105CF0u; }
        if (ctx->pc != 0x105CF0u) { return; }
    }
    ctx->pc = 0x105CF0u;
label_105cf0:
    // 0x105cf0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105cf4: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x105cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x105cf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x105cfc: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x105CFCu;
    {
        const bool branch_taken_0x105cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105CFCu;
            // 0x105d00: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105cfc) {
            ctx->pc = 0x105D84u;
            goto label_105d84;
        }
    }
    ctx->pc = 0x105D04u;
    // 0x105d04: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x105d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x105d08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105d08u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x105d0c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x105d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x105d10: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x105D10u;
    {
        const bool branch_taken_0x105d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x105D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105D10u;
            // 0x105d14: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d10) {
            ctx->pc = 0x105D88u;
            goto label_105d88;
        }
    }
    ctx->pc = 0x105D18u;
    // 0x105d18: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x105d18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x105d1c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x105d1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x105d20: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x105d20u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x105d24: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x105d24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x105d28: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x105d28u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x105d2c: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x105d2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x105d30: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x105d30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x105d34: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x105d34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
label_105d38:
    // 0x105d38: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x105d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x105d3c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x105D3Cu;
    {
        const bool branch_taken_0x105d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105d3c) {
            ctx->pc = 0x105D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105D3Cu;
            // 0x105d40: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105D60u;
            goto label_105d60;
        }
    }
    ctx->pc = 0x105D44u;
    // 0x105d44: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x105d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x105d48: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x105d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x105d4c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x105D4Cu;
    {
        const bool branch_taken_0x105d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105d4c) {
            ctx->pc = 0x105D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x105D4Cu;
            // 0x105d50: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x105D60u;
            goto label_105d60;
        }
    }
    ctx->pc = 0x105D54u;
    // 0x105d54: 0xc042a22  jal         func_10A888
    ctx->pc = 0x105D54u;
    SET_GPR_U32(ctx, 31, 0x105D5Cu);
    ctx->pc = 0x105D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105D54u;
            // 0x105d58: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A888u;
    if (runtime->hasFunction(0x10A888u)) {
        auto targetFn = runtime->lookupFunction(0x10A888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D5Cu; }
        if (ctx->pc != 0x105D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A888_0x10a888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105D5Cu; }
        if (ctx->pc != 0x105D5Cu) { return; }
    }
    ctx->pc = 0x105D5Cu;
label_105d5c:
    // 0x105d5c: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x105d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_105d60:
    // 0x105d60: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x105D60u;
    {
        const bool branch_taken_0x105d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105d60) {
            ctx->pc = 0x105DC8u;
            goto label_105dc8;
        }
    }
    ctx->pc = 0x105D68u;
    // 0x105d68: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x105d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x105d6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105D6Cu;
    {
        const bool branch_taken_0x105d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105D6Cu;
            // 0x105d70: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d6c) {
            ctx->pc = 0x105D88u;
            goto label_105d88;
        }
    }
    ctx->pc = 0x105D74u;
    // 0x105d74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x105d78: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x105d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x105d7c: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x105D7Cu;
    {
        const bool branch_taken_0x105d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105d7c) {
            ctx->pc = 0x105D38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105d38;
        }
    }
    ctx->pc = 0x105D84u;
label_105d84:
    // 0x105d84: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_105d88:
    // 0x105d88: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105d8c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x105d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x105d90: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x105d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x105d94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x105d94u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x105d98: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x105d98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105d9c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x105d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x105da0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x105da0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x105da4: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x105DA4u;
    {
        const bool branch_taken_0x105da4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x105DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105DA4u;
            // 0x105da8: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105da4) {
            ctx->pc = 0x105DD8u;
            goto label_105dd8;
        }
    }
    ctx->pc = 0x105DACu;
    // 0x105dac: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x105dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x105db0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x105DB0u;
    {
        const bool branch_taken_0x105db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105DB0u;
            // 0x105db4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105db0) {
            ctx->pc = 0x105DC0u;
            goto label_105dc0;
        }
    }
    ctx->pc = 0x105DB8u;
    // 0x105db8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x105DB8u;
    {
        const bool branch_taken_0x105db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105DB8u;
            // 0x105dbc: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105db8) {
            ctx->pc = 0x105DDCu;
            goto label_105ddc;
        }
    }
    ctx->pc = 0x105DC0u;
label_105dc0:
    // 0x105dc0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x105DC0u;
    {
        const bool branch_taken_0x105dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105DC0u;
            // 0x105dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105dc0) {
            ctx->pc = 0x105DDCu;
            goto label_105ddc;
        }
    }
    ctx->pc = 0x105DC8u;
label_105dc8:
    // 0x105dc8: 0xc043000  jal         func_10C000
    ctx->pc = 0x105DC8u;
    SET_GPR_U32(ctx, 31, 0x105DD0u);
    ctx->pc = 0x10C000u;
    if (runtime->hasFunction(0x10C000u)) {
        auto targetFn = runtime->lookupFunction(0x10C000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105DD0u; }
        if (ctx->pc != 0x105DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C000_0x10c000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105DD0u; }
        if (ctx->pc != 0x105DD0u) { return; }
    }
    ctx->pc = 0x105DD0u;
label_105dd0:
    // 0x105dd0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x105DD0u;
    {
        const bool branch_taken_0x105dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105DD0u;
            // 0x105dd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105dd0) {
            ctx->pc = 0x105E04u;
            goto label_105e04;
        }
    }
    ctx->pc = 0x105DD8u;
label_105dd8:
    // 0x105dd8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x105dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_105ddc:
    // 0x105ddc: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x105ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x105de0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105de4: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x105de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x105de8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105de8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x105dec: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x105decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x105df0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x105DF0u;
    {
        const bool branch_taken_0x105df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105DF0u;
            // 0x105df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105df0) {
            ctx->pc = 0x105E00u;
            goto label_105e00;
        }
    }
    ctx->pc = 0x105DF8u;
    // 0x105df8: 0xc043028  jal         func_10C0A0
    ctx->pc = 0x105DF8u;
    SET_GPR_U32(ctx, 31, 0x105E00u);
    ctx->pc = 0x105DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105DF8u;
            // 0x105dfc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C0A0u;
    if (runtime->hasFunction(0x10C0A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E00u; }
        if (ctx->pc != 0x105E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C0A0_0x10c0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E00u; }
        if (ctx->pc != 0x105E00u) { return; }
    }
    ctx->pc = 0x105E00u;
label_105e00:
    // 0x105e00: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x105e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_105e04:
    // 0x105e04: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105E04u;
    {
        const bool branch_taken_0x105e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105E04u;
            // 0x105e08: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e04) {
            ctx->pc = 0x105E20u;
            goto label_105e20;
        }
    }
    ctx->pc = 0x105E0Cu;
    // 0x105e0c: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x105e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
    // 0x105e10: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x105E10u;
    {
        const bool branch_taken_0x105e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x105E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105E10u;
            // 0x105e14: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e10) {
            ctx->pc = 0x105E80u;
            goto label_105e80;
        }
    }
    ctx->pc = 0x105E18u;
    // 0x105e18: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x105e18u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105e1c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_105e20:
    // 0x105e20: 0x26b0ffff  addiu       $s0, $s5, -0x1
    ctx->pc = 0x105e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x105e24: 0x2eb20001  sltiu       $s2, $s5, 0x1
    ctx->pc = 0x105e24u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x105e28: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x105e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x105e2c: 0x0  nop
    ctx->pc = 0x105e2cu;
    // NOP
label_105e30:
    // 0x105e30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105e30u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x105e34: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x105e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x105e38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105e3c: 0x0  nop
    ctx->pc = 0x105e3cu;
    // NOP
    // 0x105e40: 0x0  nop
    ctx->pc = 0x105e40u;
    // NOP
    // 0x105e44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x105E44u;
    {
        const bool branch_taken_0x105e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105e44) {
            ctx->pc = 0x105E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105e30;
        }
    }
    ctx->pc = 0x105E4Cu;
    // 0x105e4c: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x105E4Cu;
    {
        const bool branch_taken_0x105e4c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x105E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105E4Cu;
            // 0x105e50: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e4c) {
            ctx->pc = 0x105E68u;
            goto label_105e68;
        }
    }
    ctx->pc = 0x105E54u;
    // 0x105e54: 0x8e250820  lw          $a1, 0x820($s1)
    ctx->pc = 0x105e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x105e58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e5c: 0xc041692  jal         func_105A48
    ctx->pc = 0x105E5Cu;
    SET_GPR_U32(ctx, 31, 0x105E64u);
    ctx->pc = 0x105E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105E5Cu;
            // 0x105e60: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x105A48u;
    if (runtime->hasFunction(0x105A48u)) {
        auto targetFn = runtime->lookupFunction(0x105A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E64u; }
        if (ctx->pc != 0x105E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00105A48_0x105a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E64u; }
        if (ctx->pc != 0x105E64u) { return; }
    }
    ctx->pc = 0x105E64u;
label_105e64:
    // 0x105e64: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x105e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_105e68:
    // 0x105e68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105E68u;
    {
        const bool branch_taken_0x105e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105E68u;
            // 0x105e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e68) {
            ctx->pc = 0x105E7Cu;
            goto label_105e7c;
        }
    }
    ctx->pc = 0x105E70u;
    // 0x105e70: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x105e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x105e74: 0xc04305a  jal         func_10C168
    ctx->pc = 0x105E74u;
    SET_GPR_U32(ctx, 31, 0x105E7Cu);
    ctx->pc = 0x105E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105E74u;
            // 0x105e78: 0x24a59fe8  addiu       $a1, $a1, -0x6018 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (runtime->hasFunction(0x10C168u)) {
        auto targetFn = runtime->lookupFunction(0x10C168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E7Cu; }
        if (ctx->pc != 0x105E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C168_0x10c168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105E7Cu; }
        if (ctx->pc != 0x105E7Cu) { return; }
    }
    ctx->pc = 0x105E7Cu;
label_105e7c:
    // 0x105e7c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x105e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_105e80:
    // 0x105e80: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x105e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105e84: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x105e84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105e88: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x105e88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105e8c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x105e8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105e90: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x105e90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105e94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x105e94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105e98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x105e98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x105EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105EA0u;
            // 0x105ea4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x105EA8u;
    ctx->pc = 0x105ea8u;
}
