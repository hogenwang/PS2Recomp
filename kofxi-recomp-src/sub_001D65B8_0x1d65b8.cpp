#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D65B8
// Address: 0x1d65b8 - 0x1d6608
void sub_001D65B8_0x1d65b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D65B8_0x1d65b8");
#endif

    switch (ctx->pc) {
        case 0x1d65dcu: goto label_1d65dc;
        default: break;
    }

    ctx->pc = 0x1d65b8u;

    // 0x1d65b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d65b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d65bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d65bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d65c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d65c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d65c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d65c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d65c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d65c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d65cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d65ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d65d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d65d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d65d4: 0xc07623a  jal         func_1D88E8
    ctx->pc = 0x1D65D4u;
    SET_GPR_U32(ctx, 31, 0x1D65DCu);
    ctx->pc = 0x1D65D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D65D4u;
            // 0x1d65d8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D88E8u;
    if (runtime->hasFunction(0x1D88E8u)) {
        auto targetFn = runtime->lookupFunction(0x1D88E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D65DCu; }
        if (ctx->pc != 0x1D65DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D88E8_0x1d88e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D65DCu; }
        if (ctx->pc != 0x1D65DCu) { return; }
    }
    ctx->pc = 0x1D65DCu;
label_1d65dc:
    // 0x1d65dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D65DCu;
    {
        const bool branch_taken_0x1d65dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d65dc) {
            ctx->pc = 0x1D65E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D65DCu;
            // 0x1d65e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D65F0u;
            goto label_1d65f0;
        }
    }
    ctx->pc = 0x1D65E4u;
    // 0x1d65e4: 0xae1100f8  sw          $s1, 0xF8($s0)
    ctx->pc = 0x1d65e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 17));
    // 0x1d65e8: 0xae1200f4  sw          $s2, 0xF4($s0)
    ctx->pc = 0x1d65e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 18));
    // 0x1d65ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d65ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d65f0:
    // 0x1d65f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d65f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d65f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d65f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d65f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d65f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d65fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D65FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D65FCu;
            // 0x1d6600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6604u;
    // 0x1d6604: 0x0  nop
    ctx->pc = 0x1d6604u;
    // NOP
    ctx->pc = 0x1d6608u;
}
