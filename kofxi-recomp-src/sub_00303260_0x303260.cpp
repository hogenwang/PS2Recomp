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

// Function: sub_00303260
// Address: 0x303260 - 0x303440
void sub_00303260_0x303260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303260_0x303260");
#endif

    switch (ctx->pc) {
        case 0x303284u: goto label_303284;
        case 0x303290u: goto label_303290;
        case 0x3032a8u: goto label_3032a8;
        case 0x3032d0u: goto label_3032d0;
        case 0x3032d8u: goto label_3032d8;
        case 0x3032e8u: goto label_3032e8;
        case 0x3032f0u: goto label_3032f0;
        case 0x3032f8u: goto label_3032f8;
        case 0x303324u: goto label_303324;
        case 0x30332cu: goto label_30332c;
        case 0x303340u: goto label_303340;
        case 0x303348u: goto label_303348;
        case 0x303350u: goto label_303350;
        case 0x30337cu: goto label_30337c;
        case 0x303384u: goto label_303384;
        case 0x303398u: goto label_303398;
        case 0x3033a4u: goto label_3033a4;
        case 0x3033acu: goto label_3033ac;
        case 0x3033c0u: goto label_3033c0;
        case 0x3033e8u: goto label_3033e8;
        case 0x3033f0u: goto label_3033f0;
        case 0x303428u: goto label_303428;
        default: break;
    }

    ctx->pc = 0x303260u;

    // 0x303260: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x303260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x303264: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x303264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x303268: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x303268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30326c: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x30326cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x303270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x303270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303274: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303278: 0x8c450c68  lw          $a1, 0xC68($v0)
    ctx->pc = 0x303278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3176)));
    // 0x30327c: 0xc0c0c5c  jal         func_303170
    ctx->pc = 0x30327Cu;
    SET_GPR_U32(ctx, 31, 0x303284u);
    ctx->pc = 0x303280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30327Cu;
    // 0x303280: 0x24840d00  addiu       $a0, $a0, 0xD00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303170u, 0x30327Cu, 0x303284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303284u;
label_303284:
    // 0x303284: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x303284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x303288: 0xc0c06b0  jal         func_301AC0
    ctx->pc = 0x303288u;
    SET_GPR_U32(ctx, 31, 0x303290u);
    ctx->pc = 0x30328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303288u;
    // 0x30328c: 0xac400c60  sw          $zero, 0xC60($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 3168), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AC0u, 0x303288u, 0x303290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303290u;
label_303290:
    // 0x303290: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x303290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x303294: 0x8c630c68  lw          $v1, 0xC68($v1)
    ctx->pc = 0x303294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3176)));
    // 0x303298: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x303298u;
    {
        const bool branch_taken_0x303298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303298u;
        // 0x30329c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303298) {
            ctx->pc = 0x303410u;
            goto label_303410;
        }
    }
    ctx->pc = 0x3032A0u;
    // 0x3032a0: 0x3c1001cb  lui         $s0, 0x1CB
    ctx->pc = 0x3032a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)459 << 16));
    // 0x3032a4: 0x26100d00  addiu       $s0, $s0, 0xD00
    ctx->pc = 0x3032a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
label_3032a8:
    // 0x3032a8: 0x9203003d  lbu         $v1, 0x3D($s0)
    ctx->pc = 0x3032a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
    // 0x3032ac: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x3032acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3032b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3032B0u;
    {
        const bool branch_taken_0x3032b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3032b0) {
            ctx->pc = 0x303300u;
            goto label_303300;
        }
    }
    ctx->pc = 0x3032B8u;
    // 0x3032b8: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x3032b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x3032bc: 0x8c420c60  lw          $v0, 0xC60($v0)
    ctx->pc = 0x3032bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3168)));
    // 0x3032c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3032C0u;
    {
        const bool branch_taken_0x3032c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3032c0) {
            ctx->pc = 0x3032E0u;
            goto label_3032e0;
        }
    }
    ctx->pc = 0x3032C8u;
    // 0x3032c8: 0xc0c0828  jal         func_3020A0
    ctx->pc = 0x3032C8u;
    SET_GPR_U32(ctx, 31, 0x3032D0u);
    ctx->pc = 0x3020A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020A0u, 0x3032C8u, 0x3032D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3032D0u;
