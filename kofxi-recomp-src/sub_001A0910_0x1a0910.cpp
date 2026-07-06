#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A0910
// Address: 0x1a0910 - 0x1a0a20
void sub_001A0910_0x1a0910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0910_0x1a0910");
#endif

    switch (ctx->pc) {
        case 0x1a0994u: goto label_1a0994;
        case 0x1a09fcu: goto label_1a09fc;
        default: break;
    }

    ctx->pc = 0x1a0910u;

    // 0x1a0910: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0914: 0x9064db10  lbu         $a0, -0x24F0($v1)
    ctx->pc = 0x1a0914u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957840)));
    // 0x1a0918: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0918u;
    {
        const bool branch_taken_0x1a0918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0918) {
            ctx->pc = 0x1A0928u;
            goto label_1a0928;
        }
    }
    ctx->pc = 0x1A0920u;
    // 0x1a0920: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a0924: 0xa064db00  sb          $a0, -0x2500($v1)
    ctx->pc = 0x1a0924u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957824), (uint8_t)GPR_U32(ctx, 4));
label_1a0928:
    // 0x1a0928: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a092c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a092cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a0930: 0xa060daf8  sb          $zero, -0x2508($v1)
    ctx->pc = 0x1a0930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957816), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0934: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0938: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a093c: 0xa080db10  sb          $zero, -0x24F0($a0)
    ctx->pc = 0x1a093cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294957840), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0940: 0xa060dae8  sb          $zero, -0x2518($v1)
    ctx->pc = 0x1a0940u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957800), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0944: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1a0944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1a0948: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a0948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a094c: 0x9063daa0  lbu         $v1, -0x2560($v1)
    ctx->pc = 0x1a094cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x1a0950: 0x18600031  blez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1A0950u;
    {
        const bool branch_taken_0x1a0950 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1A0954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0950u;
            // 0x1a0954: 0xa080db08  sb          $zero, -0x24F8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294957832), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0950) {
            ctx->pc = 0x1A0A18u;
            goto label_1a0a18;
        }
    }
    ctx->pc = 0x1A0958u;
    // 0x1a0958: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x1a0958u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a095c: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A095Cu;
    {
        const bool branch_taken_0x1a095c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A095Cu;
            // 0x1a0960: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a095c) {
            ctx->pc = 0x1A09C8u;
            goto label_1a09c8;
        }
    }
    ctx->pc = 0x1A0964u;
    // 0x1a0964: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0964u;
    {
        const bool branch_taken_0x1a0964 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1A0968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0964u;
            // 0x1a0968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0964) {
            ctx->pc = 0x1A0984u;
            goto label_1a0984;
        }
    }
    ctx->pc = 0x1A096Cu;
    // 0x1a096c: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x1a096cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x1a0970: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1a0970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1a0974: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x1a0974u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1a0978: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A0978u;
    {
        const bool branch_taken_0x1a0978 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0978) {
            ctx->pc = 0x1A0984u;
            goto label_1a0984;
        }
    }
    ctx->pc = 0x1A0980u;
    // 0x1a0980: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a0984:
    // 0x1a0984: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A0984u;
    {
        const bool branch_taken_0x1a0984 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0984) {
            ctx->pc = 0x1A09C8u;
            goto label_1a09c8;
        }
    }
    ctx->pc = 0x1A098Cu;
    // 0x1a098c: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1a098cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x1a0990: 0x24a5db50  addiu       $a1, $a1, -0x24B0
    ctx->pc = 0x1a0990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957904));
label_1a0994:
    // 0x1a0994: 0xa0a0000a  sb          $zero, 0xA($a1)
    ctx->pc = 0x1a0994u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0998: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1a0998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1a099c: 0xa0a00252  sb          $zero, 0x252($a1)
    ctx->pc = 0x1a099cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 594), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a09a0: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x1a09a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1a09a4: 0xa0a0049a  sb          $zero, 0x49A($a1)
    ctx->pc = 0x1a09a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1178), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a09a8: 0xa0a006e2  sb          $zero, 0x6E2($a1)
    ctx->pc = 0x1a09a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1762), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a09ac: 0xa0a0092a  sb          $zero, 0x92A($a1)
    ctx->pc = 0x1a09acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2346), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a09b0: 0xa0a00b72  sb          $zero, 0xB72($a1)
    ctx->pc = 0x1a09b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2930), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a09b4: 0xa0a00dba  sb          $zero, 0xDBA($a1)
    ctx->pc = 0x1a09b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3514), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a09b8: 0xa0a01002  sb          $zero, 0x1002($a1)
    ctx->pc = 0x1a09b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4098), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a09bc: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A09BCu;
    {
        const bool branch_taken_0x1a09bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A09C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A09BCu;
            // 0x1a09c0: 0x24a51240  addiu       $a1, $a1, 0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a09bc) {
            ctx->pc = 0x1A0994u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a0994;
        }
    }
    ctx->pc = 0x1A09C4u;
    // 0x1a09c4: 0x0  nop
    ctx->pc = 0x1a09c4u;
    // NOP
label_1a09c8:
    // 0x1a09c8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a09c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a09cc: 0x9065daa0  lbu         $a1, -0x2560($v1)
    ctx->pc = 0x1a09ccu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957728)));
    // 0x1a09d0: 0xc5082a  slt         $at, $a2, $a1
    ctx->pc = 0x1a09d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a09d4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A09D4u;
    {
        const bool branch_taken_0x1a09d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a09d4) {
            ctx->pc = 0x1A0A18u;
            goto label_1a0a18;
        }
    }
    ctx->pc = 0x1A09DCu;
    // 0x1a09dc: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x1a09dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a09e0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a09e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1a09e4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1a09e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a09e8: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x1a09e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
    // 0x1a09ec: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a09ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a09f0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1a09f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1a09f4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a09f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a09f8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a09f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a09fc:
    // 0x1a09fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a09fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a0a00: 0xa080000a  sb          $zero, 0xA($a0)
    ctx->pc = 0x1a0a00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0a04: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x1a0a04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a0a08: 0x24840248  addiu       $a0, $a0, 0x248
    ctx->pc = 0x1a0a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 584));
    // 0x1a0a0c: 0x0  nop
    ctx->pc = 0x1a0a0cu;
    // NOP
    // 0x1a0a10: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A0A10u;
    {
        const bool branch_taken_0x1a0a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a10) {
            ctx->pc = 0x1A09FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a09fc;
        }
    }
    ctx->pc = 0x1A0A18u;
label_1a0a18:
    // 0x1a0a18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0A20u;
    ctx->pc = 0x1a0a20u;
}
