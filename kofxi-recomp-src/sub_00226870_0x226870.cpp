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

// Function: sub_00226870
// Address: 0x226870 - 0x2269b8
void sub_00226870_0x226870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226870_0x226870");
#endif

    switch (ctx->pc) {
        case 0x2268b8u: goto label_2268b8;
        case 0x2268c8u: goto label_2268c8;
        case 0x2268d8u: goto label_2268d8;
        case 0x2268f4u: goto label_2268f4;
        case 0x22691cu: goto label_22691c;
        case 0x226924u: goto label_226924;
        case 0x22693cu: goto label_22693c;
        case 0x226944u: goto label_226944;
        case 0x226948u: goto label_226948;
        case 0x226974u: goto label_226974;
        case 0x226994u: goto label_226994;
        case 0x2269b0u: goto label_2269b0;
        default: break;
    }

    ctx->pc = 0x226870u;

    // 0x226870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x226874: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x226874u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x226878: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22687c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22687cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x226880: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x226880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x226884: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x226884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226888: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x226888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22688c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22688cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226890: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x226890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x226894: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x226894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226898: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x226898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22689c: 0x8deef1dc  lw          $t6, -0xE24($t7)
    ctx->pc = 0x22689cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963676)));
    // 0x2268a0: 0x15c0000d  bnez        $t6, . + 4 + (0xD << 2)
    ctx->pc = 0x2268A0u;
    {
        const bool branch_taken_0x2268a0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2268A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268A0u;
        // 0x2268a4: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2268a0) {
            ctx->pc = 0x2268D8u;
            goto label_2268d8;
        }
    }
    ctx->pc = 0x2268A8u;
    // 0x2268a8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2268A8u;
    {
        const bool branch_taken_0x2268a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2268a8) {
            ctx->pc = 0x2268B8u;
            goto label_2268b8;
        }
    }
    ctx->pc = 0x2268B0u;
    // 0x2268b0: 0xc0be7a4  jal         func_2F9E90
    ctx->pc = 0x2268B0u;
    SET_GPR_U32(ctx, 31, 0x2268B8u);
    ctx->pc = 0x2F9E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9E90u, 0x2268B0u, 0x2268B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2268B8u;
label_2268b8:
    // 0x2268b8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2268B8u;
    {
        const bool branch_taken_0x2268b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2268b8) {
            ctx->pc = 0x2268C8u;
            goto label_2268c8;
        }
    }
    ctx->pc = 0x2268C0u;
    // 0x2268c0: 0xc0be7ae  jal         func_2F9EB8
    ctx->pc = 0x2268C0u;
    SET_GPR_U32(ctx, 31, 0x2268C8u);
    ctx->pc = 0x2268C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2268C0u;
    // 0x2268c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9EB8u, 0x2268C0u, 0x2268C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2268C8u;
label_2268c8:
    // 0x2268c8: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2268C8u;
    {
        const bool branch_taken_0x2268c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2268CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2268C8u;
        // 0x2268cc: 0x240f2000  addiu       $t7, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2268c8) {
            ctx->pc = 0x2268DCu;
            goto label_2268dc;
        }
    }
    ctx->pc = 0x2268D0u;
    // 0x2268d0: 0xc0be7b8  jal         func_2F9EE0
    ctx->pc = 0x2268D0u;
    SET_GPR_U32(ctx, 31, 0x2268D8u);
    ctx->pc = 0x2268D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2268D0u;
    // 0x2268d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9EE0u, 0x2268D0u, 0x2268D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2268D8u;
label_2268d8:
    // 0x2268d8: 0x240f2000  addiu       $t7, $zero, 0x2000
    ctx->pc = 0x2268d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2268dc:
    // 0x2268dc: 0x240e000f  addiu       $t6, $zero, 0xF
    ctx->pc = 0x2268dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2268e0: 0x1f1880a  movz        $s1, $t7, $s1
    ctx->pc = 0x2268e0u;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 15));
    // 0x2268e4: 0x1d0800a  movz        $s0, $t6, $s0
    ctx->pc = 0x2268e4u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 14));
    // 0x2268e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2268e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2268ec: 0xc0bd348  jal         func_2F4D20
    ctx->pc = 0x2268ECu;
    SET_GPR_U32(ctx, 31, 0x2268F4u);
    ctx->pc = 0x2268F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2268ECu;
    // 0x2268f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D20u, 0x2268ECu, 0x2268F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2268F4u;
