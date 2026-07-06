#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C0A0
// Address: 0x10c0a0 - 0x10c168
void sub_0010C0A0_0x10c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C0A0_0x10c0a0");
#endif

    switch (ctx->pc) {
        case 0x10c0bcu: goto label_10c0bc;
        case 0x10c0d0u: goto label_10c0d0;
        case 0x10c0f4u: goto label_10c0f4;
        case 0x10c0fcu: goto label_10c0fc;
        case 0x10c14cu: goto label_10c14c;
        default: break;
    }

    ctx->pc = 0x10c0a0u;

    // 0x10c0a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10c0a4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x10c0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x10c0a8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10c0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10c0ac: 0x24a5a4b0  addiu       $a1, $a1, -0x5B50
    ctx->pc = 0x10c0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943920));
    // 0x10c0b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10c0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10c0b4: 0xc04305a  jal         func_10C168
    ctx->pc = 0x10C0B4u;
    SET_GPR_U32(ctx, 31, 0x10C0BCu);
    ctx->pc = 0x10C0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C0B4u;
            // 0x10c0b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (runtime->hasFunction(0x10C168u)) {
        auto targetFn = runtime->lookupFunction(0x10C168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C0BCu; }
        if (ctx->pc != 0x10C0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C168_0x10c168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C0BCu; }
        if (ctx->pc != 0x10C0BCu) { return; }
    }
    ctx->pc = 0x10C0BCu;
label_10c0bc:
    // 0x10c0bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c0c0: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10c0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10c0c4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10c0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10c0c8: 0xc042a04  jal         func_10A810
    ctx->pc = 0x10C0C8u;
    SET_GPR_U32(ctx, 31, 0x10C0D0u);
    ctx->pc = 0x10C0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C0C8u;
            // 0x10c0cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A810u;
    if (runtime->hasFunction(0x10A810u)) {
        auto targetFn = runtime->lookupFunction(0x10A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C0D0u; }
        if (ctx->pc != 0x10C0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A810_0x10a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C0D0u; }
        if (ctx->pc != 0x10C0D0u) { return; }
    }
    ctx->pc = 0x10C0D0u;
label_10c0d0:
    // 0x10c0d0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c0d4: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x10c0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x10c0d8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10c0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10c0dc: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x10c0e0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x10c0e0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x10c0e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10c0e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10c0ec: 0xc042a04  jal         func_10A810
    ctx->pc = 0x10C0ECu;
    SET_GPR_U32(ctx, 31, 0x10C0F4u);
    ctx->pc = 0x10C0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C0ECu;
            // 0x10c0f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A810u;
    if (runtime->hasFunction(0x10A810u)) {
        auto targetFn = runtime->lookupFunction(0x10A810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C0F4u; }
        if (ctx->pc != 0x10C0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A810_0x10a810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C0F4u; }
        if (ctx->pc != 0x10C0F4u) { return; }
    }
    ctx->pc = 0x10C0F4u;
label_10c0f4:
    // 0x10c0f4: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10C0F4u;
    SET_GPR_U32(ctx, 31, 0x10C0FCu);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C0FCu; }
        if (ctx->pc != 0x10C0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C0FCu; }
        if (ctx->pc != 0x10C0FCu) { return; }
    }
    ctx->pc = 0x10C0FCu;
label_10c0fc:
    // 0x10c0fc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10c0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10c100: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10c100u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10c104: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x10c104u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x10c108: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x10c108u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x10c10c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 0))); // MMIO: 0x10000000
    // 0x10c110: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x10c110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x10c114: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c118: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x10c118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x10c11c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10c11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10c120: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x10c120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x10c124: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10c124u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10c128: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x10c128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x10c12c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10c12cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x10c130: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10c130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10c134: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x10c134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x10c138: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x10c138u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x10c13c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C13Cu;
    {
        const bool branch_taken_0x10c13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C13Cu;
            // 0x10c140: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c13c) {
            ctx->pc = 0x10C150u;
            goto label_10c150;
        }
    }
    ctx->pc = 0x10C144u;
    // 0x10c144: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10C144u;
    SET_GPR_U32(ctx, 31, 0x10C14Cu);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C14Cu; }
        if (ctx->pc != 0x10C14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C14Cu; }
        if (ctx->pc != 0x10C14Cu) { return; }
    }
    ctx->pc = 0x10C14Cu;
label_10c14c:
    // 0x10c14c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_10c150:
    // 0x10c150: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10c150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c154: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x10c154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x10c158: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10c158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c15c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10c15cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x10c160: 0x3e00008  jr          $ra
    ctx->pc = 0x10C160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C160u;
            // 0x10c164: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C168u;
    ctx->pc = 0x10c168u;
}
