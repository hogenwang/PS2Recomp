#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021B090
// Address: 0x21b090 - 0x21b120
void sub_0021B090_0x21b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B090_0x21b090");
#endif

    switch (ctx->pc) {
        case 0x21b0b0u: goto label_21b0b0;
        case 0x21b0c8u: goto label_21b0c8;
        case 0x21b0d8u: goto label_21b0d8;
        case 0x21b100u: goto label_21b100;
        default: break;
    }

    ctx->pc = 0x21b090u;

label_21b090:
    // 0x21b090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b094: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x21b094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x21b098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21b09c: 0x24841560  addiu       $a0, $a0, 0x1560
    ctx->pc = 0x21b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5472));
    // 0x21b0a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b0a4: 0x8043e52  j           func_10F948
    ctx->pc = 0x21B0A4u;
    ctx->pc = 0x21B0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B0A4u;
            // 0x21b0a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21B0ACu;
    // 0x21b0ac: 0x0  nop
    ctx->pc = 0x21b0acu;
    // NOP
label_21b0b0:
    // 0x21b0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21b0b4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21b0b8: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21b0b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21b0bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21b0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21b0c0: 0xc086c24  jal         func_21B090
    ctx->pc = 0x21B0C0u;
    SET_GPR_U32(ctx, 31, 0x21B0C8u);
    ctx->pc = 0x21B0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B0C0u;
            // 0x21b0c4: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21B090u;
    goto label_21b090;
    ctx->pc = 0x21B0C8u;
label_21b0c8:
    // 0x21b0c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21b0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b0cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21b0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x21B0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B0D0u;
            // 0x21b0d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B0D8u;
label_21b0d8:
    // 0x21b0d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21b0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21b0dc: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x21b0dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x21b0e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b0e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21b0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21b0e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21b0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21b0ec: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x21b0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21b0f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21b0f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b0f4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21b0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b0f8: 0xc086c24  jal         func_21B090
    ctx->pc = 0x21B0F8u;
    SET_GPR_U32(ctx, 31, 0x21B100u);
    ctx->pc = 0x21B0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21B0F8u;
            // 0x21b0fc: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21B090u;
    goto label_21b090;
    ctx->pc = 0x21B100u;
label_21b100:
    // 0x21b100: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21b104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21b104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b108: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x21b108u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21b10c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b10cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b114: 0x3e00008  jr          $ra
    ctx->pc = 0x21B114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21B114u;
            // 0x21b118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B11Cu;
    // 0x21b11c: 0x0  nop
    ctx->pc = 0x21b11cu;
    // NOP
    ctx->pc = 0x21b120u;
}
