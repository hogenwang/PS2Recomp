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

// Function: sub_002FC198
// Address: 0x2fc198 - 0x2fc300
void sub_002FC198_0x2fc198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC198_0x2fc198");
#endif

    switch (ctx->pc) {
        case 0x2fc1b8u: goto label_2fc1b8;
        case 0x2fc1ccu: goto label_2fc1cc;
        case 0x2fc1dcu: goto label_2fc1dc;
        case 0x2fc1e8u: goto label_2fc1e8;
        case 0x2fc1f8u: goto label_2fc1f8;
        case 0x2fc20cu: goto label_2fc20c;
        case 0x2fc21cu: goto label_2fc21c;
        case 0x2fc228u: goto label_2fc228;
        case 0x2fc238u: goto label_2fc238;
        case 0x2fc250u: goto label_2fc250;
        case 0x2fc260u: goto label_2fc260;
        case 0x2fc26cu: goto label_2fc26c;
        case 0x2fc27cu: goto label_2fc27c;
        case 0x2fc28cu: goto label_2fc28c;
        case 0x2fc294u: goto label_2fc294;
        case 0x2fc2a4u: goto label_2fc2a4;
        case 0x2fc2acu: goto label_2fc2ac;
        case 0x2fc2b4u: goto label_2fc2b4;
        case 0x2fc2c4u: goto label_2fc2c4;
        case 0x2fc2ccu: goto label_2fc2cc;
        case 0x2fc2dcu: goto label_2fc2dc;
        case 0x2fc2e8u: goto label_2fc2e8;
        default: break;
    }

    ctx->pc = 0x2fc198u;

    // 0x2fc198: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2fc198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2fc19c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2fc19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x2fc1a0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2fc1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2fc1a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fc1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc1a8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2fc1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2fc1ac: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2fc1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2fc1b0: 0xc0afd6e  jal         func_2BF5B8
    ctx->pc = 0x2FC1B0u;
    SET_GPR_U32(ctx, 31, 0x2FC1B8u);
    ctx->pc = 0x2FC1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC1B0u;
    // 0x2fc1b4: 0x26102f20  addiu       $s0, $s0, 0x2F20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF5B8u, 0x2FC1B0u, 0x2FC1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC1B8u;
label_2fc1b8:
    // 0x2fc1b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fc1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fc1bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2fc1bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2fc1c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fc1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc1c4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FC1C4u;
    SET_GPR_U32(ctx, 31, 0x2FC1CCu);
    ctx->pc = 0x2FC1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC1C4u;
    // 0x2fc1c8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FC1C4u, 0x2FC1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC1CCu;
label_2fc1cc:
    // 0x2fc1cc: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2fc1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2fc1d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc1d4: 0xc0afd0e  jal         func_2BF438
    ctx->pc = 0x2FC1D4u;
    SET_GPR_U32(ctx, 31, 0x2FC1DCu);
    ctx->pc = 0x2FC1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC1D4u;
    // 0x2fc1d8: 0x26102f40  addiu       $s0, $s0, 0x2F40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF438u, 0x2FC1D4u, 0x2FC1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC1DCu;
label_2fc1dc:
    // 0x2fc1dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fc1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc1e0: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FC1E0u;
    SET_GPR_U32(ctx, 31, 0x2FC1E8u);
    ctx->pc = 0x2FC1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC1E0u;
    // 0x2fc1e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FC1E0u, 0x2FC1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC1E8u;
label_2fc1e8:
    // 0x2fc1e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc1ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fc1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc1f0: 0xc0afd16  jal         func_2BF458
    ctx->pc = 0x2FC1F0u;
    SET_GPR_U32(ctx, 31, 0x2FC1F8u);
    ctx->pc = 0x2FC1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC1F0u;
    // 0x2fc1f4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF458u, 0x2FC1F0u, 0x2FC1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC1F8u;
label_2fc1f8:
    // 0x2fc1f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FC1F8u;
    {
        const bool branch_taken_0x2fc1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC1F8u;
        // 0x2fc1fc: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc1f8) {
            ctx->pc = 0x2FC20Cu;
            goto label_2fc20c;
        }
    }
    ctx->pc = 0x2FC200u;
    // 0x2fc200: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fc200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc204: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FC204u;
    SET_GPR_U32(ctx, 31, 0x2FC20Cu);
    ctx->pc = 0x2FC208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC204u;
    // 0x2fc208: 0x24842f58  addiu       $a0, $a0, 0x2F58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FC204u, 0x2FC20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC20Cu;
label_2fc20c:
    // 0x2fc20c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2fc20cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2fc210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc214: 0xc0afd3e  jal         func_2BF4F8
    ctx->pc = 0x2FC214u;
    SET_GPR_U32(ctx, 31, 0x2FC21Cu);
    ctx->pc = 0x2FC218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC214u;
    // 0x2fc218: 0x26102f60  addiu       $s0, $s0, 0x2F60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF4F8u, 0x2FC214u, 0x2FC21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC21Cu;
label_2fc21c:
    // 0x2fc21c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fc21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc220: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FC220u;
    SET_GPR_U32(ctx, 31, 0x2FC228u);
    ctx->pc = 0x2FC224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC220u;
    // 0x2fc224: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FC220u, 0x2FC228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC228u;
label_2fc228:
    // 0x2fc228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc22c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fc22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc230: 0xc0afd46  jal         func_2BF518
    ctx->pc = 0x2FC230u;
    SET_GPR_U32(ctx, 31, 0x2FC238u);
    ctx->pc = 0x2FC234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC230u;
    // 0x2fc234: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF518u, 0x2FC230u, 0x2FC238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC238u;
