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

// Function: sub_002B5AB8
// Address: 0x2b5ab8 - 0x2b5cd8
void sub_002B5AB8_0x2b5ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5AB8_0x2b5ab8");
#endif

    switch (ctx->pc) {
        case 0x2b5b9cu: goto label_2b5b9c;
        case 0x2b5bbcu: goto label_2b5bbc;
        case 0x2b5be8u: goto label_2b5be8;
        case 0x2b5bf0u: goto label_2b5bf0;
        case 0x2b5c18u: goto label_2b5c18;
        case 0x2b5c38u: goto label_2b5c38;
        default: break;
    }

    ctx->pc = 0x2b5ab8u;

    // 0x2b5ab8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b5ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b5abc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b5abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b5ac0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b5ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b5ac4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2b5ac4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ac8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b5ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b5acc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b5accu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ad0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b5ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b5ad4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b5ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ad8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2b5ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2b5adc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ae0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2b5ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2b5ae4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b5ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b5ae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5aec: 0x8e280054  lw          $t0, 0x54($s1)
    ctx->pc = 0x2b5aecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b5af0: 0x8d06008c  lw          $a2, 0x8C($t0)
    ctx->pc = 0x2b5af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 140)));
    // 0x2b5af4: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x2b5af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2b5af8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B5AF8u;
    {
        const bool branch_taken_0x2b5af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5AF8u;
        // 0x2b5afc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5af8) {
            ctx->pc = 0x2B5B4Cu;
            goto label_2b5b4c;
        }
    }
    ctx->pc = 0x2B5B00u;
    // 0x2b5b00: 0x52800005  beql        $s4, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5B00u;
    {
        const bool branch_taken_0x2b5b00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5b00) {
            ctx->pc = 0x2B5B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5B00u;
            // 0x2b5b04: 0x8d030090  lw          $v1, 0x90($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5B18u;
            goto label_2b5b18;
        }
    }
    ctx->pc = 0x2B5B08u;
    // 0x2b5b08: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2b5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2b5b0c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2b5b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2b5b10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5B10u;
    {
        const bool branch_taken_0x2b5b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B10u;
        // 0x2b5b14: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b10) {
            ctx->pc = 0x2B5B28u;
            goto label_2b5b28;
        }
    }
    ctx->pc = 0x2B5B18u;
label_2b5b18:
    // 0x2b5b18: 0x8d020094  lw          $v0, 0x94($t0)
    ctx->pc = 0x2b5b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 148)));
    // 0x2b5b1c: 0xae32004c  sw          $s2, 0x4C($s1)
    ctx->pc = 0x2b5b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 18));
    // 0x2b5b20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b5b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b5b24: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x2b5b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_2b5b28:
    // 0x2b5b28: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x2b5b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2b5b2c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2b5b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5b30: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x2b5b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2b5b34: 0xac83008c  sw          $v1, 0x8C($a0)
    ctx->pc = 0x2b5b34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
    // 0x2b5b38: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2b5b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b5b3c: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x2b5b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x2b5b40: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2b5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2b5b44: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2B5B44u;
    {
        const bool branch_taken_0x2b5b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B44u;
        // 0x2b5b48: 0xac830090  sw          $v1, 0x90($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b44) {
            ctx->pc = 0x2B5CB0u;
            goto label_2b5cb0;
        }
    }
    ctx->pc = 0x2B5B4Cu;
label_2b5b4c:
    // 0x2b5b4c: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x2b5b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2b5b50: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b5b50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5b54: 0x8d030098  lw          $v1, 0x98($t0)
    ctx->pc = 0x2b5b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 152)));
    // 0x2b5b58: 0x244980a  movz        $s3, $s2, $a0
    ctx->pc = 0x2b5b58u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 18));
    // 0x2b5b5c: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x2b5b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2b5b60: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5B60u;
    {
        const bool branch_taken_0x2b5b60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B60u;
        // 0x2b5b64: 0x62980b  movn        $s3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b60) {
            ctx->pc = 0x2B5B7Cu;
            goto label_2b5b7c;
        }
    }
    ctx->pc = 0x2B5B68u;
    // 0x2b5b68: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2b5b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2b5b6c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B5B6Cu;
    {
        const bool branch_taken_0x2b5b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B6Cu;
        // 0x2b5b70: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b6c) {
            ctx->pc = 0x2B5BD0u;
            goto label_2b5bd0;
        }
    }
    ctx->pc = 0x2B5B74u;
    // 0x2b5b74: 0x52800017  beql        $s4, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B5B74u;
    {
        const bool branch_taken_0x2b5b74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5b74) {
            ctx->pc = 0x2B5B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5B74u;
            // 0x2b5b78: 0x8d020094  lw          $v0, 0x94($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5BD4u;
            goto label_2b5bd4;
        }
    }
    ctx->pc = 0x2B5B7Cu;