label_3032d0:
    // 0x3032d0: 0xc0c06b0  jal         func_301AC0
    ctx->pc = 0x3032D0u;
    SET_GPR_U32(ctx, 31, 0x3032D8u);
    ctx->pc = 0x301AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AC0u, 0x3032D0u, 0x3032D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3032D8u;
label_3032d8:
    // 0x3032d8: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x3032d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x3032dc: 0xac400c60  sw          $zero, 0xC60($v0)
    ctx->pc = 0x3032dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3168), GPR_U32(ctx, 0));
label_3032e0:
    // 0x3032e0: 0xc0c0904  jal         func_302410
    ctx->pc = 0x3032E0u;
    SET_GPR_U32(ctx, 31, 0x3032E8u);
    ctx->pc = 0x3032E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3032E0u;
    // 0x3032e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302410u, 0x3032E0u, 0x3032E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3032E8u;
label_3032e8:
    // 0x3032e8: 0xc0c0874  jal         func_3021D0
    ctx->pc = 0x3032E8u;
    SET_GPR_U32(ctx, 31, 0x3032F0u);
    ctx->pc = 0x3021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3021D0u, 0x3032E8u, 0x3032F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3032F0u;
label_3032f0:
    // 0x3032f0: 0xc0c06b0  jal         func_301AC0
    ctx->pc = 0x3032F0u;
    SET_GPR_U32(ctx, 31, 0x3032F8u);
    ctx->pc = 0x301AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AC0u, 0x3032F0u, 0x3032F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3032F8u;
label_3032f8:
    // 0x3032f8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3032F8u;
    {
        const bool branch_taken_0x3032f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3032f8) {
            ctx->pc = 0x3033F8u;
            goto label_3033f8;
        }
    }
    ctx->pc = 0x303300u;
label_303300:
    // 0x303300: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x303300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x303304: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x303304u;
    {
        const bool branch_taken_0x303304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303304) {
            ctx->pc = 0x303358u;
            goto label_303358;
        }
    }
    ctx->pc = 0x30330Cu;
    // 0x30330c: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x30330cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x303310: 0x8c420c60  lw          $v0, 0xC60($v0)
    ctx->pc = 0x303310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3168)));
    // 0x303314: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x303314u;
    {
        const bool branch_taken_0x303314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303314) {
            ctx->pc = 0x303338u;
            goto label_303338;
        }
    }
    ctx->pc = 0x30331Cu;
    // 0x30331c: 0xc0c0828  jal         func_3020A0
    ctx->pc = 0x30331Cu;
    SET_GPR_U32(ctx, 31, 0x303324u);
    ctx->pc = 0x3020A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020A0u, 0x30331Cu, 0x303324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303324u;
label_303324:
    // 0x303324: 0xc0c06b0  jal         func_301AC0
    ctx->pc = 0x303324u;
    SET_GPR_U32(ctx, 31, 0x30332Cu);
    ctx->pc = 0x301AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AC0u, 0x303324u, 0x30332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30332Cu;
label_30332c:
    // 0x30332c: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x30332cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x303330: 0xac400c60  sw          $zero, 0xC60($v0)
    ctx->pc = 0x303330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3168), GPR_U32(ctx, 0));
    // 0x303334: 0x0  nop
    ctx->pc = 0x303334u;
    // NOP
label_303338:
    // 0x303338: 0xc0c0904  jal         func_302410
    ctx->pc = 0x303338u;
    SET_GPR_U32(ctx, 31, 0x303340u);
    ctx->pc = 0x30333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303338u;
    // 0x30333c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302410u, 0x303338u, 0x303340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303340u;
