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

// Function: sub_002AE130
// Address: 0x2ae130 - 0x2ae620
void sub_002AE130_0x2ae130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AE130_0x2ae130");
#endif

    switch (ctx->pc) {
        case 0x2ae164u: goto label_2ae164;
        case 0x2ae174u: goto label_2ae174;
        case 0x2ae1a0u: goto label_2ae1a0;
        case 0x2ae1b4u: goto label_2ae1b4;
        case 0x2ae1c8u: goto label_2ae1c8;
        case 0x2ae1d8u: goto label_2ae1d8;
        case 0x2ae1e0u: goto label_2ae1e0;
        case 0x2ae1ecu: goto label_2ae1ec;
        case 0x2ae200u: goto label_2ae200;
        case 0x2ae214u: goto label_2ae214;
        case 0x2ae224u: goto label_2ae224;
        case 0x2ae234u: goto label_2ae234;
        case 0x2ae2e4u: goto label_2ae2e4;
        case 0x2ae2f4u: goto label_2ae2f4;
        case 0x2ae308u: goto label_2ae308;
        case 0x2ae318u: goto label_2ae318;
        case 0x2ae330u: goto label_2ae330;
        case 0x2ae354u: goto label_2ae354;
        case 0x2ae364u: goto label_2ae364;
        case 0x2ae374u: goto label_2ae374;
        case 0x2ae380u: goto label_2ae380;
        case 0x2ae390u: goto label_2ae390;
        case 0x2ae3a4u: goto label_2ae3a4;
        case 0x2ae3b4u: goto label_2ae3b4;
        case 0x2ae3c4u: goto label_2ae3c4;
        case 0x2ae3e0u: goto label_2ae3e0;
        case 0x2ae470u: goto label_2ae470;
        case 0x2ae480u: goto label_2ae480;
        case 0x2ae490u: goto label_2ae490;
        case 0x2ae4a0u: goto label_2ae4a0;
        case 0x2ae4b0u: goto label_2ae4b0;
        case 0x2ae4c4u: goto label_2ae4c4;
        case 0x2ae4d8u: goto label_2ae4d8;
        case 0x2ae4ecu: goto label_2ae4ec;
        case 0x2ae4fcu: goto label_2ae4fc;
        case 0x2ae51cu: goto label_2ae51c;
        case 0x2ae530u: goto label_2ae530;
        case 0x2ae540u: goto label_2ae540;
        default: break;
    }

    ctx->pc = 0x2ae130u;

    // 0x2ae130: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2ae130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2ae134: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2ae134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2ae138: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2ae138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2ae13c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2ae13cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae140: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2ae140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2ae144: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ae144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae148: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2ae148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2ae14c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ae14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae150: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ae150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ae154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ae154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae158: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2ae158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2ae15c: 0xc0a5bae  jal         func_296EB8
    ctx->pc = 0x2AE15Cu;
    SET_GPR_U32(ctx, 31, 0x2AE164u);
    ctx->pc = 0x2AE160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE15Cu;
    // 0x2ae160: 0x8e040128  lw          $a0, 0x128($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296EB8u, 0x2AE15Cu, 0x2AE164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE164u;
label_2ae164:
    // 0x2ae164: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2AE164u;
    {
        const bool branch_taken_0x2ae164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE164u;
        // 0x2ae168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae164) {
            ctx->pc = 0x2AE238u;
            goto label_2ae238;
        }
    }
    ctx->pc = 0x2AE16Cu;
    // 0x2ae16c: 0xc0a5afa  jal         func_296BE8
    ctx->pc = 0x2AE16Cu;
    SET_GPR_U32(ctx, 31, 0x2AE174u);
    ctx->pc = 0x2AE170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE16Cu;
    // 0x2ae170: 0x8e040128  lw          $a0, 0x128($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BE8u, 0x2AE16Cu, 0x2AE174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE174u;
