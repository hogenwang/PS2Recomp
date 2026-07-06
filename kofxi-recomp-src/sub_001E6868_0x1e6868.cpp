#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6868
// Address: 0x1e6868 - 0x1e6950
void sub_001E6868_0x1e6868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6868_0x1e6868");
#endif

    switch (ctx->pc) {
        case 0x1e6878u: goto label_1e6878;
        case 0x1e68a8u: goto label_1e68a8;
        case 0x1e68c0u: goto label_1e68c0;
        case 0x1e68e4u: goto label_1e68e4;
        case 0x1e68f8u: goto label_1e68f8;
        case 0x1e6918u: goto label_1e6918;
        case 0x1e693cu: goto label_1e693c;
        default: break;
    }

    ctx->pc = 0x1e6868u;

    // 0x1e6868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e686c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e686cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6870: 0xc0739d2  jal         func_1CE748
    ctx->pc = 0x1E6870u;
    SET_GPR_U32(ctx, 31, 0x1E6878u);
    ctx->pc = 0x1CE748u;
    if (runtime->hasFunction(0x1CE748u)) {
        auto targetFn = runtime->lookupFunction(0x1CE748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6878u; }
        if (ctx->pc != 0x1E6878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE748_0x1ce748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6878u; }
        if (ctx->pc != 0x1E6878u) { return; }
    }
    ctx->pc = 0x1E6878u;
label_1e6878:
    // 0x1e6878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e687c: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1e687cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1e6880: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1e6880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
    // 0x1e6884: 0x3c0401c0  lui         $a0, 0x1C0
    ctx->pc = 0x1e6884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)448 << 16));
    // 0x1e6888: 0x3c0501c0  lui         $a1, 0x1C0
    ctx->pc = 0x1e6888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)448 << 16));
    // 0x1e688c: 0xac403c80  sw          $zero, 0x3C80($v0)
    ctx->pc = 0x1e688cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15488), GPR_U32(ctx, 0));
    // 0x1e6890: 0xac603c84  sw          $zero, 0x3C84($v1)
    ctx->pc = 0x1e6890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15492), GPR_U32(ctx, 0));
    // 0x1e6894: 0xac803c88  sw          $zero, 0x3C88($a0)
    ctx->pc = 0x1e6894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 15496), GPR_U32(ctx, 0));
    // 0x1e6898: 0xaca03c8c  sw          $zero, 0x3C8C($a1)
    ctx->pc = 0x1e6898u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 15500), GPR_U32(ctx, 0));
    // 0x1e689c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E689Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E68A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E689Cu;
            // 0x1e68a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E68A4u;
    // 0x1e68a4: 0x0  nop
    ctx->pc = 0x1e68a4u;
    // NOP
label_1e68a8:
    // 0x1e68a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e68a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e68ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e68acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e68b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e68b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e68b4: 0x80739e2  j           func_1CE788
    ctx->pc = 0x1E68B4u;
    ctx->pc = 0x1E68B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68B4u;
            // 0x1e68b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE788u;
    if (runtime->hasFunction(0x1CE788u)) {
        auto targetFn = runtime->lookupFunction(0x1CE788u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CE788_0x1ce788(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E68BCu;
    // 0x1e68bc: 0x0  nop
    ctx->pc = 0x1e68bcu;
    // NOP
label_1e68c0:
    // 0x1e68c0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1e68c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e68c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e68c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e68c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e68c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e68cc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1e68ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e68d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e68d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e68d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e68d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e68d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e68d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e68dc: 0xc0737f2  jal         func_1CDFC8
    ctx->pc = 0x1E68DCu;
    SET_GPR_U32(ctx, 31, 0x1E68E4u);
    ctx->pc = 0x1E68E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68DCu;
            // 0x1e68e0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDFC8u;
    if (runtime->hasFunction(0x1CDFC8u)) {
        auto targetFn = runtime->lookupFunction(0x1CDFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68E4u; }
        if (ctx->pc != 0x1E68E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDFC8_0x1cdfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68E4u; }
        if (ctx->pc != 0x1E68E4u) { return; }
    }
    ctx->pc = 0x1E68E4u;
label_1e68e4:
    // 0x1e68e4: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1e68e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
    // 0x1e68e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e68e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e68ec: 0xac623c80  sw          $v0, 0x3C80($v1)
    ctx->pc = 0x1e68ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15488), GPR_U32(ctx, 2));
    // 0x1e68f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E68F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E68F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68F0u;
            // 0x1e68f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E68F8u;
label_1e68f8:
    // 0x1e68f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e68f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e68fc: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1e68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1e6900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6904: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e6904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6908: 0x8c453c80  lw          $a1, 0x3C80($v0)
    ctx->pc = 0x1e6908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15488)));
    // 0x1e690c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e690cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6910: 0x807383c  j           func_1CE0F0
    ctx->pc = 0x1E6910u;
    ctx->pc = 0x1E6914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6910u;
            // 0x1e6914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE0F0u;
    if (runtime->hasFunction(0x1CE0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE0F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CE0F0_0x1ce0f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1E6918u;
label_1e6918:
    // 0x1e6918: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1e6918u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e691c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e691cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6924: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1e6924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6928: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e6928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e692c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e692cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e6930: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6934: 0xc0737f2  jal         func_1CDFC8
    ctx->pc = 0x1E6934u;
    SET_GPR_U32(ctx, 31, 0x1E693Cu);
    ctx->pc = 0x1E6938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6934u;
            // 0x1e6938: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDFC8u;
    if (runtime->hasFunction(0x1CDFC8u)) {
        auto targetFn = runtime->lookupFunction(0x1CDFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E693Cu; }
        if (ctx->pc != 0x1E693Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDFC8_0x1cdfc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E693Cu; }
        if (ctx->pc != 0x1E693Cu) { return; }
    }
    ctx->pc = 0x1E693Cu;
label_1e693c:
    // 0x1e693c: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1e693cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
    // 0x1e6940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6944: 0xac623c84  sw          $v0, 0x3C84($v1)
    ctx->pc = 0x1e6944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15492), GPR_U32(ctx, 2));
    // 0x1e6948: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E694Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6948u;
            // 0x1e694c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6950u;
    ctx->pc = 0x1e6950u;
}