label_2b5b7c:
    // 0x2b5b7c: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5B7Cu;
    {
        const bool branch_taken_0x2b5b7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B7Cu;
        // 0x2b5b80: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b7c) {
            ctx->pc = 0x2B5BA4u;
            goto label_2b5ba4;
        }
    }
    ctx->pc = 0x2B5B84u;
    // 0x2b5b84: 0x8e250048  lw          $a1, 0x48($s1)
    ctx->pc = 0x2b5b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2b5b88: 0x8d040094  lw          $a0, 0x94($t0)
    ctx->pc = 0x2b5b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 148)));
    // 0x2b5b8c: 0x10a4000e  beq         $a1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B5B8Cu;
    {
        const bool branch_taken_0x2b5b8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B5B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B8Cu;
        // 0x2b5b90: 0x8e35004c  lw          $s5, 0x4C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b8c) {
            ctx->pc = 0x2B5BC8u;
            goto label_2b5bc8;
        }
    }
    ctx->pc = 0x2B5B94u;
    // 0x2b5b94: 0xc049c48  jal         func_127120
    ctx->pc = 0x2B5B94u;
    SET_GPR_U32(ctx, 31, 0x2B5B9Cu);
    ctx->pc = 0x2B5B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5B94u;
    // 0x2b5b98: 0x2153021  addu        $a2, $s0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2B5B94u, 0x2B5B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5B9Cu;
label_2b5b9c:
    // 0x2b5b9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B5B9Cu;
    {
        const bool branch_taken_0x2b5b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B9Cu;
        // 0x2b5ba0: 0x8e280054  lw          $t0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b9c) {
            ctx->pc = 0x2B5BC8u;
            goto label_2b5bc8;
        }
    }
    ctx->pc = 0x2B5BA4u;
label_2b5ba4:
    // 0x2b5ba4: 0x8d020090  lw          $v0, 0x90($t0)
    ctx->pc = 0x2b5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 144)));
    // 0x2b5ba8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5BA8u;
    {
        const bool branch_taken_0x2b5ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BA8u;
        // 0x2b5bac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ba8) {
            ctx->pc = 0x2B5BC8u;
            goto label_2b5bc8;
        }
    }
    ctx->pc = 0x2B5BB0u;
    // 0x2b5bb0: 0x8d040094  lw          $a0, 0x94($t0)
    ctx->pc = 0x2b5bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 148)));
    // 0x2b5bb4: 0xc049c48  jal         func_127120
    ctx->pc = 0x2B5BB4u;
    SET_GPR_U32(ctx, 31, 0x2B5BBCu);
    ctx->pc = 0x2B5BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5BB4u;
    // 0x2b5bb8: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2B5BB4u, 0x2B5BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5BBCu;
label_2b5bbc:
    // 0x2b5bbc: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2b5bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b5bc0: 0xac600090  sw          $zero, 0x90($v1)
    ctx->pc = 0x2b5bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 0));
    // 0x2b5bc4: 0x8e280054  lw          $t0, 0x54($s1)
    ctx->pc = 0x2b5bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b5bc8:
    // 0x2b5bc8: 0xad00008c  sw          $zero, 0x8C($t0)
    ctx->pc = 0x2b5bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 140), GPR_U32(ctx, 0));
    // 0x2b5bcc: 0x8e280054  lw          $t0, 0x54($s1)
    ctx->pc = 0x2b5bccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b5bd0:
    // 0x2b5bd0: 0x8d020094  lw          $v0, 0x94($t0)
    ctx->pc = 0x2b5bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 148)));
label_2b5bd4:
    // 0x2b5bd4: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x2b5bd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2b5bd8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B5BD8u;
    {
        const bool branch_taken_0x2b5bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BD8u;
        // 0x2b5bdc: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5bd8) {
            ctx->pc = 0x2B5C58u;
            goto label_2b5c58;
        }
    }
    ctx->pc = 0x2B5BE0u;
    // 0x2b5be0: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x2b5be0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b5be4: 0x0  nop
    ctx->pc = 0x2b5be4u;
    // NOP
label_2b5be8:
    // 0x2b5be8: 0xc0491f2  jal         func_1247C8
    ctx->pc = 0x2B5BE8u;
    SET_GPR_U32(ctx, 31, 0x2B5BF0u);
    ctx->pc = 0x1247C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1247C8u, 0x2B5BE8u, 0x2B5BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5BF0u;
