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

// Function: sub_001B5DC8
// Address: 0x1b5dc8 - 0x1b5f18
void sub_001B5DC8_0x1b5dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5DC8_0x1b5dc8");
#endif

    switch (ctx->pc) {
        case 0x1b5dc8u: goto label_1b5dc8;
        case 0x1b5dccu: goto label_1b5dcc;
        case 0x1b5dd0u: goto label_1b5dd0;
        case 0x1b5dd4u: goto label_1b5dd4;
        case 0x1b5dd8u: goto label_1b5dd8;
        case 0x1b5ddcu: goto label_1b5ddc;
        case 0x1b5de0u: goto label_1b5de0;
        case 0x1b5de4u: goto label_1b5de4;
        case 0x1b5de8u: goto label_1b5de8;
        case 0x1b5decu: goto label_1b5dec;
        case 0x1b5df0u: goto label_1b5df0;
        case 0x1b5df4u: goto label_1b5df4;
        case 0x1b5df8u: goto label_1b5df8;
        case 0x1b5dfcu: goto label_1b5dfc;
        case 0x1b5e00u: goto label_1b5e00;
        case 0x1b5e04u: goto label_1b5e04;
        case 0x1b5e08u: goto label_1b5e08;
        case 0x1b5e0cu: goto label_1b5e0c;
        case 0x1b5e10u: goto label_1b5e10;
        case 0x1b5e14u: goto label_1b5e14;
        case 0x1b5e18u: goto label_1b5e18;
        case 0x1b5e1cu: goto label_1b5e1c;
        case 0x1b5e20u: goto label_1b5e20;
        case 0x1b5e24u: goto label_1b5e24;
        case 0x1b5e28u: goto label_1b5e28;
        case 0x1b5e2cu: goto label_1b5e2c;
        case 0x1b5e30u: goto label_1b5e30;
        case 0x1b5e34u: goto label_1b5e34;
        case 0x1b5e38u: goto label_1b5e38;
        case 0x1b5e3cu: goto label_1b5e3c;
        case 0x1b5e40u: goto label_1b5e40;
        case 0x1b5e44u: goto label_1b5e44;
        case 0x1b5e48u: goto label_1b5e48;
        case 0x1b5e4cu: goto label_1b5e4c;
        case 0x1b5e50u: goto label_1b5e50;
        case 0x1b5e54u: goto label_1b5e54;
        case 0x1b5e58u: goto label_1b5e58;
        case 0x1b5e5cu: goto label_1b5e5c;
        case 0x1b5e60u: goto label_1b5e60;
        case 0x1b5e64u: goto label_1b5e64;
        case 0x1b5e68u: goto label_1b5e68;
        case 0x1b5e6cu: goto label_1b5e6c;
        case 0x1b5e70u: goto label_1b5e70;
        case 0x1b5e74u: goto label_1b5e74;
        case 0x1b5e78u: goto label_1b5e78;
        case 0x1b5e7cu: goto label_1b5e7c;
        case 0x1b5e80u: goto label_1b5e80;
        case 0x1b5e84u: goto label_1b5e84;
        case 0x1b5e88u: goto label_1b5e88;
        case 0x1b5e8cu: goto label_1b5e8c;
        case 0x1b5e90u: goto label_1b5e90;
        case 0x1b5e94u: goto label_1b5e94;
        case 0x1b5e98u: goto label_1b5e98;
        case 0x1b5e9cu: goto label_1b5e9c;
        case 0x1b5ea0u: goto label_1b5ea0;
        case 0x1b5ea4u: goto label_1b5ea4;
        case 0x1b5ea8u: goto label_1b5ea8;
        case 0x1b5eacu: goto label_1b5eac;
        case 0x1b5eb0u: goto label_1b5eb0;
        case 0x1b5eb4u: goto label_1b5eb4;
        case 0x1b5eb8u: goto label_1b5eb8;
        case 0x1b5ebcu: goto label_1b5ebc;
        case 0x1b5ec0u: goto label_1b5ec0;
        case 0x1b5ec4u: goto label_1b5ec4;
        case 0x1b5ec8u: goto label_1b5ec8;
        case 0x1b5eccu: goto label_1b5ecc;
        case 0x1b5ed0u: goto label_1b5ed0;
        case 0x1b5ed4u: goto label_1b5ed4;
        case 0x1b5ed8u: goto label_1b5ed8;
        case 0x1b5edcu: goto label_1b5edc;
        case 0x1b5ee0u: goto label_1b5ee0;
        case 0x1b5ee4u: goto label_1b5ee4;
        case 0x1b5ee8u: goto label_1b5ee8;
        case 0x1b5eecu: goto label_1b5eec;
        case 0x1b5ef0u: goto label_1b5ef0;
        case 0x1b5ef4u: goto label_1b5ef4;
        case 0x1b5ef8u: goto label_1b5ef8;
        case 0x1b5efcu: goto label_1b5efc;
        case 0x1b5f00u: goto label_1b5f00;
        case 0x1b5f04u: goto label_1b5f04;
        case 0x1b5f08u: goto label_1b5f08;
        case 0x1b5f0cu: goto label_1b5f0c;
        case 0x1b5f10u: goto label_1b5f10;
        case 0x1b5f14u: goto label_1b5f14;
        default: break;
    }

    ctx->pc = 0x1b5dc8u;

