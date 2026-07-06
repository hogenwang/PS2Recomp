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

// Function: sub_001969B0
// Address: 0x1969b0 - 0x196ae0
void sub_001969B0_0x1969b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001969B0_0x1969b0");
#endif

    ctx->pc = 0x1969b0u;

    // 0x1969b0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1969b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1969b4: 0x8c63d178  lw          $v1, -0x2E88($v1)
    ctx->pc = 0x1969b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955384)));
    // 0x1969b8: 0x9063008c  lbu         $v1, 0x8C($v1)
    ctx->pc = 0x1969b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x1969bc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1969bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1969c0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1969C0u;
    {
        const bool branch_taken_0x1969c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1969c0) {
            ctx->pc = 0x1969C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1969C0u;
            // 0x1969c4: 0x90830005  lbu         $v1, 0x5($a0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1969D8u;
            goto label_1969d8;
        }
    }
    ctx->pc = 0x1969C8u;
    // 0x1969c8: 0x90830005  lbu         $v1, 0x5($a0)
    ctx->pc = 0x1969c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1969cc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1969ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1969d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1969D0u;
    {
        const bool branch_taken_0x1969d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1969D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969D0u;
        // 0x1969d4: 0xa0830005  sb          $v1, 0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1969d0) {
            ctx->pc = 0x1969E0u;
            goto label_1969e0;
        }
    }
    ctx->pc = 0x1969D8u;
label_1969d8:
    // 0x1969d8: 0x306300bf  andi        $v1, $v1, 0xBF
    ctx->pc = 0x1969d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)191);
    // 0x1969dc: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x1969dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
label_1969e0:
    // 0x1969e0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1969e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1969e4: 0x8c63d0f8  lw          $v1, -0x2F08($v1)
    ctx->pc = 0x1969e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955256)));
    // 0x1969e8: 0x9063008c  lbu         $v1, 0x8C($v1)
    ctx->pc = 0x1969e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x1969ec: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1969ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1969f0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1969F0u;
    {
        const bool branch_taken_0x1969f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1969f0) {
            ctx->pc = 0x1969F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1969F0u;
            // 0x1969f4: 0x90a30005  lbu         $v1, 0x5($a1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196A08u;
            goto label_196a08;
        }
    }
    ctx->pc = 0x1969F8u;
    // 0x1969f8: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x1969f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x1969fc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1969fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x196a00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x196A00u;
    {
        const bool branch_taken_0x196a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A00u;
        // 0x196a04: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196a00) {
            ctx->pc = 0x196A10u;
            goto label_196a10;
        }
    }
    ctx->pc = 0x196A08u;
label_196a08:
    // 0x196a08: 0x306300bf  andi        $v1, $v1, 0xBF
    ctx->pc = 0x196a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)191);
    // 0x196a0c: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x196a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
