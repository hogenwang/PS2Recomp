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

// Function: kofxiIopHeapAlloc
// Address: 0x115120 - 0x115210
void kofxiIopHeapAlloc_0x115120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiIopHeapAlloc_0x115120");
#endif

    switch (ctx->pc) {
        case 0x115174u: goto label_115174;
        case 0x1151f4u: goto label_1151f4;
        default: break;
    }

    ctx->pc = 0x115120u;

    // 0x115120: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x115120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x115124: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115128: 0x8c628758  lw          $v0, -0x78A8($v1)
    ctx->pc = 0x115128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936408)));
    // 0x11512c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11512cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115130: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x115130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115134: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x115134u;
    {
        const bool branch_taken_0x115134 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x115138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115134u;
        // 0x115138: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115134) {
            ctx->pc = 0x11517Cu;
            goto label_11517c;
        }
    }
    ctx->pc = 0x11513Cu;
    // 0x11513c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x11513cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x115140: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x115140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x115144: 0xace59b00  sw          $a1, -0x6500($a3)
    ctx->pc = 0x115144u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294941440), GPR_U32(ctx, 5));
    // 0x115148: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x115148u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x11514c: 0x24849a80  addiu       $a0, $a0, -0x6580
    ctx->pc = 0x11514cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941312));
    // 0x115150: 0x24e79b00  addiu       $a3, $a3, -0x6500
    ctx->pc = 0x115150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941440));
    // 0x115154: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115158: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11515c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11515cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115160: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x115160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115164: 0x26099ac0  addiu       $t1, $s0, -0x6540
    ctx->pc = 0x115164u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941376));
    // 0x115168: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x115168u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11516c: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11516Cu;
    SET_GPR_U32(ctx, 31, 0x115174u);
    ctx->pc = 0x115170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11516Cu;
    // 0x115170: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11516Cu, 0x115174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115174u;
label_115174:
    // 0x115174: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x115174u;
    {
        const bool branch_taken_0x115174 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x115178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115174u;
        // 0x115178: 0x8e029ac0  lw          $v0, -0x6540($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115174) {
            ctx->pc = 0x115180u;
            goto label_115180;
        }
    }
    ctx->pc = 0x11517Cu;
label_11517c:
    // 0x11517c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11517cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115180:
    // 0x115180: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x115180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115184: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x115184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115188: 0x3e00008  jr          $ra
    ctx->pc = 0x115188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115188u;
        // 0x11518c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115190u;
    // 0x115190: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x115190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x115194: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115198: 0x8c438758  lw          $v1, -0x78A8($v0)
    ctx->pc = 0x115198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936408)));
    // 0x11519c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x11519cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1151a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1151a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1151a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1151a8: 0x4600015  bltz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1151A8u;
    {
        const bool branch_taken_0x1151a8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1151ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151A8u;
        // 0x1151ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151a8) {
            ctx->pc = 0x115200u;
            goto label_115200;
        }
    }
    ctx->pc = 0x1151B0u;
    // 0x1151b0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1151b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1151b4: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1151b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1151b8: 0x24439b00  addiu       $v1, $v0, -0x6500
    ctx->pc = 0x1151b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941440));
    // 0x1151bc: 0xac459b00  sw          $a1, -0x6500($v0)
    ctx->pc = 0x1151bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941440), GPR_U32(ctx, 5));
    // 0x1151c0: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x1151c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x1151c4: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1151c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x1151c8: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1151c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x1151cc: 0x24849a80  addiu       $a0, $a0, -0x6580
    ctx->pc = 0x1151ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941312));
    // 0x1151d0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1151d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1151d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1151d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1151d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1151dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1151dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151e0: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x1151e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1151e4: 0x26099ac0  addiu       $t1, $s0, -0x6540
    ctx->pc = 0x1151e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941376));
    // 0x1151e8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1151e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1151ec: 0xc04434c  jal         func_110D30
    ctx->pc = 0x1151ECu;
    SET_GPR_U32(ctx, 31, 0x1151F4u);
    ctx->pc = 0x1151F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1151ECu;
    // 0x1151f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x1151ECu, 0x1151F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151F4u;
label_1151f4:
    // 0x1151f4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1151F4u;
    {
        const bool branch_taken_0x1151f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1151F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151F4u;
        // 0x1151f8: 0x8e029ac0  lw          $v0, -0x6540($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151f4) {
            ctx->pc = 0x115200u;
            goto label_115200;
        }
    }
    ctx->pc = 0x1151FCu;
    // 0x1151fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1151fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115200:
    // 0x115200: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x115200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115204: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x115204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115208: 0x3e00008  jr          $ra
    ctx->pc = 0x115208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115208u;
        // 0x11520c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115210u;
}
