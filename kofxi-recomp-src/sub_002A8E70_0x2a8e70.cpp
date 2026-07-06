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

// Function: sub_002A8E70
// Address: 0x2a8e70 - 0x2a9168
void sub_002A8E70_0x2a8e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8E70_0x2a8e70");
#endif

    switch (ctx->pc) {
        case 0x2a8ea4u: goto label_2a8ea4;
        case 0x2a8f2cu: goto label_2a8f2c;
        case 0x2a8f50u: goto label_2a8f50;
        case 0x2a8f70u: goto label_2a8f70;
        case 0x2a8f98u: goto label_2a8f98;
        case 0x2a8fc4u: goto label_2a8fc4;
        case 0x2a8fe0u: goto label_2a8fe0;
        case 0x2a9054u: goto label_2a9054;
        case 0x2a9070u: goto label_2a9070;
        case 0x2a9110u: goto label_2a9110;
        case 0x2a9130u: goto label_2a9130;
        default: break;
    }

    ctx->pc = 0x2a8e70u;

    // 0x2a8e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a8e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a8e74: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2a8e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a8e78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a8e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a8e7c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2a8e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a8e80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a8e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a8e84: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2a8e84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e88: 0x37a80004  ori         $t0, $sp, 0x4
    ctx->pc = 0x2a8e88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2a8e8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a8e8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e90: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2a8e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a8e94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a8e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8e98: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2a8e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2a8e9c: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2A8E9Cu;
    SET_GPR_U32(ctx, 31, 0x2A8EA4u);
    ctx->pc = 0x2A8EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8E9Cu;
    // 0x2a8ea0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2630u, 0x2A8E9Cu, 0x2A8EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8EA4u;
label_2a8ea4:
    // 0x2a8ea4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2a8ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a8ea8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8EA8u;
    {
        const bool branch_taken_0x2a8ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8EA8u;
        // 0x2a8eac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8ea8) {
            ctx->pc = 0x2A8EC8u;
            goto label_2a8ec8;
        }
    }
    ctx->pc = 0x2A8EB0u;
    // 0x2a8eb0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a8eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a8eb4: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x2a8eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a8eb8: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2a8eb8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a8ebc: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2a8ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2a8ec0: 0x64800a  movz        $s0, $v1, $a0
    ctx->pc = 0x2a8ec0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2a8ec4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a8ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a8ec8:
    // 0x2a8ec8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a8ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8ecc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a8eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8ED0u;
        // 0x2a8ed4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8ED8u;
    // 0x2a8ed8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a8ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a8edc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a8edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a8ee0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2a8ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2a8ee4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2a8ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ee8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2a8ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2a8eec: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2a8eecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ef0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2a8ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2a8ef4: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2a8ef4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8ef8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a8ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a8efc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2a8efcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f00: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2a8f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2a8f04: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a8f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f08: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2a8f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2a8f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f10: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a8f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a8f14: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a8f14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a8f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2a8f1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a8f1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f20: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2a8f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2a8f24: 0xc0aa588  jal         func_2A9620
    ctx->pc = 0x2A8F24u;
    SET_GPR_U32(ctx, 31, 0x2A8F2Cu);
    ctx->pc = 0x2A8F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8F24u;
    // 0x2a8f28: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9620u, 0x2A8F24u, 0x2A8F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8F2Cu;
label_2a8f2c:
    // 0x2a8f2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a8f2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f30: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A8F30u;
    {
        const bool branch_taken_0x2a8f30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F30u;
        // 0x2a8f34: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f30) {
            ctx->pc = 0x2A8FD0u;
            goto label_2a8fd0;
        }
    }
    ctx->pc = 0x2A8F38u;
    // 0x2a8f38: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2a8f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a8f3c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2a8f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a8f40: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2a8f40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f44: 0x37a80004  ori         $t0, $sp, 0x4
    ctx->pc = 0x2a8f44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2a8f48: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x2A8F48u;
    SET_GPR_U32(ctx, 31, 0x2A8F50u);
    ctx->pc = 0x2A8F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8F48u;
    // 0x2a8f4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2630u, 0x2A8F48u, 0x2A8F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8F50u;
