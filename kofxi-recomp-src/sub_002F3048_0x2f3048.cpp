#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F3048
// Address: 0x2f3048 - 0x2f30e8
void sub_002F3048_0x2f3048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3048_0x2f3048");
#endif

    switch (ctx->pc) {
        case 0x2f3068u: goto label_2f3068;
        case 0x2f3070u: goto label_2f3070;
        case 0x2f3080u: goto label_2f3080;
        case 0x2f3090u: goto label_2f3090;
        default: break;
    }

    ctx->pc = 0x2f3048u;

    // 0x2f3048: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f3048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f304c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f304cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f3050: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f3050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f3054: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f3054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f3058: 0x8c9000f4  lw          $s0, 0xF4($a0)
    ctx->pc = 0x2f3058u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x2f305c: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F305Cu;
    {
        const bool branch_taken_0x2f305c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F305Cu;
            // 0x2f3060: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f305c) {
            ctx->pc = 0x2F30CCu;
            goto label_2f30cc;
        }
    }
    ctx->pc = 0x2F3064u;
    // 0x2f3064: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2f3064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f3068:
    // 0x2f3068: 0xc0bd9fe  jal         func_2F67F8
    ctx->pc = 0x2F3068u;
    SET_GPR_U32(ctx, 31, 0x2F3070u);
    ctx->pc = 0x2F306Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3068u;
            // 0x2f306c: 0x26251cc8  addiu       $a1, $s1, 0x1CC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 7368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F67F8u;
    if (runtime->hasFunction(0x2F67F8u)) {
        auto targetFn = runtime->lookupFunction(0x2F67F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3070u; }
        if (ctx->pc != 0x2F3070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F67F8_0x2f67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3070u; }
        if (ctx->pc != 0x2F3070u) { return; }
    }
    ctx->pc = 0x2F3070u;
label_2f3070:
    // 0x2f3070: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F3070u;
    {
        const bool branch_taken_0x2f3070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3070) {
            ctx->pc = 0x2F30B4u;
            goto label_2f30b4;
        }
    }
    ctx->pc = 0x2F3078u;
    // 0x2f3078: 0xc0bc7b2  jal         func_2F1EC8
    ctx->pc = 0x2F3078u;
    SET_GPR_U32(ctx, 31, 0x2F3080u);
    ctx->pc = 0x2F307Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3078u;
            // 0x2f307c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1EC8u;
    if (runtime->hasFunction(0x2F1EC8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3080u; }
        if (ctx->pc != 0x2F3080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1EC8_0x2f1ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3080u; }
        if (ctx->pc != 0x2F3080u) { return; }
    }
    ctx->pc = 0x2F3080u;
label_2f3080:
    // 0x2f3080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f3080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3084: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f3084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3088: 0xc0bda44  jal         func_2F6910
    ctx->pc = 0x2F3088u;
    SET_GPR_U32(ctx, 31, 0x2F3090u);
    ctx->pc = 0x2F308Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3088u;
            // 0x2f308c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6910u;
    if (runtime->hasFunction(0x2F6910u)) {
        auto targetFn = runtime->lookupFunction(0x2F6910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3090u; }
        if (ctx->pc != 0x2F3090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6910_0x2f6910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3090u; }
        if (ctx->pc != 0x2F3090u) { return; }
    }
    ctx->pc = 0x2F3090u;
label_2f3090:
    // 0x2f3090: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f3090u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3094: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2f3094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3098: 0x5050000d  beql        $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F3098u;
    {
        const bool branch_taken_0x2f3098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2f3098) {
            ctx->pc = 0x2F309Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3098u;
            // 0x2f309c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F30D0u;
            goto label_2f30d0;
        }
    }
    ctx->pc = 0x2F30A0u;
    // 0x2f30a0: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2f30a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f30a4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F30A4u;
    {
        const bool branch_taken_0x2f30a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F30A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F30A4u;
            // 0x2f30a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f30a4) {
            ctx->pc = 0x2F30D0u;
            goto label_2f30d0;
        }
    }
    ctx->pc = 0x2F30ACu;
    // 0x2f30ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F30ACu;
    {
        const bool branch_taken_0x2f30ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F30B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F30ACu;
            // 0x2f30b0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f30ac) {
            ctx->pc = 0x2F30D0u;
            goto label_2f30d0;
        }
    }
    ctx->pc = 0x2F30B4u;
label_2f30b4:
    // 0x2f30b4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F30B4u;
    {
        const bool branch_taken_0x2f30b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F30B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F30B4u;
            // 0x2f30b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f30b4) {
            ctx->pc = 0x2F30C0u;
            goto label_2f30c0;
        }
    }
    ctx->pc = 0x2F30BCu;
    // 0x2f30bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f30c0:
    // 0x2f30c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f30c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f30c4: 0x5600ffe8  bnel        $s0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2F30C4u;
    {
        const bool branch_taken_0x2f30c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f30c4) {
            ctx->pc = 0x2F30C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F30C4u;
            // 0x2f30c8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F3068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f3068;
        }
    }
    ctx->pc = 0x2F30CCu;
label_2f30cc:
    // 0x2f30cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f30d0:
    // 0x2f30d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f30d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f30d4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f30d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f30d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f30d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f30dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F30DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F30E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F30DCu;
            // 0x2f30e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F30E4u;
    // 0x2f30e4: 0x0  nop
    ctx->pc = 0x2f30e4u;
    // NOP
    ctx->pc = 0x2f30e8u;
}