label_2ae174:
    // 0x2ae174: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2ae174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ae178: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE178u;
    {
        const bool branch_taken_0x2ae178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae178) {
            ctx->pc = 0x2AE17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE178u;
            // 0x2ae17c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE180u;
            goto label_2ae180;
        }
    }
    ctx->pc = 0x2AE180u;
label_2ae180:
    // 0x2ae180: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2ae180u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ae184: 0x1812  mflo        $v1
    ctx->pc = 0x2ae184u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2ae188: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE188u;
    {
        const bool branch_taken_0x2ae188 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE188u;
        // 0x2ae18c: 0x629818  mult        $s3, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae188) {
            ctx->pc = 0x2AE1A0u;
            goto label_2ae1a0;
        }
    }
    ctx->pc = 0x2AE190u;
    // 0x2ae190: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae194: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ae194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae198: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE198u;
    SET_GPR_U32(ctx, 31, 0x2AE1A0u);
    ctx->pc = 0x2AE19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE198u;
    // 0x2ae19c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE198u, 0x2AE1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE1A0u;
label_2ae1a0:
    // 0x2ae1a0: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x2ae1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2ae1a4: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae1a8: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x2ae1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2ae1ac: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE1ACu;
    SET_GPR_U32(ctx, 31, 0x2AE1B4u);
    ctx->pc = 0x2AE1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE1ACu;
    // 0x2ae1b0: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE1ACu, 0x2AE1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE1B4u;
label_2ae1b4:
    // 0x2ae1b4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2ae1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2ae1b8: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae1bc: 0x24a56f48  addiu       $a1, $a1, 0x6F48
    ctx->pc = 0x2ae1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28488));
    // 0x2ae1c0: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE1C0u;
    SET_GPR_U32(ctx, 31, 0x2AE1C8u);
    ctx->pc = 0x2AE1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE1C0u;
    // 0x2ae1c4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE1C0u, 0x2AE1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE1C8u;
label_2ae1c8:
    // 0x2ae1c8: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae1cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ae1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae1d0: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2AE1D0u;
    SET_GPR_U32(ctx, 31, 0x2AE1D8u);
    ctx->pc = 0x2AE1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE1D0u;
    // 0x2ae1d4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2AE1D0u, 0x2AE1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE1D8u;
label_2ae1d8:
    // 0x2ae1d8: 0xc0a5afe  jal         func_296BF8
    ctx->pc = 0x2AE1D8u;
    SET_GPR_U32(ctx, 31, 0x2AE1E0u);
    ctx->pc = 0x2AE1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE1D8u;
    // 0x2ae1dc: 0x8e040128  lw          $a0, 0x128($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296BF8u, 0x2AE1D8u, 0x2AE1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE1E0u;
label_2ae1e0:
    // 0x2ae1e0: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae1e4: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2AE1E4u;
    SET_GPR_U32(ctx, 31, 0x2AE1ECu);
    ctx->pc = 0x2AE1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE1E4u;
    // 0x2ae1e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2AE1E4u, 0x2AE1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE1ECu;
label_2ae1ec:
    // 0x2ae1ec: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x2ae1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2ae1f0: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae1f4: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x2ae1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2ae1f8: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE1F8u;
    SET_GPR_U32(ctx, 31, 0x2AE200u);
    ctx->pc = 0x2AE1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE1F8u;
    // 0x2ae1fc: 0x24a50014  addiu       $a1, $a1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE1F8u, 0x2AE200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE200u;
label_2ae200:
    // 0x2ae200: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2ae200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2ae204: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae208: 0x24a56f78  addiu       $a1, $a1, 0x6F78
    ctx->pc = 0x2ae208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28536));
    // 0x2ae20c: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE20Cu;
    SET_GPR_U32(ctx, 31, 0x2AE214u);
    ctx->pc = 0x2AE210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE20Cu;
    // 0x2ae210: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE20Cu, 0x2AE214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE214u;
