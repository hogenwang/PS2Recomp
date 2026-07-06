#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002495D8
// Address: 0x2495d8 - 0x249640
void sub_002495D8_0x2495d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002495D8_0x2495d8");
#endif

    switch (ctx->pc) {
        case 0x2495f4u: goto label_2495f4;
        case 0x24962cu: goto label_24962c;
        default: break;
    }

    ctx->pc = 0x2495d8u;

    // 0x2495d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2495d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2495dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2495dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2495e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2495e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2495e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2495e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2495e8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2495e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2495ec: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x2495ECu;
    SET_GPR_U32(ctx, 31, 0x2495F4u);
    ctx->pc = 0x2495F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2495ECu;
            // 0x2495f0: 0x3c1001c1  lui         $s0, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (runtime->hasFunction(0x22D7F8u)) {
        auto targetFn = runtime->lookupFunction(0x22D7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2495F4u; }
        if (ctx->pc != 0x2495F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D7F8_0x22d7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2495F4u; }
        if (ctx->pc != 0x2495F4u) { return; }
    }
    ctx->pc = 0x2495F4u;
label_2495f4:
    // 0x2495f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2495f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2495f8: 0x2610ae50  addiu       $s0, $s0, -0x51B0
    ctx->pc = 0x2495f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946384));
    // 0x2495fc: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2495fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x249600: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x249600u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249608: 0x24c66ad8  addiu       $a2, $a2, 0x6AD8
    ctx->pc = 0x249608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27352));
    // 0x24960c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x24960cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x249610: 0x74402  srl         $t0, $a3, 16
    ctx->pc = 0x249610u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x249614: 0x74a02  srl         $t1, $a3, 8
    ctx->pc = 0x249614u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x249618: 0x30ea00ff  andi        $t2, $a3, 0xFF
    ctx->pc = 0x249618u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x24961c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x24961cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x249620: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x249620u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x249624: 0xc043e24  jal         func_10F890
    ctx->pc = 0x249624u;
    SET_GPR_U32(ctx, 31, 0x24962Cu);
    ctx->pc = 0x249628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249624u;
            // 0x249628: 0x73e02  srl         $a3, $a3, 24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (runtime->hasFunction(0x10F890u)) {
        auto targetFn = runtime->lookupFunction(0x10F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24962Cu; }
        if (ctx->pc != 0x24962Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F890_0x10f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24962Cu; }
        if (ctx->pc != 0x24962Cu) { return; }
    }
    ctx->pc = 0x24962Cu;
label_24962c:
    // 0x24962c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24962cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249630: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x249630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249634: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x249634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249638: 0x3e00008  jr          $ra
    ctx->pc = 0x249638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24963Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249638u;
            // 0x24963c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x249640u;
    ctx->pc = 0x249640u;
}