label_196a10:
    // 0x196a10: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x196a10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x196a14: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x196a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x196a18: 0x8ccbd148  lw          $t3, -0x2EB8($a2)
    ctx->pc = 0x196a18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955336)));
    // 0x196a1c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x196a1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196a20: 0x8c6ad0c8  lw          $t2, -0x2F38($v1)
    ctx->pc = 0x196a20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955208)));
    // 0x196a24: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x196a24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x196a28: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x196a28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x196a2c: 0xa1490058  sb          $t1, 0x58($t2)
    ctx->pc = 0x196a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 88), (uint8_t)GPR_U32(ctx, 9));
    // 0x196a30: 0x90880004  lbu         $t0, 0x4($a0)
    ctx->pc = 0x196a30u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x196a34: 0xa1480059  sb          $t0, 0x59($t2)
    ctx->pc = 0x196a34u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 89), (uint8_t)GPR_U32(ctx, 8));
    // 0x196a38: 0x90880005  lbu         $t0, 0x5($a0)
    ctx->pc = 0x196a38u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x196a3c: 0xa148005a  sb          $t0, 0x5A($t2)
    ctx->pc = 0x196a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 90), (uint8_t)GPR_U32(ctx, 8));
    // 0x196a40: 0x90880006  lbu         $t0, 0x6($a0)
    ctx->pc = 0x196a40u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x196a44: 0xa148005b  sb          $t0, 0x5B($t2)
    ctx->pc = 0x196a44u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 91), (uint8_t)GPR_U32(ctx, 8));
    // 0x196a48: 0x8ce7d170  lw          $a3, -0x2E90($a3)
    ctx->pc = 0x196a48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294955376)));
    // 0x196a4c: 0xad47005c  sw          $a3, 0x5C($t2)
    ctx->pc = 0x196a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 92), GPR_U32(ctx, 7));
    // 0x196a50: 0x8cc6d178  lw          $a2, -0x2E88($a2)
    ctx->pc = 0x196a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955384)));
    // 0x196a54: 0xad460060  sw          $a2, 0x60($t2)
    ctx->pc = 0x196a54u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 96), GPR_U32(ctx, 6));
    // 0x196a58: 0x90a60004  lbu         $a2, 0x4($a1)
    ctx->pc = 0x196a58u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x196a5c: 0xa1460064  sb          $a2, 0x64($t2)
    ctx->pc = 0x196a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 100), (uint8_t)GPR_U32(ctx, 6));
    // 0x196a60: 0x90a60005  lbu         $a2, 0x5($a1)
    ctx->pc = 0x196a60u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x196a64: 0xa1460065  sb          $a2, 0x65($t2)
    ctx->pc = 0x196a64u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 101), (uint8_t)GPR_U32(ctx, 6));
    // 0x196a68: 0x91660048  lbu         $a2, 0x48($t3)
    ctx->pc = 0x196a68u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 72)));
    // 0x196a6c: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x196a6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x196a70: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x196A70u;
    {
        const bool branch_taken_0x196a70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x196A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A70u;
        // 0x196a74: 0x25630048  addiu       $v1, $t3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196a70) {
            ctx->pc = 0x196ABCu;
            goto label_196abc;
        }
    }
    ctx->pc = 0x196A78u;
    // 0x196a78: 0xa0690000  sb          $t1, 0x0($v1)
    ctx->pc = 0x196a78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x196a7c: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x196a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x196a80: 0x90a80004  lbu         $t0, 0x4($a1)
    ctx->pc = 0x196a80u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x196a84: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x196a84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x196a88: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x196a88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x196a8c: 0x90a80005  lbu         $t0, 0x5($a1)
    ctx->pc = 0x196a8cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x196a90: 0xa0680002  sb          $t0, 0x2($v1)
    ctx->pc = 0x196a90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x196a94: 0x90a50006  lbu         $a1, 0x6($a1)
    ctx->pc = 0x196a94u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x196a98: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x196a98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x196a9c: 0x8ce5d0f0  lw          $a1, -0x2F10($a3)
    ctx->pc = 0x196a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294955248)));
    // 0x196aa0: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x196aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x196aa4: 0x8cc5d0f8  lw          $a1, -0x2F08($a2)
    ctx->pc = 0x196aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955256)));
    // 0x196aa8: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x196aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x196aac: 0x90850004  lbu         $a1, 0x4($a0)
    ctx->pc = 0x196aacu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x196ab0: 0xa065000c  sb          $a1, 0xC($v1)
    ctx->pc = 0x196ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x196ab4: 0x90840005  lbu         $a0, 0x5($a0)
    ctx->pc = 0x196ab4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x196ab8: 0xa064000d  sb          $a0, 0xD($v1)
    ctx->pc = 0x196ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 13), (uint8_t)GPR_U32(ctx, 4));
label_196abc:
    // 0x196abc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x196abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x196ac0: 0x8c64d148  lw          $a0, -0x2EB8($v1)
    ctx->pc = 0x196ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955336)));
    // 0x196ac4: 0x94830090  lhu         $v1, 0x90($a0)
    ctx->pc = 0x196ac4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x196ac8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x196ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x196acc: 0x3e00008  jr          $ra
    ctx->pc = 0x196ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196ACCu;
        // 0x196ad0: 0xa4830090  sh          $v1, 0x90($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196AD4u;
    // 0x196ad4: 0x0  nop
    ctx->pc = 0x196ad4u;
    // NOP
    // 0x196ad8: 0x0  nop
    ctx->pc = 0x196ad8u;
    // NOP
    // 0x196adc: 0x0  nop
    ctx->pc = 0x196adcu;
    // NOP
}