label_2ae214:
    // 0x2ae214: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae218: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ae218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae21c: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE21Cu;
    SET_GPR_U32(ctx, 31, 0x2AE224u);
    ctx->pc = 0x2AE220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE21Cu;
    // 0x2ae220: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE21Cu, 0x2AE224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE224u;
label_2ae224:
    // 0x2ae224: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae228: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ae228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae22c: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2AE22Cu;
    SET_GPR_U32(ctx, 31, 0x2AE234u);
    ctx->pc = 0x2AE230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE22Cu;
    // 0x2ae230: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2AE22Cu, 0x2AE234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE234u;
label_2ae234:
    // 0x2ae234: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2ae234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2ae238:
    // 0x2ae238: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ae238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ae23c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2ae23cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ae240: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2ae240u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ae244: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2ae244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ae248: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2ae248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae24c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2ae24cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae250: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE250u;
        // 0x2ae254: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE258u;
    // 0x2ae258: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ae258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ae25c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2ae25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2ae260: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ae260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ae264: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ae264u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae268: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2ae268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2ae26c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2ae26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2ae270: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ae270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ae274: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2ae274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2ae278: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AE278u;
    {
        const bool branch_taken_0x2ae278 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE278u;
        // 0x2ae27c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae278) {
            ctx->pc = 0x2AE2A0u;
            goto label_2ae2a0;
        }
    }
    ctx->pc = 0x2AE280u;
    // 0x2ae280: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x2ae280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2ae284: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2ae284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2ae288: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2ae288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2ae28c: 0x24540028  addiu       $s4, $v0, 0x28
    ctx->pc = 0x2ae28cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2ae290: 0x245200cc  addiu       $s2, $v0, 0xCC
    ctx->pc = 0x2ae290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x2ae294: 0x24550030  addiu       $s5, $v0, 0x30
    ctx->pc = 0x2ae294u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2ae298: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE298u;
    {
        const bool branch_taken_0x2ae298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE298u;
        // 0x2ae29c: 0x8c910078  lw          $s1, 0x78($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae298) {
            ctx->pc = 0x2AE2BCu;
            goto label_2ae2bc;
        }
    }
    ctx->pc = 0x2AE2A0u;
label_2ae2a0:
    // 0x2ae2a0: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x2ae2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2ae2a4: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2ae2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2ae2a8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2ae2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2ae2ac: 0x2454000c  addiu       $s4, $v0, 0xC
    ctx->pc = 0x2ae2acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2ae2b0: 0x245200b4  addiu       $s2, $v0, 0xB4
    ctx->pc = 0x2ae2b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x2ae2b4: 0x8c91006c  lw          $s1, 0x6C($a0)
    ctx->pc = 0x2ae2b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2ae2b8: 0x24550014  addiu       $s5, $v0, 0x14
    ctx->pc = 0x2ae2b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_2ae2bc:
    // 0x2ae2bc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2ae2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ae2c0: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x2ae2c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ae2c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae2c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ae2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae2cc: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x2ae2ccu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x2ae2d0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AE2D0u;
    {
        const bool branch_taken_0x2ae2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ae2d0) {
            ctx->pc = 0x2AE2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE2D0u;
            // 0x2ae2d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE2D8u;
            goto label_2ae2d8;
        }
    }
    ctx->pc = 0x2AE2D8u;
label_2ae2d8:
    // 0x2ae2d8: 0x8012  mflo        $s0
    ctx->pc = 0x2ae2d8u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2ae2dc: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2AE2DCu;
    SET_GPR_U32(ctx, 31, 0x2AE2E4u);
    ctx->pc = 0x2AE2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE2DCu;
    // 0x2ae2e0: 0x2028018  mult        $s0, $s0, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2AE2DCu, 0x2AE2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE2E4u;
