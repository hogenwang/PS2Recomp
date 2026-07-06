#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033DDA0
// Address: 0x33dda0 - 0x33de90
void sub_0033DDA0_0x33dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DDA0_0x33dda0");
#endif

    switch (ctx->pc) {
        case 0x33ddbcu: goto label_33ddbc;
        default: break;
    }

    ctx->pc = 0x33dda0u;

    // 0x33dda0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33dda4: 0x3c0701de  lui         $a3, 0x1DE
    ctx->pc = 0x33dda4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)478 << 16));
    // 0x33dda8: 0x9466ec80  lhu         $a2, -0x1380($v1)
    ctx->pc = 0x33dda8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962304)));
    // 0x33ddac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33ddacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ddb0: 0x24e7e830  addiu       $a3, $a3, -0x17D0
    ctx->pc = 0x33ddb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961200));
    // 0x33ddb4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x33ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33ddb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33ddbc:
    // 0x33ddbc: 0x29030021  slti        $v1, $t0, 0x21
    ctx->pc = 0x33ddbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x33ddc0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33DDC0u;
    {
        const bool branch_taken_0x33ddc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33DDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDC0u;
        // 0x33ddc4: 0xa0e00000  sb          $zero, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ddc0) {
            ctx->pc = 0x33DDF0u;
            goto label_33ddf0;
        }
    }
    ctx->pc = 0x33DDC8u;
    // 0x33ddc8: 0x29010028  slti        $at, $t0, 0x28
    ctx->pc = 0x33ddc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x33ddcc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x33DDCCu;
    {
        const bool branch_taken_0x33ddcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ddcc) {
            ctx->pc = 0x33DDF0u;
            goto label_33ddf0;
        }
    }
    ctx->pc = 0x33DDD4u;
    // 0x33ddd4: 0x2503ffdf  addiu       $v1, $t0, -0x21
    ctx->pc = 0x33ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967263));
    // 0x33ddd8: 0x651804  sllv        $v1, $a1, $v1
    ctx->pc = 0x33ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x33dddc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x33dddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x33dde0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33DDE0u;
    {
        const bool branch_taken_0x33dde0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33dde0) {
            ctx->pc = 0x33DDF0u;
            goto label_33ddf0;
        }
    }
    ctx->pc = 0x33DDE8u;
    // 0x33dde8: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x33dde8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33ddec: 0x0  nop
    ctx->pc = 0x33ddecu;
    // NOP
label_33ddf0:
    // 0x33ddf0: 0x29030029  slti        $v1, $t0, 0x29
    ctx->pc = 0x33ddf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x33ddf4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x33DDF4u;
    {
        const bool branch_taken_0x33ddf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ddf4) {
            ctx->pc = 0x33DE20u;
            goto label_33de20;
        }
    }
    ctx->pc = 0x33DDFCu;
    // 0x33ddfc: 0x29010030  slti        $at, $t0, 0x30
    ctx->pc = 0x33ddfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x33de00: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x33DE00u;
    {
        const bool branch_taken_0x33de00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33de00) {
            ctx->pc = 0x33DE20u;
            goto label_33de20;
        }
    }
    ctx->pc = 0x33DE08u;
    // 0x33de08: 0x2503ffde  addiu       $v1, $t0, -0x22
    ctx->pc = 0x33de08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967262));
    // 0x33de0c: 0x651804  sllv        $v1, $a1, $v1
    ctx->pc = 0x33de0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x33de10: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x33de10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x33de14: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x33DE14u;
    {
        const bool branch_taken_0x33de14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33de14) {
            ctx->pc = 0x33DE20u;
            goto label_33de20;
        }
    }
    ctx->pc = 0x33DE1Cu;
    // 0x33de1c: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x33de1cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
label_33de20:
    // 0x33de20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33de20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33de24: 0x29030030  slti        $v1, $t0, 0x30
    ctx->pc = 0x33de24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x33de28: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x33DE28u;
    {
        const bool branch_taken_0x33de28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE28u;
        // 0x33de2c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33de28) {
            ctx->pc = 0x33DDBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33ddbc;
        }
    }
    ctx->pc = 0x33DE30u;
    // 0x33de30: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33de30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33de34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33de34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33de38: 0x9063b270  lbu         $v1, -0x4D90($v1)
    ctx->pc = 0x33de38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947440)));
    // 0x33de3c: 0x54640011  bnel        $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33DE3Cu;
    {
        const bool branch_taken_0x33de3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x33de3c) {
            ctx->pc = 0x33DE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DE3Cu;
            // 0x33de40: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DE84u;
            goto label_33de84;
        }
    }
    ctx->pc = 0x33DE44u;
    // 0x33de44: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x33de44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33de48: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33de48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33de4c: 0xa064e859  sb          $a0, -0x17A7($v1)
    ctx->pc = 0x33de4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961241), (uint8_t)GPR_U32(ctx, 4));
    // 0x33de50: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33de50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33de54: 0xa064e85a  sb          $a0, -0x17A6($v1)
    ctx->pc = 0x33de54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961242), (uint8_t)GPR_U32(ctx, 4));
    // 0x33de58: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33de58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33de5c: 0xa064e85b  sb          $a0, -0x17A5($v1)
    ctx->pc = 0x33de5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961243), (uint8_t)GPR_U32(ctx, 4));
    // 0x33de60: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33de60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33de64: 0xa064e85c  sb          $a0, -0x17A4($v1)
    ctx->pc = 0x33de64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961244), (uint8_t)GPR_U32(ctx, 4));
    // 0x33de68: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33de68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33de6c: 0xa064e85d  sb          $a0, -0x17A3($v1)
    ctx->pc = 0x33de6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961245), (uint8_t)GPR_U32(ctx, 4));
    // 0x33de70: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33de70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33de74: 0xa064e85e  sb          $a0, -0x17A2($v1)
    ctx->pc = 0x33de74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961246), (uint8_t)GPR_U32(ctx, 4));
    // 0x33de78: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33de78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33de7c: 0xa064e85f  sb          $a0, -0x17A1($v1)
    ctx->pc = 0x33de7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961247), (uint8_t)GPR_U32(ctx, 4));
    // 0x33de80: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x33de80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_33de84:
    // 0x33de84: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33de84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33de88: 0x3e00008  jr          $ra
    ctx->pc = 0x33DE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE88u;
        // 0x33de8c: 0xa064e858  sb          $a0, -0x17A8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961240), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DE90u;
}
