#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00312140
// Address: 0x312140 - 0x3121b0
void sub_00312140_0x312140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312140_0x312140");
#endif

    switch (ctx->pc) {
        case 0x312188u: goto label_312188;
        default: break;
    }

    ctx->pc = 0x312140u;

    // 0x312140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x312144: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x312144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x312148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31214c: 0x8c64d938  lw          $a0, -0x26C8($v1)
    ctx->pc = 0x31214cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957368)));
    // 0x312150: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x312150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x312154: 0x8c63d920  lw          $v1, -0x26E0($v1)
    ctx->pc = 0x312154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957344)));
    // 0x312158: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x312158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31215c: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31215Cu;
    {
        const bool branch_taken_0x31215c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31215c) {
            ctx->pc = 0x312160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31215Cu;
            // 0x312160: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312170u;
            goto label_312170;
        }
    }
    ctx->pc = 0x312164u;
    // 0x312164: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x312164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x312168: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x312168u;
    {
        const bool branch_taken_0x312168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31216Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312168u;
            // 0x31216c: 0xac60d938  sw          $zero, -0x26C8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312168) {
            ctx->pc = 0x312198u;
            goto label_312198;
        }
    }
    ctx->pc = 0x312170u;
label_312170:
    // 0x312170: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x312170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x312174: 0xac43d938  sw          $v1, -0x26C8($v0)
    ctx->pc = 0x312174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957368), GPR_U32(ctx, 3));
    // 0x312178: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x312178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
    // 0x31217c: 0x9044d940  lbu         $a0, -0x26C0($v0)
    ctx->pc = 0x31217cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957376)));
    // 0x312180: 0xc0c4840  jal         func_312100
    ctx->pc = 0x312180u;
    SET_GPR_U32(ctx, 31, 0x312188u);
    ctx->pc = 0x312184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312180u;
            // 0x312184: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x312100u;
    if (runtime->hasFunction(0x312100u)) {
        auto targetFn = runtime->lookupFunction(0x312100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312188u; }
        if (ctx->pc != 0x312188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00312100_0x312100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312188u; }
        if (ctx->pc != 0x312188u) { return; }
    }
    ctx->pc = 0x312188u;
label_312188:
    // 0x312188: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x312188u;
    {
        const bool branch_taken_0x312188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312188) {
            ctx->pc = 0x31218Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312188u;
            // 0x31218c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31219Cu;
            goto label_31219c;
        }
    }
    ctx->pc = 0x312190u;
    // 0x312190: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x312190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x312194: 0xac60d938  sw          $zero, -0x26C8($v1)
    ctx->pc = 0x312194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957368), GPR_U32(ctx, 0));
label_312198:
    // 0x312198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31219c:
    // 0x31219c: 0x3e00008  jr          $ra
    ctx->pc = 0x31219Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3121A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31219Cu;
            // 0x3121a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3121A4u;
    // 0x3121a4: 0x0  nop
    ctx->pc = 0x3121a4u;
    // NOP
    // 0x3121a8: 0x0  nop
    ctx->pc = 0x3121a8u;
    // NOP
    // 0x3121ac: 0x0  nop
    ctx->pc = 0x3121acu;
    // NOP
    ctx->pc = 0x3121b0u;
}
