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

// Function: sub_002A0EF0
// Address: 0x2a0ef0 - 0x2a1168
void sub_002A0EF0_0x2a0ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0EF0_0x2a0ef0");
#endif

    switch (ctx->pc) {
        case 0x2a0f34u: goto label_2a0f34;
        case 0x2a0f50u: goto label_2a0f50;
        case 0x2a0f58u: goto label_2a0f58;
        case 0x2a0f64u: goto label_2a0f64;
        case 0x2a0f84u: goto label_2a0f84;
        case 0x2a0fa8u: goto label_2a0fa8;
        case 0x2a0fc0u: goto label_2a0fc0;
        case 0x2a0fdcu: goto label_2a0fdc;
        case 0x2a1004u: goto label_2a1004;
        case 0x2a1018u: goto label_2a1018;
        case 0x2a1038u: goto label_2a1038;
        case 0x2a105cu: goto label_2a105c;
        case 0x2a1074u: goto label_2a1074;
        case 0x2a1098u: goto label_2a1098;
        case 0x2a10b4u: goto label_2a10b4;
        case 0x2a10ccu: goto label_2a10cc;
        case 0x2a10e0u: goto label_2a10e0;
        case 0x2a1118u: goto label_2a1118;
        case 0x2a1120u: goto label_2a1120;
        case 0x2a1128u: goto label_2a1128;
        case 0x2a1130u: goto label_2a1130;
        default: break;
    }

    ctx->pc = 0x2a0ef0u;

    // 0x2a0ef0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2a0ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2a0ef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0ef8: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x2a0ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x2a0efc: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2a0efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2a0f00: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2a0f00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f04: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x2a0f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x2a0f08: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a0f08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f0c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2a0f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x2a0f10: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a0f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f14: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x2a0f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2a0f18: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x2a0f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x2a0f1c: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x2a0f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x2a0f20: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x2a0f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x2a0f24: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x2a0f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x2a0f28: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2a0f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2a0f2c: 0xc0a1a9e  jal         func_286A78
    ctx->pc = 0x2A0F2Cu;
    SET_GPR_U32(ctx, 31, 0x2A0F34u);
    ctx->pc = 0x2A0F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F2Cu;
    // 0x2a0f30: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A78u, 0x2A0F2Cu, 0x2A0F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F34u;
label_2a0f34:
    // 0x2a0f34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a0f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f38: 0x12400072  beqz        $s2, . + 4 + (0x72 << 2)
    ctx->pc = 0x2A0F38u;
    {
        const bool branch_taken_0x2a0f38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F38u;
        // 0x2a0f3c: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0f38) {
            ctx->pc = 0x2A1104u;
            goto label_2a1104;
        }
    }
    ctx->pc = 0x2A0F40u;
    // 0x2a0f40: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2a0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2a0f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f48: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x2A0F48u;
    SET_GPR_U32(ctx, 31, 0x2A0F50u);
    ctx->pc = 0x2A0F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F48u;
    // 0x2a0f4c: 0xae42010c  sw          $v0, 0x10C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x2A0F48u, 0x2A0F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F50u;
label_2a0f50:
    // 0x2a0f50: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x2A0F50u;
    SET_GPR_U32(ctx, 31, 0x2A0F58u);
    ctx->pc = 0x2A0F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F50u;
    // 0x2a0f54: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x2A0F50u, 0x2A0F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F58u;
label_2a0f58:
    // 0x2a0f58: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x2a0f58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0f5c: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x2A0F5Cu;
    SET_GPR_U32(ctx, 31, 0x2A0F64u);
    ctx->pc = 0x2A0F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F5Cu;
    // 0x2a0f60: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A20u, 0x2A0F5Cu, 0x2A0F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F64u;
label_2a0f64:
    // 0x2a0f64: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2a0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2a0f68: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a0f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f6c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2a0f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a0f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f74: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a0f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0f78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a0f78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f7c: 0xc0a1d96  jal         func_287658
    ctx->pc = 0x2A0F7Cu;
    SET_GPR_U32(ctx, 31, 0x2A0F84u);
    ctx->pc = 0x2A0F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F7Cu;
    // 0x2a0f80: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287658u, 0x2A0F7Cu, 0x2A0F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F84u;
