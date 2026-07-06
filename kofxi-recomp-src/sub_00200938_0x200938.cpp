#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200938
// Address: 0x200938 - 0x200970
void sub_00200938_0x200938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200938_0x200938");
#endif

    ctx->pc = 0x200938u;

    // 0x200938: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x200938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20093c: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x20093cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x200940: 0x10860009  beq         $a0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x200940u;
    {
        const bool branch_taken_0x200940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x200944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200940u;
            // 0x200944: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200940) {
            ctx->pc = 0x200968u;
            goto label_200968;
        }
    }
    ctx->pc = 0x200948u;
    // 0x200948: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x200948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x20094c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20094Cu;
    {
        const bool branch_taken_0x20094c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x200950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20094Cu;
            // 0x200950: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20094c) {
            ctx->pc = 0x200968u;
            goto label_200968;
        }
    }
    ctx->pc = 0x200954u;
    // 0x200954: 0x8ca30094  lw          $v1, 0x94($a1)
    ctx->pc = 0x200954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x200958: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x200958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20095c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20095cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x200960: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x200960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x200964: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x200964u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_200968:
    // 0x200968: 0x3e00008  jr          $ra
    ctx->pc = 0x200968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200970u;
    ctx->pc = 0x200970u;
}
