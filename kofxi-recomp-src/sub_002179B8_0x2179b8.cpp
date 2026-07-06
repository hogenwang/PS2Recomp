#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002179B8
// Address: 0x2179b8 - 0x217a48
void sub_002179B8_0x2179b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002179B8_0x2179b8");
#endif

    switch (ctx->pc) {
        case 0x2179d8u: goto label_2179d8;
        case 0x2179f0u: goto label_2179f0;
        case 0x217a00u: goto label_217a00;
        case 0x217a28u: goto label_217a28;
        default: break;
    }

    ctx->pc = 0x2179b8u;

label_2179b8:
    // 0x2179b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2179b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2179bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2179bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2179c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2179c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2179c4: 0x24840f08  addiu       $a0, $a0, 0xF08
    ctx->pc = 0x2179c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3848));
    // 0x2179c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2179c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2179cc: 0x8043e52  j           func_10F948
    ctx->pc = 0x2179CCu;
    ctx->pc = 0x2179D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2179CCu;
            // 0x2179d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F948_0x10f948(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2179D4u;
    // 0x2179d4: 0x0  nop
    ctx->pc = 0x2179d4u;
    // NOP
label_2179d8:
    // 0x2179d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2179d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2179dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2179dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2179e0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x2179e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x2179e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2179e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2179e8: 0xc085e6e  jal         func_2179B8
    ctx->pc = 0x2179E8u;
    SET_GPR_U32(ctx, 31, 0x2179F0u);
    ctx->pc = 0x2179ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2179E8u;
            // 0x2179ec: 0xade0ab58  sw          $zero, -0x54A8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2179B8u;
    goto label_2179b8;
    ctx->pc = 0x2179F0u;
label_2179f0:
    // 0x2179f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2179f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2179f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2179f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2179f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2179F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2179FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2179F8u;
            // 0x2179fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x217A00u;
label_217a00:
    // 0x217a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217a04: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x217a04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x217a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217a0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217a10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x217a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x217a14: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x217a14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217a18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x217a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a1c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x217a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x217a20: 0xc085e6e  jal         func_2179B8
    ctx->pc = 0x217A20u;
    SET_GPR_U32(ctx, 31, 0x217A28u);
    ctx->pc = 0x217A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217A20u;
            // 0x217a24: 0xade0ab5c  sw          $zero, -0x54A4($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2179B8u;
    goto label_2179b8;
    ctx->pc = 0x217A28u;
label_217a28:
    // 0x217a28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x217a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x217a2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x217a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217a30: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x217a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x217a34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x217A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217A3Cu;
            // 0x217a40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x217A44u;
    // 0x217a44: 0x0  nop
    ctx->pc = 0x217a44u;
    // NOP
    ctx->pc = 0x217a48u;
}
