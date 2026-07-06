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

// Function: sub_001202F0
// Address: 0x1202f0 - 0x1203b8
void sub_001202F0_0x1202f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001202F0_0x1202f0");
#endif

    switch (ctx->pc) {
        case 0x120340u: goto label_120340;
        case 0x12034cu: goto label_12034c;
        case 0x12035cu: goto label_12035c;
        case 0x120374u: goto label_120374;
        case 0x12038cu: goto label_12038c;
        case 0x120398u: goto label_120398;
        case 0x1203a0u: goto label_1203a0;
        default: break;
    }

    ctx->pc = 0x1202f0u;

    // 0x1202f0: 0x240ff800  addiu       $t7, $zero, -0x800
    ctx->pc = 0x1202f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x1202f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1202f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1202f8: 0xf7afa  dsrl        $t7, $t7, 11
    ctx->pc = 0x1202f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 11);
    // 0x1202fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1202fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x120300: 0x240ef800  addiu       $t6, $zero, -0x800
    ctx->pc = 0x120300u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x120304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x120304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120308: 0x8f782d  daddu       $t7, $a0, $t7
    ctx->pc = 0x120308u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 15));
    // 0x12030c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12030cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x120310: 0xe72ba  dsrl        $t6, $t6, 10
    ctx->pc = 0x120310u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 10);
    // 0x120314: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x120314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x120318: 0x1cf702b  sltu        $t6, $t6, $t7
    ctx->pc = 0x120318u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12031c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12031cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120320: 0x308d07ff  andi        $t5, $a0, 0x7FF
    ctx->pc = 0x120320u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x120324: 0x11c00002  beqz        $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x120324u;
    {
        const bool branch_taken_0x120324 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x120328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120324u;
        // 0x120328: 0x348f0800  ori         $t7, $a0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120324) {
            ctx->pc = 0x120330u;
            goto label_120330;
        }
    }
    ctx->pc = 0x12032Cu;
    // 0x12032c: 0x1ed900b  movn        $s2, $t7, $t5
    ctx->pc = 0x12032cu;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 15));
label_120330:
    // 0x120330: 0x12203f  dsra32      $a0, $s2, 0
    ctx->pc = 0x120330u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x120334: 0x2410040f  addiu       $s0, $zero, 0x40F
    ctx->pc = 0x120334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x120338: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x120338u;
    SET_GPR_U32(ctx, 31, 0x120340u);
    ctx->pc = 0x12033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120338u;
    // 0x12033c: 0x10853c  dsll32      $s0, $s0, 20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x120338u, 0x120340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120340u;
label_120340:
    // 0x120340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x120340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120344: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x120344u;
    SET_GPR_U32(ctx, 31, 0x12034Cu);
    ctx->pc = 0x120348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120344u;
    // 0x120348: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x120344u, 0x12034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12034Cu;
label_12034c:
    // 0x12034c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12034cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120350: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120354: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x120354u;
    SET_GPR_U32(ctx, 31, 0x12035Cu);
    ctx->pc = 0x120358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120354u;
    // 0x120358: 0x12803c  dsll32      $s0, $s2, 0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x120354u, 0x12035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12035Cu;
label_12035c:
    // 0x12035c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x12035cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x120360: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x120360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120364: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x120364u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x120368: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x120368u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x12036c: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x12036Cu;
    SET_GPR_U32(ctx, 31, 0x120374u);
    ctx->pc = 0x120370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12036Cu;
    // 0x120370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x12036Cu, 0x120374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120374u;
label_120374:
    // 0x120374: 0x2405041f  addiu       $a1, $zero, 0x41F
    ctx->pc = 0x120374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x120378: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12037c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12037Cu;
    {
        const bool branch_taken_0x12037c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x120380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12037Cu;
        // 0x120380: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12037c) {
            ctx->pc = 0x12038Cu;
            goto label_12038c;
        }
    }
    ctx->pc = 0x120384u;
    // 0x120384: 0xc048a46  jal         func_122918
    ctx->pc = 0x120384u;
    SET_GPR_U32(ctx, 31, 0x12038Cu);
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x120384u, 0x12038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12038Cu;
label_12038c:
    // 0x12038c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12038cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120390: 0xc048a46  jal         func_122918
    ctx->pc = 0x120390u;
    SET_GPR_U32(ctx, 31, 0x120398u);
    ctx->pc = 0x120394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120390u;
    // 0x120394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122918u, 0x120390u, 0x120398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120398u;
label_120398:
    // 0x120398: 0xc048c12  jal         func_123048
    ctx->pc = 0x120398u;
    SET_GPR_U32(ctx, 31, 0x1203A0u);
    ctx->pc = 0x12039Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120398u;
    // 0x12039c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123048u, 0x120398u, 0x1203A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1203A0u;
label_1203a0:
    // 0x1203a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1203a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1203a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1203a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1203a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1203a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1203ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1203acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1203b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1203B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1203B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1203B0u;
        // 0x1203b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1203B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1203B8u;
}
