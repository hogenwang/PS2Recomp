#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00241128
// Address: 0x241128 - 0x241180
void sub_00241128_0x241128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241128_0x241128");
#endif

    switch (ctx->pc) {
        case 0x24116cu: goto label_24116c;
        default: break;
    }

    ctx->pc = 0x241128u;

    // 0x241128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x241128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24112c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x24112cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241134: 0x74402  srl         $t0, $a3, 16
    ctx->pc = 0x241134u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x241138: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x241138u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x24113c: 0x74a02  srl         $t1, $a3, 8
    ctx->pc = 0x24113cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x241140: 0x2610adb0  addiu       $s0, $s0, -0x5250
    ctx->pc = 0x241140u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946224));
    // 0x241144: 0x30ea00ff  andi        $t2, $a3, 0xFF
    ctx->pc = 0x241144u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x241148: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x241148u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x24114c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24114cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241150: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x241150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x241154: 0x24c664b8  addiu       $a2, $a2, 0x64B8
    ctx->pc = 0x241154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25784));
    // 0x241158: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x241158u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x24115c: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x24115cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x241160: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x241160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x241164: 0xc043e24  jal         func_10F890
    ctx->pc = 0x241164u;
    SET_GPR_U32(ctx, 31, 0x24116Cu);
    ctx->pc = 0x241168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241164u;
            // 0x241168: 0x73e02  srl         $a3, $a3, 24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (runtime->hasFunction(0x10F890u)) {
        auto targetFn = runtime->lookupFunction(0x10F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24116Cu; }
        if (ctx->pc != 0x24116Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F890_0x10f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24116Cu; }
        if (ctx->pc != 0x24116Cu) { return; }
    }
    ctx->pc = 0x24116Cu;
label_24116c:
    // 0x24116c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24116cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x241170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x241170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x241174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241178: 0x3e00008  jr          $ra
    ctx->pc = 0x241178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24117Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241178u;
            // 0x24117c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241180u;
    ctx->pc = 0x241180u;
}
