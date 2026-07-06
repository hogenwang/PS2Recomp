#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DB00
// Address: 0x17db00 - 0x17dba0
void sub_0017DB00_0x17db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DB00_0x17db00");
#endif

    switch (ctx->pc) {
        case 0x17db4cu: goto label_17db4c;
        default: break;
    }

    ctx->pc = 0x17db00u;

    // 0x17db00: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17db00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17db04: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17db04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17db08: 0x9084b830  lbu         $a0, -0x47D0($a0)
    ctx->pc = 0x17db08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294948912)));
    // 0x17db0c: 0x640500ff  daddiu      $a1, $zero, 0xFF
    ctx->pc = 0x17db0cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
    // 0x17db10: 0x9063b831  lbu         $v1, -0x47CF($v1)
    ctx->pc = 0x17db10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294948913)));
    // 0x17db14: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x17db14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x17db18: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x17db18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17db1c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17db1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17db20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x17db20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17db24: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x17db24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x17db28: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x17DB28u;
    {
        const bool branch_taken_0x17db28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17db28) {
            ctx->pc = 0x17DB98u;
            goto label_17db98;
        }
    }
    ctx->pc = 0x17DB30u;
    // 0x17db30: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x17db30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x17db34: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x17db34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x17db38: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x17db38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x17db3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17db3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17db40: 0x2508db50  addiu       $t0, $t0, -0x24B0
    ctx->pc = 0x17db40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957904));
    // 0x17db44: 0x24e7b830  addiu       $a3, $a3, -0x47D0
    ctx->pc = 0x17db44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948912));
    // 0x17db48: 0x24a53c40  addiu       $a1, $a1, 0x3C40
    ctx->pc = 0x17db48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15424));
label_17db4c:
    // 0x17db4c: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x17db4cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17db50: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x17db50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x17db54: 0x8d060068  lw          $a2, 0x68($t0)
    ctx->pc = 0x17db54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 104)));
    // 0x17db58: 0x29230002  slti        $v1, $t1, 0x2
    ctx->pc = 0x17db58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17db5c: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x17db5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x17db60: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x17db60u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x17db64: 0x25080248  addiu       $t0, $t0, 0x248
    ctx->pc = 0x17db64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 584));
    // 0x17db68: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x17db68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17db6c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17db70: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x17db70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x17db74: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x17db74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17db78: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x17db78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17db7c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x17db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x17db80: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x17db80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x17db84: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x17db84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x17db88: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x17db88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17db8c: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x17DB8Cu;
    {
        const bool branch_taken_0x17db8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DB8Cu;
            // 0x17db90: 0xa0800003  sb          $zero, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17db8c) {
            ctx->pc = 0x17DB4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17db4c;
        }
    }
    ctx->pc = 0x17DB94u;
    // 0x17db94: 0x0  nop
    ctx->pc = 0x17db94u;
    // NOP
label_17db98:
    // 0x17db98: 0x3e00008  jr          $ra
    ctx->pc = 0x17DB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17DBA0u;
    ctx->pc = 0x17dba0u;
}
