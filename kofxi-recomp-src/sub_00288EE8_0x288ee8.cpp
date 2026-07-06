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

// Function: sub_00288EE8
// Address: 0x288ee8 - 0x289118
void sub_00288EE8_0x288ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288EE8_0x288ee8");
#endif

    switch (ctx->pc) {
        case 0x288f30u: goto label_288f30;
        case 0x288f4cu: goto label_288f4c;
        case 0x288f5cu: goto label_288f5c;
        case 0x288f6cu: goto label_288f6c;
        case 0x288fb8u: goto label_288fb8;
        case 0x288fc8u: goto label_288fc8;
        case 0x288fd8u: goto label_288fd8;
        case 0x289028u: goto label_289028;
        case 0x289038u: goto label_289038;
        case 0x289048u: goto label_289048;
        case 0x289098u: goto label_289098;
        case 0x2890a8u: goto label_2890a8;
        case 0x2890b8u: goto label_2890b8;
        default: break;
    }

    ctx->pc = 0x288ee8u;

    // 0x288ee8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x288ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x288eec: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x288eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x288ef0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x288ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x288ef4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x288ef4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288ef8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x288ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x288efc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x288efcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f00: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x288f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x288f04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x288f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f08: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x288f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x288f0c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x288f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x288f10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x288f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x288f14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x288f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x288f18: 0x1aa00073  blez        $s5, . + 4 + (0x73 << 2)
    ctx->pc = 0x288F18u;
    {
        const bool branch_taken_0x288f18 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x288F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F18u;
        // 0x288f1c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f18) {
            ctx->pc = 0x2890E8u;
            goto label_2890e8;
        }
    }
    ctx->pc = 0x288F20u;
    // 0x288f20: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x288f20u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x288f24: 0x14a03e  dsrl32      $s4, $s4, 0
    ctx->pc = 0x288f24u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x288f28: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x288F28u;
    {
        const bool branch_taken_0x288f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F28u;
        // 0x288f2c: 0x3c178000  lui         $s7, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f28) {
            ctx->pc = 0x28907Cu;
            goto label_28907c;
        }
    }
    ctx->pc = 0x288F30u;
label_288f30:
    // 0x288f30: 0xded10008  ld          $s1, 0x8($s6)
    ctx->pc = 0x288f30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x288f34: 0x2349024  and         $s2, $s1, $s4
    ctx->pc = 0x288f34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & GPR_U64(ctx, 20));
    // 0x288f38: 0x11103e  dsrl32      $v0, $s1, 0
    ctx->pc = 0x288f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x288f3c: 0x548824  and         $s1, $v0, $s4
    ctx->pc = 0x288f3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x288f40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f44: 0xc048082  jal         func_120208
    ctx->pc = 0x288F44u;
    SET_GPR_U32(ctx, 31, 0x288F4Cu);
    ctx->pc = 0x288F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288F44u;
    // 0x288f48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288F44u, 0x288F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F4Cu;
label_288f4c:
    // 0x288f4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f54: 0xc048082  jal         func_120208
    ctx->pc = 0x288F54u;
    SET_GPR_U32(ctx, 31, 0x288F5Cu);
    ctx->pc = 0x288F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288F54u;
    // 0x288f58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288F54u, 0x288F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F5Cu;
label_288f5c:
    // 0x288f5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288f64: 0xc048082  jal         func_120208
    ctx->pc = 0x288F64u;
    SET_GPR_U32(ctx, 31, 0x288F6Cu);
    ctx->pc = 0x288F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288F64u;
    // 0x288f68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288F64u, 0x288F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288F6Cu;
label_288f6c:
    // 0x288f6c: 0x2141824  and         $v1, $s0, $s4
    ctx->pc = 0x288f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 20));
    // 0x288f70: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x288f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x288f74: 0x2178024  and         $s0, $s0, $s7
    ctx->pc = 0x288f74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 23));
    // 0x288f78: 0x223902d  daddu       $s2, $s1, $v1
    ctx->pc = 0x288f78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x288f7c: 0x1087fa  dsrl        $s0, $s0, 31
    ctx->pc = 0x288f7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 31);
    // 0x288f80: 0x50882d  daddu       $s1, $v0, $s0
    ctx->pc = 0x288f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 16));
    // 0x288f84: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x288f84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x288f88: 0x223882d  daddu       $s1, $s1, $v1
    ctx->pc = 0x288f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x288f8c: 0xfe720010  sd          $s2, 0x10($s3)
    ctx->pc = 0x288f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 18));
    // 0x288f90: 0x26a2fffe  addiu       $v0, $s5, -0x2
    ctx->pc = 0x288f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x288f94: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x288F94u;
    {
        const bool branch_taken_0x288f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x288F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288F94u;
        // 0x288f98: 0xfe710018  sd          $s1, 0x18($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288f94) {
            ctx->pc = 0x2890E8u;
            goto label_2890e8;
        }
    }
    ctx->pc = 0x288F9Cu;
    // 0x288f9c: 0xded10010  ld          $s1, 0x10($s6)
    ctx->pc = 0x288f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x288fa0: 0x2349024  and         $s2, $s1, $s4
    ctx->pc = 0x288fa0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & GPR_U64(ctx, 20));
    // 0x288fa4: 0x11103e  dsrl32      $v0, $s1, 0
    ctx->pc = 0x288fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x288fa8: 0x548824  and         $s1, $v0, $s4
    ctx->pc = 0x288fa8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x288fac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288fb0: 0xc048082  jal         func_120208
    ctx->pc = 0x288FB0u;
    SET_GPR_U32(ctx, 31, 0x288FB8u);
    ctx->pc = 0x288FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288FB0u;
    // 0x288fb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288FB0u, 0x288FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288FB8u;
