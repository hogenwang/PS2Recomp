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

// Function: sub_00271D30
// Address: 0x271d30 - 0x271de0
void sub_00271D30_0x271d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271D30_0x271d30");
#endif

    switch (ctx->pc) {
        case 0x271d30u: goto label_271d30;
        case 0x271d34u: goto label_271d34;
        case 0x271d38u: goto label_271d38;
        case 0x271d3cu: goto label_271d3c;
        case 0x271d40u: goto label_271d40;
        case 0x271d44u: goto label_271d44;
        case 0x271d48u: goto label_271d48;
        case 0x271d4cu: goto label_271d4c;
        case 0x271d50u: goto label_271d50;
        case 0x271d54u: goto label_271d54;
        case 0x271d58u: goto label_271d58;
        case 0x271d5cu: goto label_271d5c;
        case 0x271d60u: goto label_271d60;
        case 0x271d64u: goto label_271d64;
        case 0x271d68u: goto label_271d68;
        case 0x271d6cu: goto label_271d6c;
        case 0x271d70u: goto label_271d70;
        case 0x271d74u: goto label_271d74;
        case 0x271d78u: goto label_271d78;
        case 0x271d7cu: goto label_271d7c;
        case 0x271d80u: goto label_271d80;
        case 0x271d84u: goto label_271d84;
        case 0x271d88u: goto label_271d88;
        case 0x271d8cu: goto label_271d8c;
        case 0x271d90u: goto label_271d90;
        case 0x271d94u: goto label_271d94;
        case 0x271d98u: goto label_271d98;
        case 0x271d9cu: goto label_271d9c;
        case 0x271da0u: goto label_271da0;
        case 0x271da4u: goto label_271da4;
        case 0x271da8u: goto label_271da8;
        case 0x271dacu: goto label_271dac;
        case 0x271db0u: goto label_271db0;
        case 0x271db4u: goto label_271db4;
        case 0x271db8u: goto label_271db8;
        case 0x271dbcu: goto label_271dbc;
        case 0x271dc0u: goto label_271dc0;
        case 0x271dc4u: goto label_271dc4;
        case 0x271dc8u: goto label_271dc8;
        case 0x271dccu: goto label_271dcc;
        case 0x271dd0u: goto label_271dd0;
        case 0x271dd4u: goto label_271dd4;
        case 0x271dd8u: goto label_271dd8;
        case 0x271ddcu: goto label_271ddc;
        default: break;
    }

    ctx->pc = 0x271d30u;

label_271d30:
    // 0x271d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x271d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_271d34:
    // 0x271d34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x271d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_271d38:
    // 0x271d38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x271d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_271d3c:
    // 0x271d3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x271d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_271d40:
    // 0x271d40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x271d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_271d44:
    // 0x271d44: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x271d44u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
label_271d48:
    // 0x271d48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x271d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_271d4c:
    // 0x271d4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x271d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_271d50:
    // 0x271d50: 0x26502d78  addiu       $s0, $s2, 0x2D78
    ctx->pc = 0x271d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 11640));
label_271d54:
    // 0x271d54: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x271d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_271d58:
    // 0x271d58: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x271d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_271d5c:
    // 0x271d5c: 0x8c420720  lw          $v0, 0x720($v0)
    ctx->pc = 0x271d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1824)));
label_271d60:
    // 0x271d60: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x271d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_271d64:
    // 0x271d64: 0x34210544  ori         $at, $at, 0x544
    ctx->pc = 0x271d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1348);
label_271d68:
    // 0x271d68: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x271d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
label_271d6c:
    // 0x271d6c: 0x40f809  jalr        $v0
label_271d70:
    if (ctx->pc == 0x271D70u) {
        ctx->pc = 0x271D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D6Cu;
        // 0x271d70: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D74u;
        goto label_271d74;
    }
    ctx->pc = 0x271D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x271D74u);
        ctx->pc = 0x271D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D6Cu;
        // 0x271d70: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271D6Cu, 0x271D74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x271D74u;
label_271d74:
    // 0x271d74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x271d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271d78:
    // 0x271d78: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x271d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_271d7c:
    // 0x271d7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x271d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_271d80:
    // 0x271d80: 0x2c820020  sltiu       $v0, $a0, 0x20
    ctx->pc = 0x271d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_271d84:
    // 0x271d84: 0x0  nop
    ctx->pc = 0x271d84u;
    // NOP
label_271d88:
    // 0x271d88: 0x0  nop
    ctx->pc = 0x271d88u;
    // NOP
label_271d8c:
    // 0x271d8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_271d90:
    if (ctx->pc == 0x271D90u) {
        ctx->pc = 0x271D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D8Cu;
        // 0x271d90: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271D94u;
        goto label_271d94;
    }
    ctx->pc = 0x271D8Cu;
    {
        const bool branch_taken_0x271d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271D8Cu;
        // 0x271d90: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d8c) {
            ctx->pc = 0x271D78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271d78;
        }
    }
    ctx->pc = 0x271D94u;
label_271d94:
    // 0x271d94: 0x26502d78  addiu       $s0, $s2, 0x2D78
    ctx->pc = 0x271d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 11640));
label_271d98:
    // 0x271d98: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x271d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_271d9c:
    // 0x271d9c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x271d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_271da0:
    // 0x271da0: 0xc043328  jal         func_10CCA0
label_271da4:
    if (ctx->pc == 0x271DA4u) {
        ctx->pc = 0x271DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DA0u;
        // 0x271da4: 0x8c8406d4  lw          $a0, 0x6D4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1748)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271DA8u;
        goto label_271da8;
    }
    ctx->pc = 0x271DA0u;
    SET_GPR_U32(ctx, 31, 0x271DA8u);
    ctx->pc = 0x271DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271DA0u;
    // 0x271da4: 0x8c8406d4  lw          $a0, 0x6D4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1748)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x271DA0u, 0x271DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DA8u;
label_271da8:
    // 0x271da8: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_271dac:
    if (ctx->pc == 0x271DACu) {
        ctx->pc = 0x271DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DA8u;
        // 0x271dac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271DB0u;
        goto label_271db0;
    }
    ctx->pc = 0x271DA8u;
    {
        const bool branch_taken_0x271da8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x271DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DA8u;
        // 0x271dac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271da8) {
            ctx->pc = 0x271DBCu;
            goto label_271dbc;
        }
    }
    ctx->pc = 0x271DB0u;
label_271db0:
    // 0x271db0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x271db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_271db4:
    // 0x271db4: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x271db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_271db8:
    // 0x271db8: 0x8ca506b4  lw          $a1, 0x6B4($a1)
    ctx->pc = 0x271db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1716)));
label_271dbc:
    // 0x271dbc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x271dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_271dc0:
    // 0x271dc0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x271dc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_271dc4:
    // 0x271dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x271dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_271dc8:
    // 0x271dc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x271dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271dcc:
    // 0x271dcc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x271dccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_271dd0:
    // 0x271dd0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x271dd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_271dd4:
    // 0x271dd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x271dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_271dd8:
    // 0x271dd8: 0x809c792  j           func_271E48
label_271ddc:
    if (ctx->pc == 0x271DDCu) {
        ctx->pc = 0x271DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271DD8u;
        // 0x271ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271DE0u;
        goto label_fallthrough_0x271dd8;
    }
    ctx->pc = 0x271DD8u;
    ctx->pc = 0x271DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271DD8u;
    // 0x271ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271E48u;
    sub_00271E48_0x271e48(rdram, ctx, runtime); return;
label_fallthrough_0x271dd8:
    ctx->pc = 0x271DE0u;
}
