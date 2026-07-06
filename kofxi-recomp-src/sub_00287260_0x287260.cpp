#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00287260
// Address: 0x287260 - 0x2872b8
void sub_00287260_0x287260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287260_0x287260");
#endif

    switch (ctx->pc) {
        case 0x28729cu: goto label_28729c;
        default: break;
    }

    ctx->pc = 0x287260u;

    // 0x287260: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x287260u;
    {
        const bool branch_taken_0x287260 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x287264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287260u;
            // 0x287264: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287260) {
            ctx->pc = 0x287294u;
            goto label_287294;
        }
    }
    ctx->pc = 0x287268u;
    // 0x287268: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x287268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28726c: 0x24a3003f  addiu       $v1, $a1, 0x3F
    ctx->pc = 0x28726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x287270: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x287270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x287274: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x287274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x287278: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x287278u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x28727c: 0x33183  sra         $a2, $v1, 6
    ctx->pc = 0x28727cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 6));
    // 0x287280: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x287280u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287284: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x287284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x287288: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x287288u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28728c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28728Cu;
    {
        const bool branch_taken_0x28728c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x287290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28728Cu;
            // 0x287290: 0xa23023  subu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28728c) {
            ctx->pc = 0x28729Cu;
            goto label_28729c;
        }
    }
    ctx->pc = 0x287294u;
label_287294:
    // 0x287294: 0x3e00008  jr          $ra
    ctx->pc = 0x287294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287294u;
            // 0x287298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28729Cu;
label_28729c:
    // 0x28729c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x28729cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2872a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2872a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2872a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2872a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2872a8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2872a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2872ac: 0xc21016  dsrlv       $v0, $v0, $a2
    ctx->pc = 0x2872acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 6) & 0x3F));
    // 0x2872b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2872B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2872B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2872B0u;
            // 0x2872b4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2872B8u;
    ctx->pc = 0x2872b8u;
}
