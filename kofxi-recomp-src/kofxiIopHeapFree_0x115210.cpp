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

// Function: kofxiIopHeapFree
// Address: 0x115210 - 0x115288
void kofxiIopHeapFree_0x115210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiIopHeapFree_0x115210");
#endif

    switch (ctx->pc) {
        case 0x11526cu: goto label_11526c;
        default: break;
    }

    ctx->pc = 0x115210u;

    // 0x115210: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x115210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x115214: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115218: 0x8c628758  lw          $v0, -0x78A8($v1)
    ctx->pc = 0x115218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936408)));
    // 0x11521c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11521cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115220: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x115220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115224: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115224u;
    {
        const bool branch_taken_0x115224 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x115228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115224u;
        // 0x115228: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115224) {
            ctx->pc = 0x115234u;
            goto label_115234;
        }
    }
    ctx->pc = 0x11522Cu;
    // 0x11522c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11522Cu;
    {
        const bool branch_taken_0x11522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11522Cu;
        // 0x115230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11522c) {
            ctx->pc = 0x115278u;
            goto label_115278;
        }
    }
    ctx->pc = 0x115234u;
label_115234:
    // 0x115234: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x115234u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x115238: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x115238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11523c: 0xace59b00  sw          $a1, -0x6500($a3)
    ctx->pc = 0x11523cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294941440), GPR_U32(ctx, 5));
    // 0x115240: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x115240u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x115244: 0x24849a80  addiu       $a0, $a0, -0x6580
    ctx->pc = 0x115244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941312));
    // 0x115248: 0x24e79b00  addiu       $a3, $a3, -0x6500
    ctx->pc = 0x115248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941440));
    // 0x11524c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11524cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115250: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x115250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115254: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115258: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x115258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11525c: 0x26099ac0  addiu       $t1, $s0, -0x6540
    ctx->pc = 0x11525cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941376));
    // 0x115260: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x115260u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115264: 0xc04434c  jal         func_110D30
    ctx->pc = 0x115264u;
    SET_GPR_U32(ctx, 31, 0x11526Cu);
    ctx->pc = 0x115268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115264u;
    // 0x115268: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x115264u, 0x11526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11526Cu;
label_11526c:
    // 0x11526c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11526Cu;
    {
        const bool branch_taken_0x11526c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x115270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11526Cu;
        // 0x115270: 0x8e029ac0  lw          $v0, -0x6540($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11526c) {
            ctx->pc = 0x115278u;
            goto label_115278;
        }
    }
    ctx->pc = 0x115274u;
    // 0x115274: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_115278:
    // 0x115278: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x115278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11527c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11527cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115280: 0x3e00008  jr          $ra
    ctx->pc = 0x115280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115280u;
        // 0x115284: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115288u;
}
