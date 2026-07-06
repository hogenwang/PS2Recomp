#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1890
// Address: 0x2f1890 - 0x2f18e8
void sub_002F1890_0x2f1890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1890_0x2f1890");
#endif

    switch (ctx->pc) {
        case 0x2f18bcu: goto label_2f18bc;
        default: break;
    }

    ctx->pc = 0x2f1890u;

    // 0x2f1890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1894: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2f1894u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2f1898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f1898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f189c: 0x24c6f052  addiu       $a2, $a2, -0xFAE
    ctx->pc = 0x2f189cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963282));
    // 0x2f18a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f18a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f18a4: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x2f18a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f18a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f18a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f18ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f18acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18b0: 0x2485000c  addiu       $a1, $a0, 0xC
    ctx->pc = 0x2f18b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2f18b4: 0xc0bc590  jal         func_2F1640
    ctx->pc = 0x2F18B4u;
    SET_GPR_U32(ctx, 31, 0x2F18BCu);
    ctx->pc = 0x2F18B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F18B4u;
            // 0x2f18b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1640u;
    if (runtime->hasFunction(0x2F1640u)) {
        auto targetFn = runtime->lookupFunction(0x2F1640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F18BCu; }
        if (ctx->pc != 0x2F18BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1640_0x2f1640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F18BCu; }
        if (ctx->pc != 0x2F18BCu) { return; }
    }
    ctx->pc = 0x2F18BCu;
label_2f18bc:
    // 0x2f18bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f18bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f18c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f18c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f18c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f18c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f18cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f18ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f18d0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f18d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f18d4: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x2f18d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2f18d8: 0x24061031  addiu       $a2, $zero, 0x1031
    ctx->pc = 0x2f18d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4145));
    // 0x2f18dc: 0x80bc5f0  j           func_2F17C0
    ctx->pc = 0x2F18DCu;
    ctx->pc = 0x2F18E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F18DCu;
            // 0x2f18e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F17C0u;
    {
        auto targetFn = runtime->lookupFunction(0x2F17C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2F18E4u;
    // 0x2f18e4: 0x0  nop
    ctx->pc = 0x2f18e4u;
    // NOP
    ctx->pc = 0x2f18e8u;
}
