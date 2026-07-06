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

// Function: kofxiIopResourceRpcBind
// Address: 0x119130 - 0x119288
void kofxiIopResourceRpcBind_0x119130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiIopResourceRpcBind_0x119130");
#endif

    switch (ctx->pc) {
        case 0x119158u: goto label_119158;
        case 0x11916cu: goto label_11916c;
        case 0x11917cu: goto label_11917c;
        case 0x119188u: goto label_119188;
        case 0x1191c4u: goto label_1191c4;
        case 0x119220u: goto label_119220;
        case 0x119240u: goto label_119240;
        case 0x119248u: goto label_119248;
        default: break;
    }

    ctx->pc = 0x119130u;

    // 0x119130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x119134: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x119134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11913c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11913cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119140: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x119140u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x119144: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119148: 0x2612d800  addiu       $s2, $s0, -0x2800
    ctx->pc = 0x119148u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957056));
    // 0x11914c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11914cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x119150: 0xc0440ea  jal         func_1103A8
    ctx->pc = 0x119150u;
    SET_GPR_U32(ctx, 31, 0x119158u);
    ctx->pc = 0x119154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119150u;
    // 0x119154: 0x3c11003e  lui         $s1, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)62 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103A8u, 0x119150u, 0x119158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119158u;
label_119158:
    // 0x119158: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x119158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11915c: 0x2604d800  addiu       $a0, $s0, -0x2800
    ctx->pc = 0x11915cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957056));
    // 0x119160: 0x34a50701  ori         $a1, $a1, 0x701
    ctx->pc = 0x119160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1793);
    // 0x119164: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x119164u;
    SET_GPR_U32(ctx, 31, 0x11916Cu);
    ctx->pc = 0x119168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119164u;
    // 0x119168: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110B50u, 0x119164u, 0x11916Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11916Cu;
label_11916c:
    // 0x11916c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11916Cu;
    {
        const bool branch_taken_0x11916c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x119170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11916Cu;
        // 0x119170: 0x24022710  addiu       $v0, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11916c) {
            ctx->pc = 0x119184u;
            goto label_119184;
        }
    }
    ctx->pc = 0x119174u;
    // 0x119174: 0xc043e52  jal         func_10F948
    ctx->pc = 0x119174u;
    SET_GPR_U32(ctx, 31, 0x11917Cu);
    ctx->pc = 0x119178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119174u;
    // 0x119178: 0x2624ab58  addiu       $a0, $s1, -0x54A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x119174u, 0x11917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11917Cu;
label_11917c:
    // 0x11917c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11917Cu;
    {
        const bool branch_taken_0x11917c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11917Cu;
        // 0x119180: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11917c) {
            ctx->pc = 0x1191C8u;
            goto label_1191c8;
        }
    }
    ctx->pc = 0x119184u;
label_119184:
    // 0x119184: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x119184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_119188:
    // 0x119188: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x119188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11918c: 0x0  nop
    ctx->pc = 0x11918cu;
    // NOP
    // 0x119190: 0x0  nop
    ctx->pc = 0x119190u;
    // NOP
    // 0x119194: 0x0  nop
    ctx->pc = 0x119194u;
    // NOP
    // 0x119198: 0x0  nop
    ctx->pc = 0x119198u;
    // NOP
    // 0x11919c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11919Cu;
    {
        const bool branch_taken_0x11919c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11919c) {
            ctx->pc = 0x119188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119188;
        }
    }
    ctx->pc = 0x1191A4u;
    // 0x1191a4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1191a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1191a8: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1191A8u;
    {
        const bool branch_taken_0x1191a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1191ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1191A8u;
        // 0x1191ac: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1191a8) {
            ctx->pc = 0x119158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119158;
        }
    }
    ctx->pc = 0x1191B0u;
    // 0x1191b0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1191b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1191b4: 0xac409d78  sw          $zero, -0x6288($v0)
    ctx->pc = 0x1191b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942072), GPR_U32(ctx, 0));
    // 0x1191b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1191b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1191bc: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x1191BCu;
    SET_GPR_U32(ctx, 31, 0x1191C4u);
    ctx->pc = 0x1191C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1191BCu;
    // 0x1191c0: 0xac609d7c  sw          $zero, -0x6284($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942076), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x1191BCu, 0x1191C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1191C4u;