label_1b5dc8:
    // 0x1b5dc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b5dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b5dcc:
    // 0x1b5dcc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b5dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1b5dd0:
    // 0x1b5dd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b5dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1b5dd4:
    // 0x1b5dd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b5dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5dd8:
    // 0x1b5dd8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1b5dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1b5ddc:
    // 0x1b5ddc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b5ddcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5de0:
    // 0x1b5de0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b5de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b5de4:
    // 0x1b5de4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1b5de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1b5de8:
    // 0x1b5de8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b5de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1b5dec:
    // 0x1b5dec: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x1b5decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1b5df0:
    // 0x1b5df0: 0x82430002  lb          $v1, 0x2($s2)
    ctx->pc = 0x1b5df0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_1b5df4:
    // 0x1b5df4: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x1b5df4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1b5df8:
    // 0x1b5df8: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_1b5dfc:
    if (ctx->pc == 0x1B5DFCu) {
        ctx->pc = 0x1B5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DF8u;
        // 0x1b5dfc: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E00u;
        goto label_1b5e00;
    }
    ctx->pc = 0x1B5DF8u;
    {
        const bool branch_taken_0x1b5df8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1B5DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5DF8u;
        // 0x1b5dfc: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5df8) {
            ctx->pc = 0x1B5E64u;
            goto label_1b5e64;
        }
    }
    ctx->pc = 0x1B5E00u;
label_1b5e00:
    // 0x1b5e00: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x1b5e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1b5e04:
    // 0x1b5e04: 0x0  nop
    ctx->pc = 0x1b5e04u;
    // NOP
label_1b5e08:
    // 0x1b5e08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b5e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5e0c:
    // 0x1b5e0c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1b5e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1b5e10:
    // 0x1b5e10: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1b5e10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b5e14:
    // 0x1b5e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5e18:
    // 0x1b5e18: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b5e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5e1c:
    // 0x1b5e1c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1b5e1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1b5e20:
    // 0x1b5e20: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1b5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1b5e24:
    // 0x1b5e24: 0x40f809  jalr        $v0
label_1b5e28:
    if (ctx->pc == 0x1B5E28u) {
        ctx->pc = 0x1B5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E24u;
        // 0x1b5e28: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E2Cu;
        goto label_1b5e2c;
    }
    ctx->pc = 0x1B5E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5E2Cu);
        ctx->pc = 0x1B5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E24u;
        // 0x1b5e28: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5E24u, 0x1B5E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5E2Cu;
