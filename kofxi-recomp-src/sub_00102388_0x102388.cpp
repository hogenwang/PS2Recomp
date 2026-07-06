#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102388
// Address: 0x102388 - 0x1023f8
void sub_00102388_0x102388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102388_0x102388");
#endif

    switch (ctx->pc) {
        case 0x1023b8u: goto label_1023b8;
        case 0x1023c8u: goto label_1023c8;
        case 0x1023d0u: goto label_1023d0;
        default: break;
    }

    ctx->pc = 0x102388u;

    // 0x102388: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x102388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10238c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10238cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x102390: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102394: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x102394u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
    // 0x102398: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x102398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10239c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10239cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1023a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1023a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1023a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1023a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1023a8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1023a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1023ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1023ACu;
    {
        const bool branch_taken_0x1023ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1023B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1023ACu;
            // 0x1023b0: 0x3c12003e  lui         $s2, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023ac) {
            ctx->pc = 0x1023E0u;
            goto label_1023e0;
        }
    }
    ctx->pc = 0x1023B4u;
    // 0x1023b4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1023b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1023b8:
    // 0x1023b8: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1023B8u;
    {
        const bool branch_taken_0x1023b8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1023b8) {
            ctx->pc = 0x1023D0u;
            goto label_1023d0;
        }
    }
    ctx->pc = 0x1023C0u;
    // 0x1023c0: 0xc043e52  jal         func_10F948
    ctx->pc = 0x1023C0u;
    SET_GPR_U32(ctx, 31, 0x1023C8u);
    ctx->pc = 0x1023C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1023C0u;
            // 0x1023c4: 0x26449ec0  addiu       $a0, $s2, -0x6140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1023C8u; }
        if (ctx->pc != 0x1023C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1023C8u; }
        if (ctx->pc != 0x1023C8u) { return; }
    }
    ctx->pc = 0x1023C8u;
label_1023c8:
    // 0x1023c8: 0xc040ac8  jal         func_102B20
    ctx->pc = 0x1023C8u;
    SET_GPR_U32(ctx, 31, 0x1023D0u);
    ctx->pc = 0x1023CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1023C8u;
            // 0x1023cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102B20u;
    if (runtime->hasFunction(0x102B20u)) {
        auto targetFn = runtime->lookupFunction(0x102B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1023D0u; }
        if (ctx->pc != 0x1023D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102B20_0x102b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1023D0u; }
        if (ctx->pc != 0x1023D0u) { return; }
    }
    ctx->pc = 0x1023D0u;
label_1023d0:
    // 0x1023d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1023d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1023d4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1023d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1023d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1023D8u;
    {
        const bool branch_taken_0x1023d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1023DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1023D8u;
            // 0x1023dc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023d8) {
            ctx->pc = 0x1023B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1023b8;
        }
    }
    ctx->pc = 0x1023E0u;
label_1023e0:
    // 0x1023e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1023e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1023e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1023e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1023e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1023e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1023ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1023ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1023f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1023F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1023F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1023F0u;
            // 0x1023f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1023F8u;
    ctx->pc = 0x1023f8u;
}