label_2b5bf0:
    // 0x2b5bf0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b5bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b5bf4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2b5bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b5bf8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5BF8u;
    {
        const bool branch_taken_0x2b5bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BF8u;
        // 0x2b5bfc: 0x2b02821  addu        $a1, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5bf8) {
            ctx->pc = 0x2B5C20u;
            goto label_2b5c20;
        }
    }
    ctx->pc = 0x2B5C00u;
    // 0x2b5c00: 0xae360018  sw          $s6, 0x18($s1)
    ctx->pc = 0x2b5c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 22));
    // 0x2b5c04: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2b5c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b5c08: 0x2703023  subu        $a2, $s3, $s0
    ctx->pc = 0x2b5c08u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2b5c0c: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x2b5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2b5c10: 0xc0a1468  jal         func_2851A0
    ctx->pc = 0x2B5C10u;
    SET_GPR_U32(ctx, 31, 0x2B5C18u);
    ctx->pc = 0x2B5C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C10u;
    // 0x2b5c14: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2851A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851A0u, 0x2B5C10u, 0x2B5C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C18u;
label_2b5c18:
    // 0x2b5c18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5C18u;
    {
        const bool branch_taken_0x2b5c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5c18) {
            ctx->pc = 0x2B5C3Cu;
            goto label_2b5c3c;
        }
    }
    ctx->pc = 0x2B5C20u;
label_2b5c20:
    // 0x2b5c20: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b5c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b5c24: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x2b5c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2b5c28: 0x240600d3  addiu       $a2, $zero, 0xD3
    ctx->pc = 0x2b5c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
    // 0x2b5c2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b5c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5c30: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B5C30u;
    SET_GPR_U32(ctx, 31, 0x2B5C38u);
    ctx->pc = 0x2B5C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5C30u;
    // 0x2b5c34: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B5C30u, 0x2B5C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5C38u;
label_2b5c38:
    // 0x2b5c38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b5c3c:
    // 0x2b5c3c: 0x58400012  blezl       $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B5C3Cu;
    {
        const bool branch_taken_0x2b5c3c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b5c3c) {
            ctx->pc = 0x2B5C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5C3Cu;
            // 0x2b5c40: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5C88u;
            goto label_2b5c88;
        }
    }
    ctx->pc = 0x2B5C44u;
    // 0x2b5c44: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b5c44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b5c48: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x2b5c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2b5c4c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2B5C4Cu;
    {
        const bool branch_taken_0x2b5c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5c4c) {
            ctx->pc = 0x2B5BE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5be8;
        }
    }
    ctx->pc = 0x2B5C54u;
    // 0x2b5c54: 0x8e280054  lw          $t0, 0x54($s1)
    ctx->pc = 0x2b5c54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2b5c58:
    // 0x2b5c58: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x2b5c58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2b5c5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5C5Cu;
    {
        const bool branch_taken_0x2b5c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C5Cu;
        // 0x2b5c60: 0x2551021  addu        $v0, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c5c) {
            ctx->pc = 0x2B5C78u;
            goto label_2b5c78;
        }
    }
    ctx->pc = 0x2B5C64u;
    // 0x2b5c64: 0x2122023  subu        $a0, $s0, $s2
    ctx->pc = 0x2b5c64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2b5c68: 0xad020090  sw          $v0, 0x90($t0)
    ctx->pc = 0x2b5c68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 144), GPR_U32(ctx, 2));
    // 0x2b5c6c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2b5c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b5c70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5C70u;
    {
        const bool branch_taken_0x2b5c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C70u;
        // 0x2b5c74: 0xac64008c  sw          $a0, 0x8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c70) {
            ctx->pc = 0x2B5C98u;
            goto label_2b5c98;
        }
    }
    ctx->pc = 0x2B5C78u;
label_2b5c78:
    // 0x2b5c78: 0xad000090  sw          $zero, 0x90($t0)
    ctx->pc = 0x2b5c78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 144), GPR_U32(ctx, 0));
    // 0x2b5c7c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x2b5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2b5c80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5C80u;
    {
        const bool branch_taken_0x2b5c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C80u;
        // 0x2b5c84: 0xac40008c  sw          $zero, 0x8C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c80) {
            ctx->pc = 0x2B5C98u;
            goto label_2b5c98;
        }
    }
    ctx->pc = 0x2B5C88u;
label_2b5c88:
    // 0x2b5c88: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x2b5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2b5c8c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2b5c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2b5c90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5C90u;
    {
        const bool branch_taken_0x2b5c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C90u;
        // 0x2b5c94: 0xac83008c  sw          $v1, 0x8C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c90) {
            ctx->pc = 0x2B5CB0u;
            goto label_2b5cb0;
        }
    }
    ctx->pc = 0x2B5C98u;
label_2b5c98:
    // 0x2b5c98: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2b5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2b5c9c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2b5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2b5ca0: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x2b5ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x2b5ca4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b5ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5ca8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2b5ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5cac: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2b5cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_2b5cb0:
    // 0x2b5cb0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2b5cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b5cb4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2b5cb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b5cb8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b5cb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b5cbc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b5cbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b5cc0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b5cc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b5cc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b5cc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5cc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b5cc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CD0u;
        // 0x2b5cd4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5CD8u;
}