label_2a0f84:
    // 0x2a0f84: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2A0F84u;
    {
        const bool branch_taken_0x2a0f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F84u;
        // 0x2a0f88: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0f84) {
            ctx->pc = 0x2A1108u;
            goto label_2a1108;
        }
    }
    ctx->pc = 0x2A0F8Cu;
    // 0x2a0f8c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2a0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2a0f90: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2a0f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a0f94: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2A0F94u;
    {
        const bool branch_taken_0x2a0f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0F94u;
        // 0x2a0f98: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0f94) {
            ctx->pc = 0x2A10FCu;
            goto label_2a10fc;
        }
    }
    ctx->pc = 0x2A0F9Cu;
    // 0x2a0f9c: 0x2413003c  addiu       $s3, $zero, 0x3C
    ctx->pc = 0x2a0f9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a0fa0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a0fa0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fa4: 0x0  nop
    ctx->pc = 0x2a0fa4u;
    // NOP
label_2a0fa8:
    // 0x2a0fa8: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x2a0fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a0fac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A0FACu;
    {
        const bool branch_taken_0x2a0fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0fac) {
            ctx->pc = 0x2A0FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0FACu;
            // 0x2a0fb0: 0x8e260044  lw          $a2, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0FC8u;
            goto label_2a0fc8;
        }
    }
    ctx->pc = 0x2A0FB4u;
    // 0x2a0fb4: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x2a0fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2a0fb8: 0xc0a1b1c  jal         func_286C70
    ctx->pc = 0x2A0FB8u;
    SET_GPR_U32(ctx, 31, 0x2A0FC0u);
    ctx->pc = 0x2A0FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0FB8u;
    // 0x2a0fbc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286C70u, 0x2A0FB8u, 0x2A0FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0FC0u;
label_2a0fc0:
    // 0x2a0fc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A0FC0u;
    {
        const bool branch_taken_0x2a0fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0FC0u;
        // 0x2a0fc4: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0fc0) {
            ctx->pc = 0x2A0FE0u;
            goto label_2a0fe0;
        }
    }
    ctx->pc = 0x2A0FC8u;
label_2a0fc8:
    // 0x2a0fc8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a0fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0fcc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2a0fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fd0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a0fd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fd4: 0xc0a1f22  jal         func_287C88
    ctx->pc = 0x2A0FD4u;
    SET_GPR_U32(ctx, 31, 0x2A0FDCu);
    ctx->pc = 0x2A0FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0FD4u;
    // 0x2a0fd8: 0xd63021  addu        $a2, $a2, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287C88u, 0x2A0FD4u, 0x2A0FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0FDCu;
label_2a0fdc:
    // 0x2a0fdc: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x2a0fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2a0fe0:
    // 0x2a0fe0: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2a0fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2a0fe4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2a0fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a0fe8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2a0fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0ff0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a0ff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0ff4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a0ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a0ff8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a0ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0ffc: 0xc0a1d96  jal         func_287658
    ctx->pc = 0x2A0FFCu;
    SET_GPR_U32(ctx, 31, 0x2A1004u);
    ctx->pc = 0x2A1000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0FFCu;
    // 0x2a1000: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287658u, 0x2A0FFCu, 0x2A1004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1004u;
label_2a1004:
    // 0x2a1004: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2A1004u;
    {
        const bool branch_taken_0x2a1004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A1008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1004u;
        // 0x2a1008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1004) {
            ctx->pc = 0x2A1108u;
            goto label_2a1108;
        }
    }
    ctx->pc = 0x2A100Cu;
    // 0x2a100c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a100cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1010: 0xc0a16fa  jal         func_285BE8
    ctx->pc = 0x2A1010u;
    SET_GPR_U32(ctx, 31, 0x2A1018u);
    ctx->pc = 0x2A1014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1010u;
    // 0x2a1014: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285BE8u, 0x2A1010u, 0x2A1018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1018u;
label_2a1018:
    // 0x2a1018: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2A1018u;
    {
        const bool branch_taken_0x2a1018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1018u;
        // 0x2a101c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1018) {
            ctx->pc = 0x2A1108u;
            goto label_2a1108;
        }
    }
    ctx->pc = 0x2A1020u;
    // 0x2a1020: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A1020u;
    {
        const bool branch_taken_0x2a1020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1020u;
        // 0x2a1024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1020) {
            ctx->pc = 0x2A107Cu;
            goto label_2a107c;
        }
    }
    ctx->pc = 0x2A1028u;
    // 0x2a1028: 0x8e260044  lw          $a2, 0x44($s1)
    ctx->pc = 0x2a1028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2a102c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a102cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1030: 0xc0a15fa  jal         func_2857E8
    ctx->pc = 0x2A1030u;
    SET_GPR_U32(ctx, 31, 0x2A1038u);
    ctx->pc = 0x2A1034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1030u;
    // 0x2a1034: 0xd33021  addu        $a2, $a2, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2857E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2857E8u, 0x2A1030u, 0x2A1038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1038u;
