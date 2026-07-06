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

// Function: sub_0020D950
// Address: 0x20d950 - 0x20da00
void sub_0020D950_0x20d950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D950_0x20d950");
#endif

    switch (ctx->pc) {
        case 0x20d974u: goto label_20d974;
        case 0x20d99cu: goto label_20d99c;
        case 0x20d9b8u: goto label_20d9b8;
        default: break;
    }

    ctx->pc = 0x20d950u;

    // 0x20d950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20d950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20d954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20d954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20d958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20d958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20d95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20d95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20d960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20d960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d964: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x20d964u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20d968: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x20D968u;
    {
        const bool branch_taken_0x20d968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D968u;
        // 0x20d96c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d968) {
            ctx->pc = 0x20D9D8u;
            goto label_20d9d8;
        }
    }
    ctx->pc = 0x20D970u;
    // 0x20d970: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x20d970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_20d974:
    // 0x20d974: 0x240200e3  addiu       $v0, $zero, 0xE3
    ctx->pc = 0x20d974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    // 0x20d978: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20D978u;
    {
        const bool branch_taken_0x20d978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20d978) {
            ctx->pc = 0x20D9B0u;
            goto label_20d9b0;
        }
    }
    ctx->pc = 0x20D980u;
    // 0x20d980: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x20d980u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x20d984: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x20d984u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x20d988: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x20d988u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x20d98c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x20d98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x20d990: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x20d990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x20d994: 0xc083594  jal         func_20D650
    ctx->pc = 0x20D994u;
    SET_GPR_U32(ctx, 31, 0x20D99Cu);
    ctx->pc = 0x20D998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D994u;
    // 0x20d998: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D650u, 0x20D994u, 0x20D99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D99Cu;
label_20d99c:
    // 0x20d99c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x20d99cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x20d9a0: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x20d9a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x20d9a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20D9A4u;
    {
        const bool branch_taken_0x20d9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9A4u;
        // 0x20d9a8: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9a4) {
            ctx->pc = 0x20D9C8u;
            goto label_20d9c8;
        }
    }
    ctx->pc = 0x20D9ACu;
    // 0x20d9ac: 0x0  nop
    ctx->pc = 0x20d9acu;
    // NOP
label_20d9b0:
    // 0x20d9b0: 0xc083580  jal         func_20D600
    ctx->pc = 0x20D9B0u;
    SET_GPR_U32(ctx, 31, 0x20D9B8u);
    ctx->pc = 0x20D600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D600u, 0x20D9B0u, 0x20D9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D9B8u;
label_20d9b8:
    // 0x20d9b8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x20d9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x20d9bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20d9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20d9c0: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x20d9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x20d9c4: 0x0  nop
    ctx->pc = 0x20d9c4u;
    // NOP
label_20d9c8:
    // 0x20d9c8: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x20d9c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20d9cc: 0x5480ffe9  bnel        $a0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x20D9CCu;
    {
        const bool branch_taken_0x20d9cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d9cc) {
            ctx->pc = 0x20D9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D9CCu;
            // 0x20d9d0: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D974u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20d974;
        }
    }
    ctx->pc = 0x20D9D4u;
    // 0x20d9d4: 0x0  nop
    ctx->pc = 0x20d9d4u;
    // NOP
label_20d9d8:
    // 0x20d9d8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x20d9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20d9dc: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x20d9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x20d9e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20d9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d9e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20d9e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d9e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20d9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d9ec: 0x3e00008  jr          $ra
    ctx->pc = 0x20D9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9ECu;
        // 0x20d9f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D9F4u;
    // 0x20d9f4: 0x0  nop
    ctx->pc = 0x20d9f4u;
    // NOP
    // 0x20d9f8: 0x0  nop
    ctx->pc = 0x20d9f8u;
    // NOP
    // 0x20d9fc: 0x0  nop
    ctx->pc = 0x20d9fcu;
    // NOP
}