label_2a8f50:
    // 0x2a8f50: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2A8F50u;
    {
        const bool branch_taken_0x2a8f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F50u;
        // 0x2a8f54: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f50) {
            ctx->pc = 0x2A8FD0u;
            goto label_2a8fd0;
        }
    }
    ctx->pc = 0x2A8F58u;
    // 0x2a8f58: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A8F58u;
    {
        const bool branch_taken_0x2a8f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8f58) {
            ctx->pc = 0x2A8FD0u;
            goto label_2a8fd0;
        }
    }
    ctx->pc = 0x2A8F60u;
    // 0x2a8f60: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2a8f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2a8f64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a8f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f68: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2A8F68u;
    SET_GPR_U32(ctx, 31, 0x2A8F70u);
    ctx->pc = 0x2A8F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8F68u;
    // 0x2a8f6c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2A8F68u, 0x2A8F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8F70u;
label_2a8f70:
    // 0x2a8f70: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a8f70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f74: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x2A8F74u;
    {
        const bool branch_taken_0x2a8f74 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8F74u;
        // 0x2a8f78: 0x8fa70008  lw          $a3, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8f74) {
            ctx->pc = 0x2A8FE0u;
            goto label_2a8fe0;
        }
    }
    ctx->pc = 0x2A8F7Cu;
    // 0x2a8f7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a8f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f80: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2a8f80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f84: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2a8f84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a8f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8f8c: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x2a8f8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2a8f90: 0xc0a80fc  jal         func_2A03F0
    ctx->pc = 0x2A8F90u;
    SET_GPR_U32(ctx, 31, 0x2A8F98u);
    ctx->pc = 0x2A8F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8F90u;
    // 0x2a8f94: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A03F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A03F0u, 0x2A8F90u, 0x2A8F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8F98u;
label_2a8f98:
    // 0x2a8f98: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A8F98u;
    {
        const bool branch_taken_0x2a8f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a8f98) {
            ctx->pc = 0x2A8FD0u;
            goto label_2a8fd0;
        }
    }
    ctx->pc = 0x2A8FA0u;
    // 0x2a8fa0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A8FA0u;
    {
        const bool branch_taken_0x2a8fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FA0u;
        // 0x2a8fa4: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fa0) {
            ctx->pc = 0x2A8FCCu;
            goto label_2a8fcc;
        }
    }
    ctx->pc = 0x2A8FA8u;
    // 0x2a8fa8: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x2a8fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2a8fac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A8FACu;
    {
        const bool branch_taken_0x2a8fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FACu;
        // 0x2a8fb0: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fac) {
            ctx->pc = 0x2A8FCCu;
            goto label_2a8fcc;
        }
    }
    ctx->pc = 0x2A8FB4u;
    // 0x2a8fb4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2a8fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8fb8: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x2a8fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2a8fbc: 0xc049c22  jal         func_127088
    ctx->pc = 0x2A8FBCu;
    SET_GPR_U32(ctx, 31, 0x2A8FC4u);
    ctx->pc = 0x2A8FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8FBCu;
    // 0x2a8fc0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2A8FBCu, 0x2A8FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8FC4u;
label_2a8fc4:
    // 0x2a8fc4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A8FC4u;
    {
        const bool branch_taken_0x2a8fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FC4u;
        // 0x2a8fc8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fc4) {
            ctx->pc = 0x2A8FD0u;
            goto label_2a8fd0;
        }
    }
    ctx->pc = 0x2A8FCCu;
label_2a8fcc:
    // 0x2a8fcc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a8fccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8fd0:
    // 0x2a8fd0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8FD0u;
    {
        const bool branch_taken_0x2a8fd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8FD0u;
        // 0x2a8fd4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8fd0) {
            ctx->pc = 0x2A8FE4u;
            goto label_2a8fe4;
        }
    }
    ctx->pc = 0x2A8FD8u;
    // 0x2a8fd8: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A8FD8u;
    SET_GPR_U32(ctx, 31, 0x2A8FE0u);
    ctx->pc = 0x2A8FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8FD8u;
    // 0x2a8fdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2A8FD8u, 0x2A8FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8FE0u;