label_2a1038:
    // 0x2a1038: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2A1038u;
    {
        const bool branch_taken_0x2a1038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1038u;
        // 0x2a103c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1038) {
            ctx->pc = 0x2A1108u;
            goto label_2a1108;
        }
    }
    ctx->pc = 0x2A1040u;
    // 0x2a1040: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A1040u;
    {
        const bool branch_taken_0x2a1040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1040u;
        // 0x2a1044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1040) {
            ctx->pc = 0x2A107Cu;
            goto label_2a107c;
        }
    }
    ctx->pc = 0x2A1048u;
    // 0x2a1048: 0x8e260044  lw          $a2, 0x44($s1)
    ctx->pc = 0x2a1048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2a104c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a104cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1050: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a1050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1054: 0xc0a18ea  jal         func_2863A8
    ctx->pc = 0x2A1054u;
    SET_GPR_U32(ctx, 31, 0x2A105Cu);
    ctx->pc = 0x2A1058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1054u;
    // 0x2a1058: 0xd33021  addu        $a2, $a2, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2863A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2863A8u, 0x2A1054u, 0x2A105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A105Cu;
label_2a105c:
    // 0x2a105c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A105Cu;
    {
        const bool branch_taken_0x2a105c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A105Cu;
        // 0x2a1060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a105c) {
            ctx->pc = 0x2A1108u;
            goto label_2a1108;
        }
    }
    ctx->pc = 0x2A1064u;
    // 0x2a1064: 0x8e260044  lw          $a2, 0x44($s1)
    ctx->pc = 0x2a1064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2a1068: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a1068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a106c: 0xc0a15fa  jal         func_2857E8
    ctx->pc = 0x2A106Cu;
    SET_GPR_U32(ctx, 31, 0x2A1074u);
    ctx->pc = 0x2A1070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A106Cu;
    // 0x2a1070: 0xd33021  addu        $a2, $a2, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2857E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2857E8u, 0x2A106Cu, 0x2A1074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1074u;
label_2a1074:
    // 0x2a1074: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2A1074u;
    {
        const bool branch_taken_0x2a1074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1074) {
            ctx->pc = 0x2A1108u;
            goto label_2a1108;
        }
    }
    ctx->pc = 0x2A107Cu;
label_2a107c:
    // 0x2a107c: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x2a107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2a1080: 0x26c60064  addiu       $a2, $s6, 0x64
    ctx->pc = 0x2a1080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 100));
    // 0x2a1084: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a1084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1088: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2a1088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a108c: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2a108cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a1090: 0xc0a1f22  jal         func_287C88
    ctx->pc = 0x2A1090u;
    SET_GPR_U32(ctx, 31, 0x2A1098u);
    ctx->pc = 0x2A1094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1090u;
    // 0x2a1094: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287C88u, 0x2A1090u, 0x2A1098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1098u;
label_2a1098:
    // 0x2a1098: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2A1098u;
    {
        const bool branch_taken_0x2a1098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1098u;
        // 0x2a109c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1098) {
            ctx->pc = 0x2A1108u;
            goto label_2a1108;
        }
    }
    ctx->pc = 0x2A10A0u;
    // 0x2a10a0: 0x8e260044  lw          $a2, 0x44($s1)
    ctx->pc = 0x2a10a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2a10a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a10a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a10a8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a10a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a10ac: 0xc0a18ea  jal         func_2863A8
    ctx->pc = 0x2A10ACu;
    SET_GPR_U32(ctx, 31, 0x2A10B4u);
    ctx->pc = 0x2A10B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A10ACu;
    // 0x2a10b0: 0xd33021  addu        $a2, $a2, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2863A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2863A8u, 0x2A10ACu, 0x2A10B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10B4u;
label_2a10b4:
    // 0x2a10b4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A10B4u;
    {
        const bool branch_taken_0x2a10b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A10B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10B4u;
        // 0x2a10b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10b4) {
            ctx->pc = 0x2A1108u;
            goto label_2a1108;
        }
    }
    ctx->pc = 0x2A10BCu;
    // 0x2a10bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a10bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a10c0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a10c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a10c4: 0xc0a1f22  jal         func_287C88
    ctx->pc = 0x2A10C4u;
    SET_GPR_U32(ctx, 31, 0x2A10CCu);
    ctx->pc = 0x2A10C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A10C4u;
    // 0x2a10c8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287C88u, 0x2A10C4u, 0x2A10CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10CCu;