label_2ae2e4:
    // 0x2ae2e4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2ae2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ae2e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae2ec: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE2ECu;
    SET_GPR_U32(ctx, 31, 0x2AE2F4u);
    ctx->pc = 0x2AE2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE2ECu;
    // 0x2ae2f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE2ECu, 0x2AE2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE2F4u;
label_2ae2f4:
    // 0x2ae2f4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2ae2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2ae2f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae2fc: 0x24a56f48  addiu       $a1, $a1, 0x6F48
    ctx->pc = 0x2ae2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28488));
    // 0x2ae300: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE300u;
    SET_GPR_U32(ctx, 31, 0x2AE308u);
    ctx->pc = 0x2AE304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE300u;
    // 0x2ae304: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE300u, 0x2AE308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE308u;
label_2ae308:
    // 0x2ae308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae30c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ae30cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae310: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE310u;
    SET_GPR_U32(ctx, 31, 0x2AE318u);
    ctx->pc = 0x2AE314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE310u;
    // 0x2ae314: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE310u, 0x2AE318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE318u;
label_2ae318:
    // 0x2ae318: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x2ae318u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ae31c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae320: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ae320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae324: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ae324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae328: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE328u;
    SET_GPR_U32(ctx, 31, 0x2AE330u);
    ctx->pc = 0x2AE32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE328u;
    // 0x2ae32c: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE328u, 0x2AE330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE330u;
label_2ae330:
    // 0x2ae330: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2ae330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ae334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae338: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ae338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae33c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ae33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae340: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ae340u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ae344: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x2ae344u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ae348: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x2ae348u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ae34c: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE34Cu;
    SET_GPR_U32(ctx, 31, 0x2AE354u);
    ctx->pc = 0x2AE350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE34Cu;
    // 0x2ae350: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE34Cu, 0x2AE354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE354u;
label_2ae354:
    // 0x2ae354: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x2ae354u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ae358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae35c: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE35Cu;
    SET_GPR_U32(ctx, 31, 0x2AE364u);
    ctx->pc = 0x2AE360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE35Cu;
    // 0x2ae360: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE35Cu, 0x2AE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE364u;
label_2ae364:
    // 0x2ae364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae368: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ae368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae36c: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2AE36Cu;
    SET_GPR_U32(ctx, 31, 0x2AE374u);
    ctx->pc = 0x2AE370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE36Cu;
    // 0x2ae370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2AE36Cu, 0x2AE374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE374u;
label_2ae374:
    // 0x2ae374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae378: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2AE378u;
    SET_GPR_U32(ctx, 31, 0x2AE380u);
    ctx->pc = 0x2AE37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE378u;
    // 0x2ae37c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2AE378u, 0x2AE380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE380u;
label_2ae380:
    // 0x2ae380: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2ae380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ae384: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ae384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae388: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE388u;
    SET_GPR_U32(ctx, 31, 0x2AE390u);
    ctx->pc = 0x2AE38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE388u;
    // 0x2ae38c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE388u, 0x2AE390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE390u;
label_2ae390:
    // 0x2ae390: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2ae390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2ae394: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ae394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae398: 0x24a56f78  addiu       $a1, $a1, 0x6F78
    ctx->pc = 0x2ae398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28536));
    // 0x2ae39c: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE39Cu;
    SET_GPR_U32(ctx, 31, 0x2AE3A4u);
    ctx->pc = 0x2AE3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE39Cu;
    // 0x2ae3a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE39Cu, 0x2AE3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE3A4u;
label_2ae3a4:
    // 0x2ae3a4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2ae3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ae3a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae3ac: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE3ACu;
    SET_GPR_U32(ctx, 31, 0x2AE3B4u);
    ctx->pc = 0x2AE3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE3ACu;
    // 0x2ae3b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE3ACu, 0x2AE3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE3B4u;
label_2ae3b4:
    // 0x2ae3b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ae3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae3b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ae3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae3bc: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2AE3BCu;
    SET_GPR_U32(ctx, 31, 0x2AE3C4u);
    ctx->pc = 0x2AE3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE3BCu;
    // 0x2ae3c0: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2AE3BCu, 0x2AE3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE3C4u;