label_303340:
    // 0x303340: 0xc0c08a0  jal         func_302280
    ctx->pc = 0x303340u;
    SET_GPR_U32(ctx, 31, 0x303348u);
    ctx->pc = 0x303344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303340u;
    // 0x303344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302280u, 0x303340u, 0x303348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303348u;
label_303348:
    // 0x303348: 0xc0c06b0  jal         func_301AC0
    ctx->pc = 0x303348u;
    SET_GPR_U32(ctx, 31, 0x303350u);
    ctx->pc = 0x301AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AC0u, 0x303348u, 0x303350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303350u;
label_303350:
    // 0x303350: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x303350u;
    {
        const bool branch_taken_0x303350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303350) {
            ctx->pc = 0x3033F8u;
            goto label_3033f8;
        }
    }
    ctx->pc = 0x303358u;
label_303358:
    // 0x303358: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x303358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x30335c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x30335Cu;
    {
        const bool branch_taken_0x30335c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30335c) {
            ctx->pc = 0x3033B8u;
            goto label_3033b8;
        }
    }
    ctx->pc = 0x303364u;
    // 0x303364: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x303364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x303368: 0x8c420c60  lw          $v0, 0xC60($v0)
    ctx->pc = 0x303368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3168)));
    // 0x30336c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30336Cu;
    {
        const bool branch_taken_0x30336c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30336c) {
            ctx->pc = 0x303390u;
            goto label_303390;
        }
    }
    ctx->pc = 0x303374u;
    // 0x303374: 0xc0c0828  jal         func_3020A0
    ctx->pc = 0x303374u;
    SET_GPR_U32(ctx, 31, 0x30337Cu);
    ctx->pc = 0x3020A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020A0u, 0x303374u, 0x30337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30337Cu;
label_30337c:
    // 0x30337c: 0xc0c06b0  jal         func_301AC0
    ctx->pc = 0x30337Cu;
    SET_GPR_U32(ctx, 31, 0x303384u);
    ctx->pc = 0x301AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AC0u, 0x30337Cu, 0x303384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303384u;
label_303384:
    // 0x303384: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x303384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x303388: 0xac400c60  sw          $zero, 0xC60($v0)
    ctx->pc = 0x303388u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3168), GPR_U32(ctx, 0));
    // 0x30338c: 0x0  nop
    ctx->pc = 0x30338cu;
    // NOP
label_303390:
    // 0x303390: 0xc0c0904  jal         func_302410
    ctx->pc = 0x303390u;
    SET_GPR_U32(ctx, 31, 0x303398u);
    ctx->pc = 0x303394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303390u;
    // 0x303394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302410u, 0x303390u, 0x303398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303398u;
label_303398:
    // 0x303398: 0x9202003d  lbu         $v0, 0x3D($s0)
    ctx->pc = 0x303398u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
    // 0x30339c: 0xc0c08cc  jal         func_302330
    ctx->pc = 0x30339Cu;
    SET_GPR_U32(ctx, 31, 0x3033A4u);
    ctx->pc = 0x3033A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30339Cu;
    // 0x3033a0: 0x3044000f  andi        $a0, $v0, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x302330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302330u, 0x30339Cu, 0x3033A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033A4u;
label_3033a4:
    // 0x3033a4: 0xc0c06b0  jal         func_301AC0
    ctx->pc = 0x3033A4u;
    SET_GPR_U32(ctx, 31, 0x3033ACu);
    ctx->pc = 0x301AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AC0u, 0x3033A4u, 0x3033ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033ACu;
label_3033ac:
    // 0x3033ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3033ACu;
    {
        const bool branch_taken_0x3033ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3033ac) {
            ctx->pc = 0x3033F8u;
            goto label_3033f8;
        }
    }
    ctx->pc = 0x3033B4u;
    // 0x3033b4: 0x0  nop
    ctx->pc = 0x3033b4u;
    // NOP