label_1b5e2c:
    // 0x1b5e2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b5e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5e30:
    // 0x1b5e30: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x1b5e30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1b5e34:
    // 0x1b5e34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5e38:
    // 0x1b5e38: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1b5e38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5e3c:
    // 0x1b5e3c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b5e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b5e40:
    // 0x1b5e40: 0x228102a  slt         $v0, $s1, $t0
    ctx->pc = 0x1b5e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1b5e44:
    // 0x1b5e44: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b5e44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1b5e48:
    // 0x1b5e48: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x1b5e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_1b5e4c:
    // 0x1b5e4c: 0x60f809  jalr        $v1
label_1b5e50:
    if (ctx->pc == 0x1B5E50u) {
        ctx->pc = 0x1B5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E4Cu;
        // 0x1b5e50: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E54u;
        goto label_1b5e54;
    }
    ctx->pc = 0x1B5E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5E54u);
        ctx->pc = 0x1B5E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E4Cu;
        // 0x1b5e50: 0x102880a  movz        $s1, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5E4Cu, 0x1B5E54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5E54u;
label_1b5e54:
    // 0x1b5e54: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x1b5e54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_1b5e58:
    // 0x1b5e58: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1b5e58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b5e5c:
    // 0x1b5e5c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_1b5e60:
    if (ctx->pc == 0x1B5E60u) {
        ctx->pc = 0x1B5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E5Cu;
        // 0x1b5e60: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E64u;
        goto label_1b5e64;
    }
    ctx->pc = 0x1B5E5Cu;
    {
        const bool branch_taken_0x1b5e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E5Cu;
        // 0x1b5e60: 0x92440002  lbu         $a0, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e5c) {
            ctx->pc = 0x1B5E08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b5e08;
        }
    }
    ctx->pc = 0x1B5E64u;
label_1b5e64:
    // 0x1b5e64: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x1b5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_1b5e68:
    // 0x1b5e68: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1b5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1b5e6c:
    // 0x1b5e6c: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x1b5e6cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_1b5e70:
    // 0x1b5e70: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x1b5e70u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_1b5e74:
    // 0x1b5e74: 0x1a200020  blez        $s1, . + 4 + (0x20 << 2)
label_1b5e78:
    if (ctx->pc == 0x1B5E78u) {
        ctx->pc = 0x1B5E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E74u;
        // 0x1b5e78: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E7Cu;
        goto label_1b5e7c;
    }
    ctx->pc = 0x1B5E74u;
    {
        const bool branch_taken_0x1b5e74 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1B5E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E74u;
        // 0x1b5e78: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e74) {
            ctx->pc = 0x1B5EF8u;
            goto label_1b5ef8;
        }
    }
    ctx->pc = 0x1B5E7Cu;
label_1b5e7c:
    // 0x1b5e7c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x1b5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1b5e80:
    // 0x1b5e80: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_1b5e84:
    if (ctx->pc == 0x1B5E84u) {
        ctx->pc = 0x1B5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E80u;
        // 0x1b5e84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5E88u;
        goto label_1b5e88;
    }
    ctx->pc = 0x1B5E80u;
    {
        const bool branch_taken_0x1b5e80 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5E80u;
        // 0x1b5e84: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e80) {
            ctx->pc = 0x1B5EE8u;
            goto label_1b5ee8;
        }
    }
    ctx->pc = 0x1B5E88u;
label_1b5e88:
    // 0x1b5e88: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x1b5e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1b5e8c:
    // 0x1b5e8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b5e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5e90:
    // 0x1b5e90: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1b5e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b5e94:
    // 0x1b5e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5e98:
    // 0x1b5e98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1b5e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b5e9c:
    // 0x1b5e9c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b5e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5ea0:
    // 0x1b5ea0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1b5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1b5ea4:
    // 0x1b5ea4: 0x40f809  jalr        $v0