label_2ae3c4:
    // 0x2ae3c4: 0x92820007  lbu         $v0, 0x7($s4)
    ctx->pc = 0x2ae3c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 7)));
    // 0x2ae3c8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ae3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ae3cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ae3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ae3d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ae3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ae3d4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2AE3D4u;
    {
        const bool branch_taken_0x2ae3d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3D4u;
        // 0x2ae3d8: 0xa2820007  sb          $v0, 0x7($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3d4) {
            ctx->pc = 0x2AE400u;
            goto label_2ae400;
        }
    }
    ctx->pc = 0x2AE3DCu;
    // 0x2ae3dc: 0x26850007  addiu       $a1, $s4, 0x7
    ctx->pc = 0x2ae3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 7));
label_2ae3e0:
    // 0x2ae3e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2ae3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2ae3e4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE3E4u;
    {
        const bool branch_taken_0x2ae3e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2AE3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3E4u;
        // 0x2ae3e8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3e4) {
            ctx->pc = 0x2AE400u;
            goto label_2ae400;
        }
    }
    ctx->pc = 0x2AE3ECu;
    // 0x2ae3ec: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2ae3ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ae3f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ae3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ae3f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2ae3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ae3f8: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2AE3F8u;
    {
        const bool branch_taken_0x2ae3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE3F8u;
        // 0x2ae3fc: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae3f8) {
            ctx->pc = 0x2AE3E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ae3e0;
        }
    }
    ctx->pc = 0x2AE400u;
label_2ae400:
    // 0x2ae400: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2ae400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ae404: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ae404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ae408: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2ae408u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ae40c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2ae40cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ae410: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2ae410u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae414: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ae414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae418: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2ae418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae41c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ae41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae420: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE420u;
        // 0x2ae424: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE428u;
    // 0x2ae428: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2ae428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2ae42c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2ae42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2ae430: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x2ae430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x2ae434: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2ae434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2ae438: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2ae438u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae43c: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2ae43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x2ae440: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2ae440u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae444: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2ae444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2ae448: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2ae448u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae44c: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2ae44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2ae450: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2ae450u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae454: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2ae454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2ae458: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ae458u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae45c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2ae45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2ae460: 0x24526fa8  addiu       $s2, $v0, 0x6FA8
    ctx->pc = 0x2ae460u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 28584));
    // 0x2ae464: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2ae464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2ae468: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ae468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae46c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2ae46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_2ae470:
    // 0x2ae470: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x2ae470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x2ae474: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae478: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2AE478u;
    SET_GPR_U32(ctx, 31, 0x2AE480u);
    ctx->pc = 0x2AE47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE478u;
    // 0x2ae47c: 0x8c450108  lw          $a1, 0x108($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2AE478u, 0x2AE480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE480u;
label_2ae480:
    // 0x2ae480: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2AE480u;
    {
        const bool branch_taken_0x2ae480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE480u;
        // 0x2ae484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae480) {
            ctx->pc = 0x2AE558u;
            goto label_2ae558;
        }
    }
    ctx->pc = 0x2AE488u;
    // 0x2ae488: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2AE488u;
    SET_GPR_U32(ctx, 31, 0x2AE490u);
    ctx->pc = 0x2AE48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE488u;
    // 0x2ae48c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2AE488u, 0x2AE490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE490u;
label_2ae490:
    // 0x2ae490: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae494: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ae494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae498: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE498u;
    SET_GPR_U32(ctx, 31, 0x2AE4A0u);
    ctx->pc = 0x2AE49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE498u;
    // 0x2ae49c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE498u, 0x2AE4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE4A0u;