label_3033b8:
    // 0x3033b8: 0xc0c0904  jal         func_302410
    ctx->pc = 0x3033B8u;
    SET_GPR_U32(ctx, 31, 0x3033C0u);
    ctx->pc = 0x3033BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3033B8u;
    // 0x3033bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302410u, 0x3033B8u, 0x3033C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033C0u;
label_3033c0:
    // 0x3033c0: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x3033c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x3033c4: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x3033c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x3033c8: 0x8c840c60  lw          $a0, 0xC60($a0)
    ctx->pc = 0x3033c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3168)));
    // 0x3033cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3033ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3033d0: 0xac640c60  sw          $a0, 0xC60($v1)
    ctx->pc = 0x3033d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3168), GPR_U32(ctx, 4));
    // 0x3033d4: 0x2c8300b8  sltiu       $v1, $a0, 0xB8
    ctx->pc = 0x3033d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)184) ? 1 : 0);
    // 0x3033d8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3033D8u;
    {
        const bool branch_taken_0x3033d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3033d8) {
            ctx->pc = 0x3033F8u;
            goto label_3033f8;
        }
    }
    ctx->pc = 0x3033E0u;
    // 0x3033e0: 0xc0c0828  jal         func_3020A0
    ctx->pc = 0x3033E0u;
    SET_GPR_U32(ctx, 31, 0x3033E8u);
    ctx->pc = 0x3020A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020A0u, 0x3033E0u, 0x3033E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033E8u;
label_3033e8:
    // 0x3033e8: 0xc0c06b0  jal         func_301AC0
    ctx->pc = 0x3033E8u;
    SET_GPR_U32(ctx, 31, 0x3033F0u);
    ctx->pc = 0x301AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AC0u, 0x3033E8u, 0x3033F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3033F0u;
label_3033f0:
    // 0x3033f0: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x3033f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x3033f4: 0xac600c60  sw          $zero, 0xC60($v1)
    ctx->pc = 0x3033f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3168), GPR_U32(ctx, 0));
label_3033f8:
    // 0x3033f8: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x3033f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x3033fc: 0x8c630c68  lw          $v1, 0xC68($v1)
    ctx->pc = 0x3033fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3176)));
    // 0x303400: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x303400u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x303404: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x303404u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x303408: 0x1460ffa7  bnez        $v1, . + 4 + (-0x59 << 2)
    ctx->pc = 0x303408u;
    {
        const bool branch_taken_0x303408 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303408u;
        // 0x30340c: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303408) {
            ctx->pc = 0x3032A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3032a8;
        }
    }
    ctx->pc = 0x303410u;
label_303410:
    // 0x303410: 0x3c0301cb  lui         $v1, 0x1CB
    ctx->pc = 0x303410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
    // 0x303414: 0x8c630c60  lw          $v1, 0xC60($v1)
    ctx->pc = 0x303414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3168)));
    // 0x303418: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x303418u;
    {
        const bool branch_taken_0x303418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303418) {
            ctx->pc = 0x30341Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x303418u;
            // 0x30341c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30342Cu;
            goto label_30342c;
        }
    }
    ctx->pc = 0x303420u;
    // 0x303420: 0xc0c0828  jal         func_3020A0
    ctx->pc = 0x303420u;
    SET_GPR_U32(ctx, 31, 0x303428u);
    ctx->pc = 0x3020A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020A0u, 0x303420u, 0x303428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303428u;
label_303428:
    // 0x303428: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x303428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30342c:
    // 0x30342c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30342cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303434: 0x3e00008  jr          $ra
    ctx->pc = 0x303434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303434u;
        // 0x303438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30343Cu;
    // 0x30343c: 0x0  nop
    ctx->pc = 0x30343cu;
    // NOP
    if (ctx->pc == 0x30343cu) { ctx->pc = 0x303440u; }
}