label_288fb8:
    // 0x288fb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x288fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288fbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288fc0: 0xc048082  jal         func_120208
    ctx->pc = 0x288FC0u;
    SET_GPR_U32(ctx, 31, 0x288FC8u);
    ctx->pc = 0x288FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288FC0u;
    // 0x288fc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288FC0u, 0x288FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288FC8u;
label_288fc8:
    // 0x288fc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288fcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288fd0: 0xc048082  jal         func_120208
    ctx->pc = 0x288FD0u;
    SET_GPR_U32(ctx, 31, 0x288FD8u);
    ctx->pc = 0x288FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288FD0u;
    // 0x288fd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x288FD0u, 0x288FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288FD8u;
label_288fd8:
    // 0x288fd8: 0x2141824  and         $v1, $s0, $s4
    ctx->pc = 0x288fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 20));
    // 0x288fdc: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x288fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x288fe0: 0x2178024  and         $s0, $s0, $s7
    ctx->pc = 0x288fe0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 23));
    // 0x288fe4: 0x223902d  daddu       $s2, $s1, $v1
    ctx->pc = 0x288fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x288fe8: 0x1087fa  dsrl        $s0, $s0, 31
    ctx->pc = 0x288fe8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 31);
    // 0x288fec: 0x50882d  daddu       $s1, $v0, $s0
    ctx->pc = 0x288fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 16));
    // 0x288ff0: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x288ff0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x288ff4: 0x223882d  daddu       $s1, $s1, $v1
    ctx->pc = 0x288ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x288ff8: 0xfe720020  sd          $s2, 0x20($s3)
    ctx->pc = 0x288ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 18));
    // 0x288ffc: 0x26a2fffd  addiu       $v0, $s5, -0x3
    ctx->pc = 0x288ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967293));
    // 0x289000: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x289000u;
    {
        const bool branch_taken_0x289000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289000u;
        // 0x289004: 0xfe710028  sd          $s1, 0x28($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289000) {
            ctx->pc = 0x2890E8u;
            goto label_2890e8;
        }
    }
    ctx->pc = 0x289008u;
    // 0x289008: 0xded10018  ld          $s1, 0x18($s6)
    ctx->pc = 0x289008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x28900c: 0x26b5fffc  addiu       $s5, $s5, -0x4
    ctx->pc = 0x28900cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x289010: 0x2349024  and         $s2, $s1, $s4
    ctx->pc = 0x289010u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & GPR_U64(ctx, 20));
    // 0x289014: 0x11103e  dsrl32      $v0, $s1, 0
    ctx->pc = 0x289014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x289018: 0x548824  and         $s1, $v0, $s4
    ctx->pc = 0x289018u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x28901c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28901cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289020: 0xc048082  jal         func_120208
    ctx->pc = 0x289020u;
    SET_GPR_U32(ctx, 31, 0x289028u);
    ctx->pc = 0x289024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289020u;
    // 0x289024: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x289020u, 0x289028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289028u;
label_289028:
    // 0x289028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28902c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28902cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289030: 0xc048082  jal         func_120208
    ctx->pc = 0x289030u;
    SET_GPR_U32(ctx, 31, 0x289038u);
    ctx->pc = 0x289034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289030u;
    // 0x289034: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x289030u, 0x289038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289038u;
label_289038:
    // 0x289038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28903c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28903cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289040: 0xc048082  jal         func_120208
    ctx->pc = 0x289040u;
    SET_GPR_U32(ctx, 31, 0x289048u);
    ctx->pc = 0x289044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289040u;
    // 0x289044: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x289040u, 0x289048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289048u;