label_2ae4a0:
    // 0x2ae4a0: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae4a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ae4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae4a8: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE4A8u;
    SET_GPR_U32(ctx, 31, 0x2AE4B0u);
    ctx->pc = 0x2AE4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE4A8u;
    // 0x2ae4ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE4A8u, 0x2AE4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE4B0u;
label_2ae4b0:
    // 0x2ae4b0: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x2ae4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae4b4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2ae4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ae4b8: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae4bc: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE4BCu;
    SET_GPR_U32(ctx, 31, 0x2AE4C4u);
    ctx->pc = 0x2AE4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE4BCu;
    // 0x2ae4c0: 0x24a50064  addiu       $a1, $a1, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE4BCu, 0x2AE4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE4C4u;
label_2ae4c4:
    // 0x2ae4c4: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x2ae4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ae4c8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2ae4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ae4cc: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae4d0: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE4D0u;
    SET_GPR_U32(ctx, 31, 0x2AE4D8u);
    ctx->pc = 0x2AE4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE4D0u;
    // 0x2ae4d4: 0x24a50044  addiu       $a1, $a1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE4D0u, 0x2AE4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE4D8u;
label_2ae4d8:
    // 0x2ae4d8: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2ae4d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ae4dc: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae4e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ae4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae4e4: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2AE4E4u;
    SET_GPR_U32(ctx, 31, 0x2AE4ECu);
    ctx->pc = 0x2AE4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE4E4u;
    // 0x2ae4e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2AE4E4u, 0x2AE4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE4ECu;
label_2ae4ec:
    // 0x2ae4ec: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x2ae4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x2ae4f0: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae4f4: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2AE4F4u;
    SET_GPR_U32(ctx, 31, 0x2AE4FCu);
    ctx->pc = 0x2AE4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE4F4u;
    // 0x2ae4f8: 0x8c450104  lw          $a1, 0x104($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294408u, 0x2AE4F4u, 0x2AE4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE4FCu;
label_2ae4fc:
    // 0x2ae4fc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AE4FCu;
    {
        const bool branch_taken_0x2ae4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae4fc) {
            ctx->pc = 0x2AE500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE4FCu;
            // 0x2ae500: 0x8e040128  lw          $a0, 0x128($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE50Cu;
            goto label_2ae50c;
        }
    }
    ctx->pc = 0x2AE504u;
    // 0x2ae504: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2AE504u;
    {
        const bool branch_taken_0x2ae504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE504u;
        // 0x2ae508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae504) {
            ctx->pc = 0x2AE558u;
            goto label_2ae558;
        }
    }
    ctx->pc = 0x2AE50Cu;
label_2ae50c:
    // 0x2ae50c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ae50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae510: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ae510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae514: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE514u;
    SET_GPR_U32(ctx, 31, 0x2AE51Cu);
    ctx->pc = 0x2AE518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE514u;
    // 0x2ae518: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE514u, 0x2AE51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE51Cu;
label_2ae51c:
    // 0x2ae51c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2ae51cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2ae520: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae524: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ae524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae528: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2AE528u;
    SET_GPR_U32(ctx, 31, 0x2AE530u);
    ctx->pc = 0x2AE52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE528u;
    // 0x2ae52c: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2944F0u, 0x2AE528u, 0x2AE530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE530u;
label_2ae530:
    // 0x2ae530: 0x8e040128  lw          $a0, 0x128($s0)
    ctx->pc = 0x2ae530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2ae534: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ae534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae538: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2AE538u;
    SET_GPR_U32(ctx, 31, 0x2AE540u);
    ctx->pc = 0x2AE53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE538u;
    // 0x2ae53c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294520u, 0x2AE538u, 0x2AE540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE540u;
