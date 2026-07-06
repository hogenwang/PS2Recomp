#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002035A8
// Address: 0x2035a8 - 0x203618
void sub_002035A8_0x2035a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002035A8_0x2035a8");
#endif

    ctx->pc = 0x2035a8u;

    // 0x2035a8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2035a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2035ac: 0x24642080  addiu       $a0, $v1, 0x2080
    ctx->pc = 0x2035acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8320));
    // 0x2035b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2035b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2035b4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2035b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2035b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2035b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2035bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2035bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2035c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2035c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2035c4: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2035C4u;
    {
        const bool branch_taken_0x2035c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2035C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2035C4u;
            // 0x2035c8: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035c4) {
            ctx->pc = 0x203604u;
            goto label_203604;
        }
    }
    ctx->pc = 0x2035CCu;
    // 0x2035cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2035ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2035d0: 0x8c452084  lw          $a1, 0x2084($v0)
    ctx->pc = 0x2035d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8324)));
    // 0x2035d4: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2035D4u;
    {
        const bool branch_taken_0x2035d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2035D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2035D4u;
            // 0x2035d8: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035d4) {
            ctx->pc = 0x203604u;
            goto label_203604;
        }
    }
    ctx->pc = 0x2035DCu;
    // 0x2035dc: 0x24040082  addiu       $a0, $zero, 0x82
    ctx->pc = 0x2035dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2035e0: 0x8c432088  lw          $v1, 0x2088($v0)
    ctx->pc = 0x2035e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8328)));
    // 0x2035e4: 0x38660c00  xori        $a2, $v1, 0xC00
    ctx->pc = 0x2035e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3072);
    // 0x2035e8: 0x306300c7  andi        $v1, $v1, 0xC7
    ctx->pc = 0x2035e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)199);
    // 0x2035ec: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2035ECu;
    {
        const bool branch_taken_0x2035ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2035F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2035ECu;
            // 0x2035f0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035ec) {
            ctx->pc = 0x203604u;
            goto label_203604;
        }
    }
    ctx->pc = 0x2035F4u;
    // 0x2035f4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2035f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2035f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2035f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2035fc: 0x8c63f480  lw          $v1, -0xB80($v1)
    ctx->pc = 0x2035fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964352)));
    // 0x203600: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x203600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_203604:
    // 0x203604: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x203604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x203608: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x203608u;
    {
        const bool branch_taken_0x203608 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x203608) {
            ctx->pc = 0x20360Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203608u;
            // 0x20360c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203610u;
            goto label_203610;
        }
    }
    ctx->pc = 0x203610u;
label_203610:
    // 0x203610: 0x3e00008  jr          $ra
    ctx->pc = 0x203610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203618u;
    ctx->pc = 0x203618u;
}