label_2268f4:
    // 0x2268f4: 0x3c0f003f  lui         $t7, 0x3F
    ctx->pc = 0x2268f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
    // 0x2268f8: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x2268f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x2268fc: 0x25f239a8  addiu       $s2, $t7, 0x39A8
    ctx->pc = 0x2268fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 15), 14760));
    // 0x226900: 0x24e739b8  addiu       $a3, $a3, 0x39B8
    ctx->pc = 0x226900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14776));
    // 0x226904: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x226904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226908: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x226908u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22690c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22690cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226910: 0x240500f9  addiu       $a1, $zero, 0xF9
    ctx->pc = 0x226910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
    // 0x226914: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x226914u;
    SET_GPR_U32(ctx, 31, 0x22691Cu);
    ctx->pc = 0x226918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226914u;
    // 0x226918: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x226914u, 0x22691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22691Cu;
label_22691c:
    // 0x22691c: 0xc0bd318  jal         func_2F4C60
    ctx->pc = 0x22691Cu;
    SET_GPR_U32(ctx, 31, 0x226924u);
    ctx->pc = 0x2F4C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4C60u, 0x22691Cu, 0x226924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226924u;
label_226924:
    // 0x226924: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x226924u;
    {
        const bool branch_taken_0x226924 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x226928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226924u;
        // 0x226928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226924) {
            ctx->pc = 0x226964u;
            goto label_226964;
        }
    }
    ctx->pc = 0x22692Cu;
    // 0x22692c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x22692cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226930: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x226930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226934: 0x240500fd  addiu       $a1, $zero, 0xFD
    ctx->pc = 0x226934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x226938: 0x24e739e8  addiu       $a3, $a3, 0x39E8
    ctx->pc = 0x226938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14824));
label_22693c:
    // 0x22693c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x22693Cu;
    SET_GPR_U32(ctx, 31, 0x226944u);
    ctx->pc = 0x226940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22693Cu;
    // 0x226940: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x22693Cu, 0x226944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226944u;
label_226944:
    // 0x226944: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x226944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_226948:
    // 0x226948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22694c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22694cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226950: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x226950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226954: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x226954u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x226958: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x226958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22695c: 0x3e00008  jr          $ra
    ctx->pc = 0x22695Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22695Cu;
        // 0x226960: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22695Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226964u;
label_226964:
    // 0x226964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x226968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22696c: 0xc0be81a  jal         func_2FA068
    ctx->pc = 0x22696Cu;
    SET_GPR_U32(ctx, 31, 0x226974u);
    ctx->pc = 0x226970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22696Cu;
    // 0x226970: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA068u, 0x22696Cu, 0x226974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226974u;
label_226974:
    // 0x226974: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x226974u;
    {
        const bool branch_taken_0x226974 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x226978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226974u;
        // 0x226978: 0x3c07003f  lui         $a3, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226974) {
            ctx->pc = 0x22698Cu;
            goto label_22698c;
        }
    }
    ctx->pc = 0x22697Cu;
    // 0x22697c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22697cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226980: 0x24050103  addiu       $a1, $zero, 0x103
    ctx->pc = 0x226980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    // 0x226984: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x226984u;
    {
        const bool branch_taken_0x226984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226984u;
        // 0x226988: 0x24e73a00  addiu       $a3, $a3, 0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226984) {
            ctx->pc = 0x22693Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22693c;
        }
    }
    ctx->pc = 0x22698Cu;
label_22698c:
    // 0x22698c: 0xc0be3e8  jal         func_2F8FA0
    ctx->pc = 0x22698Cu;
    SET_GPR_U32(ctx, 31, 0x226994u);
    ctx->pc = 0x2F8FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8FA0u, 0x22698Cu, 0x226994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226994u;
label_226994:
    // 0x226994: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x226994u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x226998: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x226998u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22699c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22699cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2269a0: 0x24e73a18  addiu       $a3, $a3, 0x3A18
    ctx->pc = 0x2269a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14872));
    // 0x2269a4: 0x24050108  addiu       $a1, $zero, 0x108
    ctx->pc = 0x2269a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x2269a8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2269A8u;
    SET_GPR_U32(ctx, 31, 0x2269B0u);
    ctx->pc = 0x2269ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2269A8u;
    // 0x2269ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2269A8u, 0x2269B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2269B0u;
label_2269b0:
    // 0x2269b0: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x2269B0u;
    {
        const bool branch_taken_0x2269b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2269B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269B0u;
        // 0x2269b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2269b0) {
            ctx->pc = 0x226948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_226948;
        }
    }
    ctx->pc = 0x2269B8u;
}