label_2ae540:
    // 0x2ae540: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2ae540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae544: 0x2ac30003  slti        $v1, $s6, 0x3
    ctx->pc = 0x2ae544u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ae548: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x2ae548u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2ae54c: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2AE54Cu;
    {
        const bool branch_taken_0x2ae54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE54Cu;
        // 0x2ae550: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae54c) {
            ctx->pc = 0x2AE470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ae470;
        }
    }
    ctx->pc = 0x2AE554u;
    // 0x2ae554: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2ae554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ae558:
    // 0x2ae558: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2ae558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ae55c: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x2ae55cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ae560: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2ae560u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ae564: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2ae564u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ae568: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2ae568u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ae56c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2ae56cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ae570: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2ae570u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ae574: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2ae574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae578: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2ae578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae57c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE57Cu;
        // 0x2ae580: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE584u;
    // 0x2ae584: 0x0  nop
    ctx->pc = 0x2ae584u;
    // NOP
    // 0x2ae588: 0x2c820065  sltiu       $v0, $a0, 0x65
    ctx->pc = 0x2ae588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x2ae58c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2AE58Cu;
    {
        const bool branch_taken_0x2ae58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE58Cu;
        // 0x2ae590: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae58c) {
            ctx->pc = 0x2AE614u;
            goto label_2ae614;
        }
    }
    ctx->pc = 0x2AE594u;
    // 0x2ae594: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2ae594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ae598: 0x2442ccf0  addiu       $v0, $v0, -0x3310
    ctx->pc = 0x2ae598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954224));
    // 0x2ae59c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ae59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ae5a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ae5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ae5a4: 0x800008  jr          $a0
    ctx->pc = 0x2AE5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AE5ACu: goto label_2ae5ac;
            case 0x2AE5B4u: goto label_2ae5b4;
            case 0x2AE5BCu: goto label_2ae5bc;
            case 0x2AE5C4u: goto label_2ae5c4;
            case 0x2AE5CCu: goto label_2ae5cc;
            case 0x2AE5D4u: goto label_2ae5d4;
            case 0x2AE5DCu: goto label_2ae5dc;
            case 0x2AE5E4u: goto label_2ae5e4;
            case 0x2AE5ECu: goto label_2ae5ec;
            case 0x2AE5F4u: goto label_2ae5f4;
            case 0x2AE5FCu: goto label_2ae5fc;
            case 0x2AE604u: goto label_2ae604;
            case 0x2AE60Cu: goto label_2ae60c;
            case 0x2AE614u: goto label_2ae614;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE5A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2AE5ACu;
label_2ae5ac:
    // 0x2ae5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5ACu;
        // 0x2ae5b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE5B4u;
label_2ae5b4:
    // 0x2ae5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5B4u;
        // 0x2ae5b8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE5BCu;
label_2ae5bc:
    // 0x2ae5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5BCu;
        // 0x2ae5c0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE5C4u;
label_2ae5c4:
    // 0x2ae5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5C4u;
        // 0x2ae5c8: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE5CCu;
label_2ae5cc:
    // 0x2ae5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5CCu;
        // 0x2ae5d0: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE5D4u;
label_2ae5d4:
    // 0x2ae5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5D4u;
        // 0x2ae5d8: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE5DCu;
label_2ae5dc:
    // 0x2ae5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5DCu;
        // 0x2ae5e0: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE5E4u;
label_2ae5e4:
    // 0x2ae5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5E4u;
        // 0x2ae5e8: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE5ECu;
label_2ae5ec:
    // 0x2ae5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5ECu;
        // 0x2ae5f0: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE5F4u;
label_2ae5f4:
    // 0x2ae5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5F4u;
        // 0x2ae5f8: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE5FCu;
label_2ae5fc:
    // 0x2ae5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5FCu;
        // 0x2ae600: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE604u;
label_2ae604:
    // 0x2ae604: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE604u;
        // 0x2ae608: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE60Cu;
label_2ae60c:
    // 0x2ae60c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE60Cu;
        // 0x2ae610: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE614u;
label_2ae614:
    // 0x2ae614: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE614u;
        // 0x2ae618: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE61Cu;
    // 0x2ae61c: 0x0  nop
    ctx->pc = 0x2ae61cu;
    // NOP
}
