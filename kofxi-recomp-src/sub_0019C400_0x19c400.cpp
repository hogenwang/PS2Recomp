#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C400
// Address: 0x19c400 - 0x19c4d0
void sub_0019C400_0x19c400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C400_0x19c400");
#endif

    ctx->pc = 0x19c400u;

    // 0x19c400: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x19c400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x19c404: 0x9042f35f  lbu         $v0, -0xCA1($v0)
    ctx->pc = 0x19c404u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964063)));
    // 0x19c408: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x19c408u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x19c40c: 0x50200024  beql        $at, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x19C40Cu;
    {
        const bool branch_taken_0x19c40c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c40c) {
            ctx->pc = 0x19C410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C40Cu;
            // 0x19c410: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C4A0u;
            goto label_19c4a0;
        }
    }
    ctx->pc = 0x19C414u;
    // 0x19c414: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x19c414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x19c418: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19c418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19c41c: 0x2463ef60  addiu       $v1, $v1, -0x10A0
    ctx->pc = 0x19c41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963040));
    // 0x19c420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c424: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19c424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c428: 0x400008  jr          $v0
    ctx->pc = 0x19C428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C430u: goto label_19c430;
            case 0x19C454u: goto label_19c454;
            case 0x19C478u: goto label_19c478;
            case 0x19C49Cu: goto label_19c49c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C430u;
label_19c430:
    // 0x19c430: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x19c430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19c434: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x19c434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x19c438: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x19c438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x19c43c: 0x24426094  addiu       $v0, $v0, 0x6094
    ctx->pc = 0x19c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24724));
    // 0x19c440: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c444: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c448: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c44c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x19C44Cu;
    {
        const bool branch_taken_0x19c44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C44Cu;
            // 0x19c450: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c44c) {
            ctx->pc = 0x19C4BCu;
            goto label_19c4bc;
        }
    }
    ctx->pc = 0x19C454u;
label_19c454:
    // 0x19c454: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x19c454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19c458: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x19c458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x19c45c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x19c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x19c460: 0x24426090  addiu       $v0, $v0, 0x6090
    ctx->pc = 0x19c460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24720));
    // 0x19c464: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c468: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c46c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c470: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19C470u;
    {
        const bool branch_taken_0x19c470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C470u;
            // 0x19c474: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c470) {
            ctx->pc = 0x19C4BCu;
            goto label_19c4bc;
        }
    }
    ctx->pc = 0x19C478u;
label_19c478:
    // 0x19c478: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x19c478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x19c47c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x19c47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x19c480: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x19c480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x19c484: 0x24426098  addiu       $v0, $v0, 0x6098
    ctx->pc = 0x19c484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24728));
    // 0x19c488: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c48c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c490: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c494: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x19C494u;
    {
        const bool branch_taken_0x19c494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C494u;
            // 0x19c498: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c494) {
            ctx->pc = 0x19C4BCu;
            goto label_19c4bc;
        }
    }
    ctx->pc = 0x19C49Cu;
label_19c49c:
    // 0x19c49c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x19c49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_19c4a0:
    // 0x19c4a0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x19c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x19c4a4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x19c4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x19c4a8: 0x24426090  addiu       $v0, $v0, 0x6090
    ctx->pc = 0x19c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24720));
    // 0x19c4ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c4b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c4b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c4b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19c4bc:
    // 0x19c4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x19C4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C4C4u;
    // 0x19c4c4: 0x0  nop
    ctx->pc = 0x19c4c4u;
    // NOP
    // 0x19c4c8: 0x0  nop
    ctx->pc = 0x19c4c8u;
    // NOP
    // 0x19c4cc: 0x0  nop
    ctx->pc = 0x19c4ccu;
    // NOP
    ctx->pc = 0x19c4d0u;
}