label_1b5ea8:
    if (ctx->pc == 0x1B5EA8u) {
        ctx->pc = 0x1B5EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EA4u;
        // 0x1b5ea8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EACu;
        goto label_1b5eac;
    }
    ctx->pc = 0x1B5EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5EACu);
        ctx->pc = 0x1B5EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EA4u;
        // 0x1b5ea8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5EA4u, 0x1B5EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5EACu;
label_1b5eac:
    // 0x1b5eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b5eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5eb0:
    // 0x1b5eb0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b5eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5eb4:
    // 0x1b5eb4: 0xc049cb6  jal         func_1272D8
label_1b5eb8:
    if (ctx->pc == 0x1B5EB8u) {
        ctx->pc = 0x1B5EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EB4u;
        // 0x1b5eb8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EBCu;
        goto label_1b5ebc;
    }
    ctx->pc = 0x1B5EB4u;
    SET_GPR_U32(ctx, 31, 0x1B5EBCu);
    ctx->pc = 0x1B5EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5EB4u;
    // 0x1b5eb8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1B5EB4u, 0x1B5EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5EBCu;
label_1b5ebc:
    // 0x1b5ebc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b5ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b5ec0:
    // 0x1b5ec0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5ec4:
    // 0x1b5ec4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1b5ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b5ec8:
    // 0x1b5ec8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b5ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5ecc:
    // 0x1b5ecc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1b5eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1b5ed0:
    // 0x1b5ed0: 0x60f809  jalr        $v1
label_1b5ed4:
    if (ctx->pc == 0x1B5ED4u) {
        ctx->pc = 0x1B5ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5ED0u;
        // 0x1b5ed4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5ED8u;
        goto label_1b5ed8;
    }
    ctx->pc = 0x1B5ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5ED8u);
        ctx->pc = 0x1B5ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5ED0u;
        // 0x1b5ed4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5ED0u, 0x1B5ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5ED8u;
label_1b5ed8:
    // 0x1b5ed8: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x1b5ed8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_1b5edc:
    // 0x1b5edc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1b5edcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b5ee0:
    // 0x1b5ee0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_1b5ee4:
    if (ctx->pc == 0x1B5EE4u) {
        ctx->pc = 0x1B5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5EE0u;
        // 0x1b5ee4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5EE8u;
        goto label_1b5ee8;
    }
    ctx->pc = 0x1B5EE0u;
    {
        const bool branch_taken_0x1b5ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ee0) {
            ctx->pc = 0x1B5EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5EE0u;
            // 0x1b5ee4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5E90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b5e90;
        }
    }
    ctx->pc = 0x1B5EE8u;
label_1b5ee8:
    // 0x1b5ee8: 0x8e4200a0  lw          $v0, 0xA0($s2)
    ctx->pc = 0x1b5ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1b5eec:
    // 0x1b5eec: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x1b5eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1b5ef0:
    // 0x1b5ef0: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x1b5ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
label_1b5ef4:
    // 0x1b5ef4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b5ef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b5ef8:
    // 0x1b5ef8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b5ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b5efc:
    // 0x1b5efc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b5efcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b5f00:
    // 0x1b5f00: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1b5f00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5f04:
    // 0x1b5f04: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1b5f04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b5f08:
    // 0x1b5f08: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b5f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1b5f0c:
    // 0x1b5f0c: 0x3e00008  jr          $ra
label_1b5f10:
    if (ctx->pc == 0x1B5F10u) {
        ctx->pc = 0x1B5F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F0Cu;
        // 0x1b5f10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5F14u;
        goto label_1b5f14;
    }
    ctx->pc = 0x1B5F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5F0Cu;
        // 0x1b5f10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5F14u;
label_1b5f14:
    // 0x1b5f14: 0x0  nop
    ctx->pc = 0x1b5f14u;
    // NOP
}