label_2a10cc:
    // 0x2a10cc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A10CCu;
    {
        const bool branch_taken_0x2a10cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10CCu;
        // 0x2a10d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10cc) {
            ctx->pc = 0x2A1108u;
            goto label_2a1108;
        }
    }
    ctx->pc = 0x2A10D4u;
    // 0x2a10d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2a10d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a10d8: 0xc0a15fa  jal         func_2857E8
    ctx->pc = 0x2A10D8u;
    SET_GPR_U32(ctx, 31, 0x2A10E0u);
    ctx->pc = 0x2A10DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A10D8u;
    // 0x2a10dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2857E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2857E8u, 0x2A10D8u, 0x2A10E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10E0u;
label_2a10e0:
    // 0x2a10e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A10E0u;
    {
        const bool branch_taken_0x2a10e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10E0u;
        // 0x2a10e4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10e0) {
            ctx->pc = 0x2A1108u;
            goto label_2a1108;
        }
    }
    ctx->pc = 0x2A10E8u;
    // 0x2a10e8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2a10e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2a10ec: 0x2673003c  addiu       $s3, $s3, 0x3C
    ctx->pc = 0x2a10ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
    // 0x2a10f0: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x2a10f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2a10f4: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x2A10F4u;
    {
        const bool branch_taken_0x2a10f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A10F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10F4u;
        // 0x2a10f8: 0x26d6003c  addiu       $s6, $s6, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10f4) {
            ctx->pc = 0x2A0FA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a0fa8;
        }
    }
    ctx->pc = 0x2A10FCu;
label_2a10fc:
    // 0x2a10fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A10FCu;
    {
        const bool branch_taken_0x2a10fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10FCu;
        // 0x2a1100: 0xafa00060  sw          $zero, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a10fc) {
            ctx->pc = 0x2A1108u;
            goto label_2a1108;
        }
    }
    ctx->pc = 0x2A1104u;
label_2a1104:
    // 0x2a1104: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x2a1104u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a1108:
    // 0x2a1108: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A1108u;
    {
        const bool branch_taken_0x2a1108 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1108) {
            ctx->pc = 0x2A1118u;
            goto label_2a1118;
        }
    }
    ctx->pc = 0x2A1110u;
    // 0x2a1110: 0xc0a1abe  jal         func_286AF8
    ctx->pc = 0x2A1110u;
    SET_GPR_U32(ctx, 31, 0x2A1118u);
    ctx->pc = 0x2A1114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1110u;
    // 0x2a1114: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286AF8u, 0x2A1110u, 0x2A1118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1118u;
label_2a1118:
    // 0x2a1118: 0xc0a1a14  jal         func_286850
    ctx->pc = 0x2A1118u;
    SET_GPR_U32(ctx, 31, 0x2A1120u);
    ctx->pc = 0x2A111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1118u;
    // 0x2a111c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x2A1118u, 0x2A1120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1120u;
label_2a1120:
    // 0x2a1120: 0xc0a1a14  jal         func_286850
    ctx->pc = 0x2A1120u;
    SET_GPR_U32(ctx, 31, 0x2A1128u);
    ctx->pc = 0x2A1124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1120u;
    // 0x2a1124: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x2A1120u, 0x2A1128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1128u;
label_2a1128:
    // 0x2a1128: 0xc0a1a14  jal         func_286850
    ctx->pc = 0x2A1128u;
    SET_GPR_U32(ctx, 31, 0x2A1130u);
    ctx->pc = 0x2A112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1128u;
    // 0x2a112c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286850u, 0x2A1128u, 0x2A1130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1130u;
label_2a1130:
    // 0x2a1130: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a1130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1134: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2a1134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a1138: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x2a1138u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2a113c: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x2a113cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2a1140: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x2a1140u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2a1144: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x2a1144u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2a1148: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2a1148u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2a114c: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x2a114cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a1150: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2a1150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a1154: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x2a1154u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a1158: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2a1158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a115c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A115Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A115Cu;
        // 0x2a1160: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A115Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1164u;
    // 0x2a1164: 0x0  nop
    ctx->pc = 0x2a1164u;
    // NOP
    if (ctx->pc == 0x2a1164u) { ctx->pc = 0x2a1168u; }
}