label_289048:
    // 0x289048: 0x2141824  and         $v1, $s0, $s4
    ctx->pc = 0x289048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 20));
    // 0x28904c: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x28904cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x289050: 0x2178024  and         $s0, $s0, $s7
    ctx->pc = 0x289050u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 23));
    // 0x289054: 0x223902d  daddu       $s2, $s1, $v1
    ctx->pc = 0x289054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x289058: 0x1087fa  dsrl        $s0, $s0, 31
    ctx->pc = 0x289058u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 31);
    // 0x28905c: 0x50882d  daddu       $s1, $v0, $s0
    ctx->pc = 0x28905cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 16));
    // 0x289060: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x289060u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x289064: 0x223882d  daddu       $s1, $s1, $v1
    ctx->pc = 0x289064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x289068: 0xfe720030  sd          $s2, 0x30($s3)
    ctx->pc = 0x289068u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 18));
    // 0x28906c: 0x12a0001e  beqz        $s5, . + 4 + (0x1E << 2)
    ctx->pc = 0x28906Cu;
    {
        const bool branch_taken_0x28906c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x289070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28906Cu;
        // 0x289070: 0xfe710038  sd          $s1, 0x38($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28906c) {
            ctx->pc = 0x2890E8u;
            goto label_2890e8;
        }
    }
    ctx->pc = 0x289074u;
    // 0x289074: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x289074u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x289078: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x289078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_28907c:
    // 0x28907c: 0xded10000  ld          $s1, 0x0($s6)
    ctx->pc = 0x28907cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x289080: 0x2349024  and         $s2, $s1, $s4
    ctx->pc = 0x289080u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & GPR_U64(ctx, 20));
    // 0x289084: 0x11103e  dsrl32      $v0, $s1, 0
    ctx->pc = 0x289084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x289088: 0x548824  and         $s1, $v0, $s4
    ctx->pc = 0x289088u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x28908c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28908cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289090: 0xc048082  jal         func_120208
    ctx->pc = 0x289090u;
    SET_GPR_U32(ctx, 31, 0x289098u);
    ctx->pc = 0x289094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289090u;
    // 0x289094: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x289090u, 0x289098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289098u;
label_289098:
    // 0x289098: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28909c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28909cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890a0: 0xc048082  jal         func_120208
    ctx->pc = 0x2890A0u;
    SET_GPR_U32(ctx, 31, 0x2890A8u);
    ctx->pc = 0x2890A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2890A0u;
    // 0x2890a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x2890A0u, 0x2890A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2890A8u;
label_2890a8:
    // 0x2890a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2890a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2890acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890b0: 0xc048082  jal         func_120208
    ctx->pc = 0x2890B0u;
    SET_GPR_U32(ctx, 31, 0x2890B8u);
    ctx->pc = 0x2890B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2890B0u;
    // 0x2890b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x2890B0u, 0x2890B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2890B8u;
label_2890b8:
    // 0x2890b8: 0x2141824  and         $v1, $s0, $s4
    ctx->pc = 0x2890b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 20));
    // 0x2890bc: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x2890bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x2890c0: 0x2178024  and         $s0, $s0, $s7
    ctx->pc = 0x2890c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 23));
    // 0x2890c4: 0x223902d  daddu       $s2, $s1, $v1
    ctx->pc = 0x2890c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2890c8: 0x1087fa  dsrl        $s0, $s0, 31
    ctx->pc = 0x2890c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 31);
    // 0x2890cc: 0x50882d  daddu       $s1, $v0, $s0
    ctx->pc = 0x2890ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 16));
    // 0x2890d0: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x2890d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2890d4: 0x223882d  daddu       $s1, $s1, $v1
    ctx->pc = 0x2890d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2890d8: 0xfe720000  sd          $s2, 0x0($s3)
    ctx->pc = 0x2890d8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 18));
    // 0x2890dc: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x2890dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2890e0: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x2890E0u;
    {
        const bool branch_taken_0x2890e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2890E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2890E0u;
        // 0x2890e4: 0xfe710008  sd          $s1, 0x8($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2890e0) {
            ctx->pc = 0x288F30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288f30;
        }
    }
    ctx->pc = 0x2890E8u;
label_2890e8:
    // 0x2890e8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2890e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2890ec: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2890ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2890f0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2890f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2890f4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2890f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2890f8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2890f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2890fc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2890fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289100: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x289100u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289104: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x289104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x289108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28910c: 0x3e00008  jr          $ra
    ctx->pc = 0x28910Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28910Cu;
        // 0x289110: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28910Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289114u;
    // 0x289114: 0x0  nop
    ctx->pc = 0x289114u;
    // NOP
    if (ctx->pc == 0x289114u) { ctx->pc = 0x289118u; }
}