label_2fc238:
    // 0x2fc238: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC238u;
    {
        const bool branch_taken_0x2fc238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc238) {
            ctx->pc = 0x2FC23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC238u;
            // 0x2fc23c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC254u;
            goto label_2fc254;
        }
    }
    ctx->pc = 0x2FC240u;
    // 0x2fc240: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fc240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fc244: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fc244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc248: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FC248u;
    SET_GPR_U32(ctx, 31, 0x2FC250u);
    ctx->pc = 0x2FC24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC248u;
    // 0x2fc24c: 0x24842f58  addiu       $a0, $a0, 0x2F58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FC248u, 0x2FC250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC250u;
label_2fc250:
    // 0x2fc250: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2fc250u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_2fc254:
    // 0x2fc254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc258: 0xc0afd88  jal         func_2BF620
    ctx->pc = 0x2FC258u;
    SET_GPR_U32(ctx, 31, 0x2FC260u);
    ctx->pc = 0x2FC25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC258u;
    // 0x2fc25c: 0x26102f78  addiu       $s0, $s0, 0x2F78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF620u, 0x2FC258u, 0x2FC260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC260u;
label_2fc260:
    // 0x2fc260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fc260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc264: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FC264u;
    SET_GPR_U32(ctx, 31, 0x2FC26Cu);
    ctx->pc = 0x2FC268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC264u;
    // 0x2fc268: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FC264u, 0x2FC26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC26Cu;
label_2fc26c:
    // 0x2fc26c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc270: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fc270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc274: 0xc0afd92  jal         func_2BF648
    ctx->pc = 0x2FC274u;
    SET_GPR_U32(ctx, 31, 0x2FC27Cu);
    ctx->pc = 0x2FC278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC274u;
    // 0x2fc278: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF648u, 0x2FC274u, 0x2FC27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC27Cu;
label_2fc27c:
    // 0x2fc27c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fc27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fc280: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fc280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc284: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FC284u;
    SET_GPR_U32(ctx, 31, 0x2FC28Cu);
    ctx->pc = 0x2FC288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC284u;
    // 0x2fc288: 0x24842f98  addiu       $a0, $a0, 0x2F98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FC284u, 0x2FC28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC28Cu;
label_2fc28c:
    // 0x2fc28c: 0xc0afc48  jal         func_2BF120
    ctx->pc = 0x2FC28Cu;
    SET_GPR_U32(ctx, 31, 0x2FC294u);
    ctx->pc = 0x2FC290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC28Cu;
    // 0x2fc290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF120u, 0x2FC28Cu, 0x2FC294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC294u;
label_2fc294:
    // 0x2fc294: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fc294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fc298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fc298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc29c: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FC29Cu;
    SET_GPR_U32(ctx, 31, 0x2FC2A4u);
    ctx->pc = 0x2FC2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC29Cu;
    // 0x2fc2a0: 0x24842fb8  addiu       $a0, $a0, 0x2FB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FC29Cu, 0x2FC2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC2A4u;
label_2fc2a4:
    // 0x2fc2a4: 0xc0bf0c0  jal         func_2FC300
    ctx->pc = 0x2FC2A4u;
    SET_GPR_U32(ctx, 31, 0x2FC2ACu);
    ctx->pc = 0x2FC2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC2A4u;
    // 0x2fc2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC300u, 0x2FC2A4u, 0x2FC2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC2ACu;
label_2fc2ac:
    // 0x2fc2ac: 0xc0afc4c  jal         func_2BF130
    ctx->pc = 0x2FC2ACu;
    SET_GPR_U32(ctx, 31, 0x2FC2B4u);
    ctx->pc = 0x2FC2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC2ACu;
    // 0x2fc2b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF130u, 0x2FC2ACu, 0x2FC2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC2B4u;
label_2fc2b4:
    // 0x2fc2b4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fc2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fc2b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fc2b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc2bc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FC2BCu;
    SET_GPR_U32(ctx, 31, 0x2FC2C4u);
    ctx->pc = 0x2FC2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC2BCu;
    // 0x2fc2c0: 0x24842fd8  addiu       $a0, $a0, 0x2FD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FC2BCu, 0x2FC2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC2C4u;
label_2fc2c4:
    // 0x2fc2c4: 0xc0bf0c0  jal         func_2FC300
    ctx->pc = 0x2FC2C4u;
    SET_GPR_U32(ctx, 31, 0x2FC2CCu);
    ctx->pc = 0x2FC2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC2C4u;
    // 0x2fc2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC300u, 0x2FC2C4u, 0x2FC2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC2CCu;
label_2fc2cc:
    // 0x2fc2cc: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2fc2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2fc2d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fc2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc2d4: 0xc0afd06  jal         func_2BF418
    ctx->pc = 0x2FC2D4u;
    SET_GPR_U32(ctx, 31, 0x2FC2DCu);
    ctx->pc = 0x2FC2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC2D4u;
    // 0x2fc2d8: 0x26102ff8  addiu       $s0, $s0, 0x2FF8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF418u, 0x2FC2D4u, 0x2FC2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC2DCu;
label_2fc2dc:
    // 0x2fc2dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fc2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc2e0: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FC2E0u;
    SET_GPR_U32(ctx, 31, 0x2FC2E8u);
    ctx->pc = 0x2FC2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC2E0u;
    // 0x2fc2e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FC2E0u, 0x2FC2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC2E8u;
label_2fc2e8:
    // 0x2fc2e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2fc2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fc2ec: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x2fc2ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fc2f0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2fc2f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fc2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC2F4u;
        // 0x2fc2f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC2FCu;
    // 0x2fc2fc: 0x0  nop
    ctx->pc = 0x2fc2fcu;
    // NOP
    if (ctx->pc == 0x2fc2fcu) { ctx->pc = 0x2fc300u; }
}
