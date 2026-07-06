#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001010B8
// Address: 0x1010b8 - 0x101150
void sub_001010B8_0x1010b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001010B8_0x1010b8");
#endif

    switch (ctx->pc) {
        case 0x1010ccu: goto label_1010cc;
        case 0x1010e4u: goto label_1010e4;
        case 0x101120u: goto label_101120;
        default: break;
    }

    ctx->pc = 0x1010b8u;

    // 0x1010b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1010b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1010bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1010bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1010c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1010c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1010c4: 0xc0400f0  jal         func_1003C0
    ctx->pc = 0x1010C4u;
    SET_GPR_U32(ctx, 31, 0x1010CCu);
    ctx->pc = 0x1003C0u;
    if (runtime->hasFunction(0x1003C0u)) {
        auto targetFn = runtime->lookupFunction(0x1003C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010CCu; }
        if (ctx->pc != 0x1010CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001003C0_0x1003c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010CCu; }
        if (ctx->pc != 0x1010CCu) { return; }
    }
    ctx->pc = 0x1010CCu;
label_1010cc:
    // 0x1010cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1010ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1010d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1010d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1010d4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1010D4u;
    {
        const bool branch_taken_0x1010d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1010d4) {
            ctx->pc = 0x101118u;
            goto label_101118;
        }
    }
    ctx->pc = 0x1010DCu;
    // 0x1010dc: 0xc04343c  jal         func_10D0F0
    ctx->pc = 0x1010DCu;
    SET_GPR_U32(ctx, 31, 0x1010E4u);
    ctx->pc = 0x10D0F0u;
    if (runtime->hasFunction(0x10D0F0u)) {
        auto targetFn = runtime->lookupFunction(0x10D0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010E4u; }
        if (ctx->pc != 0x1010E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D0F0_0x10d0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010E4u; }
        if (ctx->pc != 0x1010E4u) { return; }
    }
    ctx->pc = 0x1010E4u;
label_1010e4:
    // 0x1010e4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1010e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1010e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1010e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1010ec: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1010ECu;
    {
        const bool branch_taken_0x1010ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1010F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1010ECu;
            // 0x1010f0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1010ec) {
            ctx->pc = 0x101140u;
            goto label_101140;
        }
    }
    ctx->pc = 0x1010F4u;
    // 0x1010f4: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1010f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1010f8: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1010f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1010fc: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1010fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101100: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x101100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x101104: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x101104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x101108: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x101108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10110c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10110cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x101110: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x101110u;
    {
        const bool branch_taken_0x101110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101110u;
            // 0x101114: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101110) {
            ctx->pc = 0x101144u;
            goto label_101144;
        }
    }
    ctx->pc = 0x101118u;
label_101118:
    // 0x101118: 0xc043460  jal         func_10D180
    ctx->pc = 0x101118u;
    SET_GPR_U32(ctx, 31, 0x101120u);
    ctx->pc = 0x10D180u;
    if (runtime->hasFunction(0x10D180u)) {
        auto targetFn = runtime->lookupFunction(0x10D180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101120u; }
        if (ctx->pc != 0x101120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D180_0x10d180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101120u; }
        if (ctx->pc != 0x101120u) { return; }
    }
    ctx->pc = 0x101120u;
label_101120:
    // 0x101120: 0x2137b  dsra        $v0, $v0, 13
    ctx->pc = 0x101120u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 13);
    // 0x101124: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x101124u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x101128: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x101128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10112c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101130: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x101130u;
    {
        const bool branch_taken_0x101130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x101134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101130u;
            // 0x101134: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101130) {
            ctx->pc = 0x101140u;
            goto label_101140;
        }
    }
    ctx->pc = 0x101138u;
    // 0x101138: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x101138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x10113c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10113cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_101140:
    // 0x101140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_101144:
    // 0x101144: 0x3e00008  jr          $ra
    ctx->pc = 0x101144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101144u;
            // 0x101148: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10114Cu;
    // 0x10114c: 0x0  nop
    ctx->pc = 0x10114cu;
    // NOP
    ctx->pc = 0x101150u;
}