label_1191c4:
    // 0x1191c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1191c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1191c8:
    // 0x1191c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1191c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1191cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1191ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1191d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1191d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1191d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1191d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1191d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1191D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1191DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1191D8u;
        // 0x1191dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1191D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1191E0u;
    // 0x1191e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1191e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1191e4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1191e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1191e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1191e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1191ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1191ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1191f0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1191f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1191f4: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1191F4u;
    {
        const bool branch_taken_0x1191f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1191F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1191F4u;
        // 0x1191f8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1191f4) {
            ctx->pc = 0x11922Cu;
            goto label_11922c;
        }
    }
    ctx->pc = 0x1191FCu;
    // 0x1191fc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1191fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x119200: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x119200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119204: 0x2462d780  addiu       $v0, $v1, -0x2880
    ctx->pc = 0x119204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956928));
    // 0x119208: 0xac64d780  sw          $a0, -0x2880($v1)
    ctx->pc = 0x119208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956928), GPR_U32(ctx, 4));
    // 0x11920c: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x11920cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x119210: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119214: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x119214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x119218: 0xc043ee2  jal         func_10FB88
    ctx->pc = 0x119218u;
    SET_GPR_U32(ctx, 31, 0x119220u);
    ctx->pc = 0x11921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119218u;
    // 0x11921c: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB88u, 0x119218u, 0x119220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119220u;
label_119220:
    // 0x119220: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119224: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119224u;
    {
        const bool branch_taken_0x119224 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x119228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119224u;
        // 0x119228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119224) {
            ctx->pc = 0x119234u;
            goto label_119234;
        }
    }
    ctx->pc = 0x11922Cu;
label_11922c:
    // 0x11922c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11922Cu;
    {
        const bool branch_taken_0x11922c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11922Cu;
        // 0x119230: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11922c) {
            ctx->pc = 0x119250u;
            goto label_119250;
        }
    }
    ctx->pc = 0x119234u;
label_119234:
    // 0x119234: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x119234u;
    {
        const bool branch_taken_0x119234 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x119238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119234u;
        // 0x119238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119234) {
            ctx->pc = 0x119250u;
            goto label_119250;
        }
    }
    ctx->pc = 0x11923Cu;
    // 0x11923c: 0x0  nop
    ctx->pc = 0x11923cu;
    // NOP
label_119240:
    // 0x119240: 0xc043400  jal         func_10D000
    ctx->pc = 0x119240u;
    SET_GPR_U32(ctx, 31, 0x119248u);
    ctx->pc = 0x119244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119240u;
    // 0x119244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D000u, 0x119240u, 0x119248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119248u;
label_119248:
    // 0x119248: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x119248u;
    {
        const bool branch_taken_0x119248 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119248u;
        // 0x11924c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119248) {
            ctx->pc = 0x119240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_119240;
        }
    }
    ctx->pc = 0x119250u;
label_119250:
    // 0x119250: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119254: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11925c: 0x3e00008  jr          $ra
    ctx->pc = 0x11925Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11925Cu;
        // 0x119260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11925Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119264u;
    // 0x119264: 0x0  nop
    ctx->pc = 0x119264u;
    // NOP
    // 0x119268: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x119268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11926c: 0x8c629d78  lw          $v0, -0x6288($v1)
    ctx->pc = 0x11926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942072)));
    // 0x119270: 0xac649d78  sw          $a0, -0x6288($v1)
    ctx->pc = 0x119270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294942072), GPR_U32(ctx, 4));
    // 0x119274: 0x380202d  daddu       $a0, $gp, $zero
    ctx->pc = 0x119274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119278: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x119278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x11927c: 0x3e00008  jr          $ra
    ctx->pc = 0x11927Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11927Cu;
        // 0x119280: 0xac649d7c  sw          $a0, -0x6284($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294942076), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11927Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119284u;
    // 0x119284: 0x0  nop
    ctx->pc = 0x119284u;
    // NOP
    if (ctx->pc == 0x119284u) { ctx->pc = 0x119288u; }
}