label_2a8fe0:
    // 0x2a8fe0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2a8fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a8fe4:
    // 0x2a8fe4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a8fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a8fe8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2a8fe8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a8fec: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2a8fecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a8ff0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2a8ff0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a8ff4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2a8ff4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a8ff8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2a8ff8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a8ffc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a8ffcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9000: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2a9000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9004: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a9004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9008: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A900Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9008u;
        // 0x2a900c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9010u;
    // 0x2a9010: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a9010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a9014: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a9014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a9018: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2a9018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2a901c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a901cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9020: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2a9020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2a9024: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2a9024u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9028: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2a9028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2a902c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2a902cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9030: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2a9030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2a9034: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2a9034u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9038: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a9038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a903c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2a903cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9040: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2a9040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2a9044: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2a9044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9048: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a9048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a904c: 0xc0aa588  jal         func_2A9620
    ctx->pc = 0x2A904Cu;
    SET_GPR_U32(ctx, 31, 0x2A9054u);
    ctx->pc = 0x2A9050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A904Cu;
    // 0x2a9050: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9620u, 0x2A904Cu, 0x2A9054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9054u;
label_2a9054:
    // 0x2a9054: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a9054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9058: 0x12200037  beqz        $s1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2A9058u;
    {
        const bool branch_taken_0x2a9058 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9058u;
        // 0x2a905c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9058) {
            ctx->pc = 0x2A9138u;
            goto label_2a9138;
        }
    }
    ctx->pc = 0x2A9060u;
    // 0x2a9060: 0x24050103  addiu       $a1, $zero, 0x103
    ctx->pc = 0x2a9060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x2a9064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a9064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9068: 0xc0a8186  jal         func_2A0618
    ctx->pc = 0x2A9068u;
    SET_GPR_U32(ctx, 31, 0x2A9070u);
    ctx->pc = 0x2A906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9068u;
    // 0x2a906c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0618u, 0x2A9068u, 0x2A9070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9070u;
label_2a9070:
    // 0x2a9070: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2A9070u;
    {
        const bool branch_taken_0x2a9070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9070u;
        // 0x2a9074: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9070) {
            ctx->pc = 0x2A913Cu;
            goto label_2a913c;
        }
    }
    ctx->pc = 0x2A9078u;
    // 0x2a9078: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x2a9078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2a907c: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A907Cu;
    {
        const bool branch_taken_0x2a907c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A9080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A907Cu;
        // 0x2a9080: 0x2a02002a  slti        $v0, $s0, 0x2A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)42) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a907c) {
            ctx->pc = 0x2A90CCu;
            goto label_2a90cc;
        }
    }
    ctx->pc = 0x2A9084u;
    // 0x2a9084: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9084u;
    {
        const bool branch_taken_0x2a9084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9084u;
        // 0x2a9088: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9084) {
            ctx->pc = 0x2A90A4u;
            goto label_2a90a4;
        }
    }
    ctx->pc = 0x2A908Cu;
    // 0x2a908c: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A908Cu;
    {
        const bool branch_taken_0x2a908c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A9090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A908Cu;
        // 0x2a9090: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a908c) {
            ctx->pc = 0x2A90E4u;
            goto label_2a90e4;
        }
    }
    ctx->pc = 0x2A9094u;
    // 0x2a9094: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A9094u;
    {
        const bool branch_taken_0x2a9094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A9098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9094u;
        // 0x2a9098: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9094) {
            ctx->pc = 0x2A90C0u;
            goto label_2a90c0;
        }
    }
    ctx->pc = 0x2A909Cu;
    // 0x2a909c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2A909Cu;
    {
        const bool branch_taken_0x2a909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A90A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A909Cu;
        // 0x2a90a0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a909c) {
            ctx->pc = 0x2A9140u;
            goto label_2a9140;
        }
    }
    ctx->pc = 0x2A90A4u;
