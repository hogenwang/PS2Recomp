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

// Function: sub_00351420
// Address: 0x351420 - 0x351510
void sub_00351420_0x351420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351420_0x351420");
#endif

    switch (ctx->pc) {
        case 0x351430u: goto label_351430;
        case 0x351444u: goto label_351444;
        default: break;
    }

    ctx->pc = 0x351420u;

    // 0x351420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x351424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x351424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x351428: 0xc0d4370  jal         func_350DC0
    ctx->pc = 0x351428u;
    SET_GPR_U32(ctx, 31, 0x351430u);
    ctx->pc = 0x350DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350DC0u, 0x351428u, 0x351430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351430u;
label_351430:
    // 0x351430: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x351430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x351434: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x351434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x351438: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x351438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x35143c: 0xc0bb4bc  jal         func_2ED2F0
    ctx->pc = 0x35143Cu;
    SET_GPR_U32(ctx, 31, 0x351444u);
    ctx->pc = 0x351440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35143Cu;
    // 0x351440: 0x27a7001f  addiu       $a3, $sp, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED2F0u, 0x35143Cu, 0x351444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351444u;
label_351444:
    // 0x351444: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x351444u;
    {
        const bool branch_taken_0x351444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351444) {
            ctx->pc = 0x351448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351444u;
            // 0x351448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3514F8u;
            goto label_3514f8;
        }
    }
    ctx->pc = 0x35144Cu;
    // 0x35144c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x35144cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351450: 0x93a3001f  lbu         $v1, 0x1F($sp)
    ctx->pc = 0x351450u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 31)));
    // 0x351454: 0x90429490  lbu         $v0, -0x6B70($v0)
    ctx->pc = 0x351454u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939792)));
    // 0x351458: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x351458u;
    {
        const bool branch_taken_0x351458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x351458) {
            ctx->pc = 0x3514F4u;
            goto label_3514f4;
        }
    }
    ctx->pc = 0x351460u;
    // 0x351460: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x351460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x351464: 0x93ac0018  lbu         $t4, 0x18($sp)
    ctx->pc = 0x351464u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x351468: 0x90449488  lbu         $a0, -0x6B78($v0)
    ctx->pc = 0x351468u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939784)));
    // 0x35146c: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x35146cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x351470: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x351470u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x351474: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x351474u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x351478: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x351478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x35147c: 0x256bdb78  addiu       $t3, $t3, -0x2488
    ctx->pc = 0x35147cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294957944));
    // 0x351480: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x351480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x351484: 0x93aa0019  lbu         $t2, 0x19($sp)
    ctx->pc = 0x351484u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 25)));
    // 0x351488: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x351488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35148c: 0x2529db79  addiu       $t1, $t1, -0x2487
    ctx->pc = 0x35148cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294957945));
    // 0x351490: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x351490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x351494: 0x93a8001a  lbu         $t0, 0x1A($sp)
    ctx->pc = 0x351494u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 26)));
    // 0x351498: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x351498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35149c: 0x24e7db7a  addiu       $a3, $a3, -0x2486
    ctx->pc = 0x35149cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957946));
    // 0x3514a0: 0x468c0  sll         $t5, $a0, 3
    ctx->pc = 0x3514a0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3514a4: 0x24c6dcac  addiu       $a2, $a2, -0x2354
    ctx->pc = 0x3514a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958252));
    // 0x3514a8: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x3514a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x3514ac: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x3514acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x3514b0: 0xa16c0000  sb          $t4, 0x0($t3)
    ctx->pc = 0x3514b0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x3514b4: 0xc2940  sll         $a1, $t4, 5
    ctx->pc = 0x3514b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x3514b8: 0xcd3021  addu        $a2, $a2, $t5
    ctx->pc = 0x3514b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x3514bc: 0xed3821  addu        $a3, $a3, $t5
    ctx->pc = 0x3514bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x3514c0: 0xa12a0000  sb          $t2, 0x0($t1)
    ctx->pc = 0x3514c0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x3514c4: 0xa1940  sll         $v1, $t2, 5
    ctx->pc = 0x3514c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x3514c8: 0xa0e80000  sb          $t0, 0x0($a3)
    ctx->pc = 0x3514c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x3514cc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3514ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3514d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3514d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3514d4: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3514d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3514d8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3514d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3514dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3514dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3514e0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3514e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3514e4: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x3514e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x3514e8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3514e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3514ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3514ECu;
    {
        const bool branch_taken_0x3514ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3514F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3514ECu;
        // 0x3514f0: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3514ec) {
            ctx->pc = 0x3514F8u;
            goto label_3514f8;
        }
    }
    ctx->pc = 0x3514F4u;
label_3514f4:
    // 0x3514f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3514f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3514f8:
    // 0x3514f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3514f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3514fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3514FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3514FCu;
        // 0x351500: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3514FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351504u;
    // 0x351504: 0x0  nop
    ctx->pc = 0x351504u;
    // NOP
    // 0x351508: 0x0  nop
    ctx->pc = 0x351508u;
    // NOP
    // 0x35150c: 0x0  nop
    ctx->pc = 0x35150cu;
    // NOP
    if (ctx->pc == 0x35150cu) { ctx->pc = 0x351510u; }
}