label_2a90a4:
    // 0x2a90a4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2a90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2a90a8: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A90A8u;
    {
        const bool branch_taken_0x2a90a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90A8u;
        // 0x2a90ac: 0x24020075  addiu       $v0, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a90a8) {
            ctx->pc = 0x2A90D8u;
            goto label_2a90d8;
        }
    }
    ctx->pc = 0x2A90B0u;
    // 0x2a90b0: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2A90B0u;
    {
        const bool branch_taken_0x2a90b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A90B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90B0u;
        // 0x2a90b4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a90b0) {
            ctx->pc = 0x2A90F0u;
            goto label_2a90f0;
        }
    }
    ctx->pc = 0x2A90B8u;
    // 0x2a90b8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2A90B8u;
    {
        const bool branch_taken_0x2a90b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A90BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90B8u;
        // 0x2a90bc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a90b8) {
            ctx->pc = 0x2A9140u;
            goto label_2a9140;
        }
    }
    ctx->pc = 0x2A90C0u;
label_2a90c0:
    // 0x2a90c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a90c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A90C4u;
    {
        const bool branch_taken_0x2a90c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A90C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90C4u;
        // 0x2a90c8: 0x2447cac0  addiu       $a3, $v0, -0x3540 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a90c4) {
            ctx->pc = 0x2A90F8u;
            goto label_2a90f8;
        }
    }
    ctx->pc = 0x2A90CCu;
label_2a90cc:
    // 0x2a90cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a90d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A90D0u;
    {
        const bool branch_taken_0x2a90d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A90D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90D0u;
        // 0x2a90d4: 0x2447cad0  addiu       $a3, $v0, -0x3530 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a90d0) {
            ctx->pc = 0x2A90F8u;
            goto label_2a90f8;
        }
    }
    ctx->pc = 0x2A90D8u;
label_2a90d8:
    // 0x2a90d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a90dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A90DCu;
    {
        const bool branch_taken_0x2a90dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A90E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90DCu;
        // 0x2a90e0: 0x2447cad8  addiu       $a3, $v0, -0x3528 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a90dc) {
            ctx->pc = 0x2A90F8u;
            goto label_2a90f8;
        }
    }
    ctx->pc = 0x2A90E4u;
label_2a90e4:
    // 0x2a90e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a90e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a90e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A90E8u;
    {
        const bool branch_taken_0x2a90e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A90ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A90E8u;
        // 0x2a90ec: 0x2447cae0  addiu       $a3, $v0, -0x3520 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a90e8) {
            ctx->pc = 0x2A90F8u;
            goto label_2a90f8;
        }
    }
    ctx->pc = 0x2A90F0u;
label_2a90f0:
    // 0x2a90f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a90f4: 0x2447caf0  addiu       $a3, $v0, -0x3510
    ctx->pc = 0x2a90f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953712));
label_2a90f8:
    // 0x2a90f8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2a90f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a90fc: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2a90fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a9100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9104: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x2a9104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2a9108: 0xc0a8772  jal         func_2A1DC8
    ctx->pc = 0x2A9108u;
    SET_GPR_U32(ctx, 31, 0x2A9110u);
    ctx->pc = 0x2A910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9108u;
    // 0x2a910c: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1DC8u, 0x2A9108u, 0x2A9110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9110u;
label_2a9110:
    // 0x2a9110: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a9110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9114: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x2a9114u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a9118: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2a9118u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a911c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a911cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9120: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2a9120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9124: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2a9124u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9128: 0xc0a8110  jal         func_2A0440
    ctx->pc = 0x2A9128u;
    SET_GPR_U32(ctx, 31, 0x2A9130u);
    ctx->pc = 0x2A912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9128u;
    // 0x2a912c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0440u, 0x2A9128u, 0x2A9130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9130u;
label_2a9130:
    // 0x2a9130: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a9130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9134: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x2a9134u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_2a9138:
    // 0x2a9138: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2a9138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a913c:
    // 0x2a913c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a913cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2a9140:
    // 0x2a9140: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2a9140u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a9144: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2a9144u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a9148: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2a9148u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a914c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2a914cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9150: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a9150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a9154: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2a9154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9158: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a9158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a915c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A915Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A915Cu;
        // 0x2a9160: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A915Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9164u;
    // 0x2a9164: 0x0  nop
    ctx->pc = 0x2a9164u;
    // NOP
    if (ctx->pc == 0x2a9164u) { ctx->pc = 0x2a9168u; }
}
