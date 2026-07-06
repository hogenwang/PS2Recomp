#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B500
// Address: 0x16b500 - 0x16b700
void sub_0016B500_0x16b500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B500_0x16b500");
#endif

    switch (ctx->pc) {
        case 0x16b524u: goto label_16b524;
        default: break;
    }

    ctx->pc = 0x16b500u;

    // 0x16b500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16b504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16b508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16b508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16b50c: 0x8c83048c  lw          $v1, 0x48C($a0)
    ctx->pc = 0x16b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1164)));
    // 0x16b510: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16b510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16b514: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B514u;
    {
        const bool branch_taken_0x16b514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B514u;
            // 0x16b518: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b514) {
            ctx->pc = 0x16B524u;
            goto label_16b524;
        }
    }
    ctx->pc = 0x16B51Cu;
    // 0x16b51c: 0xc062d60  jal         func_18B580
    ctx->pc = 0x16B51Cu;
    SET_GPR_U32(ctx, 31, 0x16B524u);
    ctx->pc = 0x18B580u;
    if (runtime->hasFunction(0x18B580u)) {
        auto targetFn = runtime->lookupFunction(0x18B580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B524u; }
        if (ctx->pc != 0x16B524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018B580_0x18b580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B524u; }
        if (ctx->pc != 0x16B524u) { return; }
    }
    ctx->pc = 0x16B524u;
label_16b524:
    // 0x16b524: 0x8e030494  lw          $v1, 0x494($s0)
    ctx->pc = 0x16b524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x16b528: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x16b528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x16b52c: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x16B52Cu;
    {
        const bool branch_taken_0x16b52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b52c) {
            ctx->pc = 0x16B530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16B52Cu;
            // 0x16b530: 0x960400ee  lhu         $a0, 0xEE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 238)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16B5C0u;
            goto label_16b5c0;
        }
    }
    ctx->pc = 0x16B534u;
    // 0x16b534: 0x8e040538  lw          $a0, 0x538($s0)
    ctx->pc = 0x16b534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1336)));
    // 0x16b538: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x16b538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x16b53c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16b53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16b540: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x16b540u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x16b544: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x16b544u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x16b548: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x16B548u;
    {
        const bool branch_taken_0x16b548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b548) {
            ctx->pc = 0x16B5BCu;
            goto label_16b5bc;
        }
    }
    ctx->pc = 0x16B550u;
    // 0x16b550: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x16b550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x16b554: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b558: 0x2484d460  addiu       $a0, $a0, -0x2BA0
    ctx->pc = 0x16b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956128));
    // 0x16b55c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b560: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16b560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16b564: 0x600008  jr          $v1
    ctx->pc = 0x16B564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B56Cu: goto label_16b56c;
            case 0x16B588u: goto label_16b588;
            case 0x16B5A4u: goto label_16b5a4;
            case 0x16B5BCu: goto label_16b5bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B56Cu;
label_16b56c:
    // 0x16b56c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b570: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x16b570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16b574: 0xa603039a  sh          $v1, 0x39A($s0)
    ctx->pc = 0x16b574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 922), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b578: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16b578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b57c: 0xa604039c  sh          $a0, 0x39C($s0)
    ctx->pc = 0x16b57cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 924), (uint16_t)GPR_U32(ctx, 4));
    // 0x16b580: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16B580u;
    {
        const bool branch_taken_0x16b580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B580u;
            // 0x16b584: 0xa6030502  sh          $v1, 0x502($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1282), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b580) {
            ctx->pc = 0x16B5BCu;
            goto label_16b5bc;
        }
    }
    ctx->pc = 0x16B588u;
label_16b588:
    // 0x16b588: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16b588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b58c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x16b58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16b590: 0xa603039a  sh          $v1, 0x39A($s0)
    ctx->pc = 0x16b590u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 922), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b594: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16b594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b598: 0xa604039c  sh          $a0, 0x39C($s0)
    ctx->pc = 0x16b598u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 924), (uint16_t)GPR_U32(ctx, 4));
    // 0x16b59c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16B59Cu;
    {
        const bool branch_taken_0x16b59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B59Cu;
            // 0x16b5a0: 0xa6030502  sh          $v1, 0x502($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1282), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b59c) {
            ctx->pc = 0x16B5BCu;
            goto label_16b5bc;
        }
    }
    ctx->pc = 0x16B5A4u;
label_16b5a4:
    // 0x16b5a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16b5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b5a8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16b5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16b5ac: 0xa603039a  sh          $v1, 0x39A($s0)
    ctx->pc = 0x16b5acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 922), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b5b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b5b4: 0xa604039c  sh          $a0, 0x39C($s0)
    ctx->pc = 0x16b5b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 924), (uint16_t)GPR_U32(ctx, 4));
    // 0x16b5b8: 0xa6030502  sh          $v1, 0x502($s0)
    ctx->pc = 0x16b5b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1282), (uint16_t)GPR_U32(ctx, 3));
label_16b5bc:
    // 0x16b5bc: 0x960400ee  lhu         $a0, 0xEE($s0)
    ctx->pc = 0x16b5bcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 238)));
label_16b5c0:
    // 0x16b5c0: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x16b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x16b5c4: 0x50830031  beql        $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x16B5C4u;
    {
        const bool branch_taken_0x16b5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b5c4) {
            ctx->pc = 0x16B5C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5C4u;
            // 0x16b5c8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16B68Cu;
            goto label_16b68c;
        }
    }
    ctx->pc = 0x16B5CCu;
    // 0x16b5cc: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x16b5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x16b5d0: 0x50830025  beql        $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x16B5D0u;
    {
        const bool branch_taken_0x16b5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b5d0) {
            ctx->pc = 0x16B5D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16B5D0u;
            // 0x16b5d4: 0x8e030494  lw          $v1, 0x494($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16B668u;
            goto label_16b668;
        }
    }
    ctx->pc = 0x16B5D8u;
    // 0x16b5d8: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x16b5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x16b5dc: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x16B5DCu;
    {
        const bool branch_taken_0x16b5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b5dc) {
            ctx->pc = 0x16B664u;
            goto label_16b664;
        }
    }
    ctx->pc = 0x16B5E4u;
    // 0x16b5e4: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x16b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x16b5e8: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x16B5E8u;
    {
        const bool branch_taken_0x16b5e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b5e8) {
            ctx->pc = 0x16B664u;
            goto label_16b664;
        }
    }
    ctx->pc = 0x16B5F0u;
    // 0x16b5f0: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x16b5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x16b5f4: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x16B5F4u;
    {
        const bool branch_taken_0x16b5f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b5f4) {
            ctx->pc = 0x16B664u;
            goto label_16b664;
        }
    }
    ctx->pc = 0x16B5FCu;
    // 0x16b5fc: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x16b5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x16b600: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x16B600u;
    {
        const bool branch_taken_0x16b600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b600) {
            ctx->pc = 0x16B664u;
            goto label_16b664;
        }
    }
    ctx->pc = 0x16B608u;
    // 0x16b608: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x16b608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x16b60c: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16B60Cu;
    {
        const bool branch_taken_0x16b60c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b60c) {
            ctx->pc = 0x16B664u;
            goto label_16b664;
        }
    }
    ctx->pc = 0x16B614u;
    // 0x16b614: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x16b614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x16b618: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x16B618u;
    {
        const bool branch_taken_0x16b618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b618) {
            ctx->pc = 0x16B664u;
            goto label_16b664;
        }
    }
    ctx->pc = 0x16B620u;
    // 0x16b620: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x16b620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x16b624: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x16B624u;
    {
        const bool branch_taken_0x16b624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b624) {
            ctx->pc = 0x16B664u;
            goto label_16b664;
        }
    }
    ctx->pc = 0x16B62Cu;
    // 0x16b62c: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x16b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x16b630: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16B630u;
    {
        const bool branch_taken_0x16b630 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b630) {
            ctx->pc = 0x16B664u;
            goto label_16b664;
        }
    }
    ctx->pc = 0x16B638u;
    // 0x16b638: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x16b638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x16b63c: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16B63Cu;
    {
        const bool branch_taken_0x16b63c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b63c) {
            ctx->pc = 0x16B664u;
            goto label_16b664;
        }
    }
    ctx->pc = 0x16B644u;
    // 0x16b644: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x16b644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x16b648: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B648u;
    {
        const bool branch_taken_0x16b648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b648) {
            ctx->pc = 0x16B664u;
            goto label_16b664;
        }
    }
    ctx->pc = 0x16B650u;
    // 0x16b650: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x16b650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x16b654: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B654u;
    {
        const bool branch_taken_0x16b654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b654) {
            ctx->pc = 0x16B664u;
            goto label_16b664;
        }
    }
    ctx->pc = 0x16B65Cu;
    // 0x16b65c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16B65Cu;
    {
        const bool branch_taken_0x16b65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B65Cu;
            // 0x16b660: 0x8e060494  lw          $a2, 0x494($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b65c) {
            ctx->pc = 0x16B6A0u;
            goto label_16b6a0;
        }
    }
    ctx->pc = 0x16B664u;
label_16b664:
    // 0x16b664: 0x8e030494  lw          $v1, 0x494($s0)
    ctx->pc = 0x16b664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
label_16b668:
    // 0x16b668: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x16b668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x16b66c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16B66Cu;
    {
        const bool branch_taken_0x16b66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b66c) {
            ctx->pc = 0x16B69Cu;
            goto label_16b69c;
        }
    }
    ctx->pc = 0x16B674u;
    // 0x16b674: 0xa600039a  sh          $zero, 0x39A($s0)
    ctx->pc = 0x16b674u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 922), (uint16_t)GPR_U32(ctx, 0));
    // 0x16b678: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x16b678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16b67c: 0xa603039c  sh          $v1, 0x39C($s0)
    ctx->pc = 0x16b67cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 924), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b680: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16b680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16b684: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16B684u;
    {
        const bool branch_taken_0x16b684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B684u;
            // 0x16b688: 0xa6030502  sh          $v1, 0x502($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1282), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b684) {
            ctx->pc = 0x16B69Cu;
            goto label_16b69c;
        }
    }
    ctx->pc = 0x16B68Cu;
label_16b68c:
    // 0x16b68c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x16b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16b690: 0xa604039a  sh          $a0, 0x39A($s0)
    ctx->pc = 0x16b690u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 922), (uint16_t)GPR_U32(ctx, 4));
    // 0x16b694: 0xa603039c  sh          $v1, 0x39C($s0)
    ctx->pc = 0x16b694u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 924), (uint16_t)GPR_U32(ctx, 3));
    // 0x16b698: 0xa6000502  sh          $zero, 0x502($s0)
    ctx->pc = 0x16b698u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1282), (uint16_t)GPR_U32(ctx, 0));
label_16b69c:
    // 0x16b69c: 0x8e060494  lw          $a2, 0x494($s0)
    ctx->pc = 0x16b69cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
label_16b6a0:
    // 0x16b6a0: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x16b6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x16b6a4: 0x3465f010  ori         $a1, $v1, 0xF010
    ctx->pc = 0x16b6a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61456);
    // 0x16b6a8: 0x2404fc00  addiu       $a0, $zero, -0x400
    ctx->pc = 0x16b6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966272));
    // 0x16b6ac: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x16b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x16b6b0: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x16b6b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x16b6b4: 0xae050494  sw          $a1, 0x494($s0)
    ctx->pc = 0x16b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 5));
    // 0x16b6b8: 0x8e050490  lw          $a1, 0x490($s0)
    ctx->pc = 0x16b6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
    // 0x16b6bc: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x16b6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x16b6c0: 0xae040490  sw          $a0, 0x490($s0)
    ctx->pc = 0x16b6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1168), GPR_U32(ctx, 4));
    // 0x16b6c4: 0x8e040494  lw          $a0, 0x494($s0)
    ctx->pc = 0x16b6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1172)));
    // 0x16b6c8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16b6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16b6cc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B6CCu;
    {
        const bool branch_taken_0x16b6cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b6cc) {
            ctx->pc = 0x16B6D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16B6CCu;
            // 0x16b6d0: 0xa60004fe  sh          $zero, 0x4FE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16B6E8u;
            goto label_16b6e8;
        }
    }
    ctx->pc = 0x16B6D4u;
    // 0x16b6d4: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x16b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x16b6d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x16b6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x16b6dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16b6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16b6e0: 0xae030494  sw          $v1, 0x494($s0)
    ctx->pc = 0x16b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1172), GPR_U32(ctx, 3));
    // 0x16b6e4: 0xa60004fe  sh          $zero, 0x4FE($s0)
    ctx->pc = 0x16b6e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1278), (uint16_t)GPR_U32(ctx, 0));
label_16b6e8:
    // 0x16b6e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16b6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b6ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b6ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x16B6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B6F0u;
            // 0x16b6f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B6F8u;
    // 0x16b6f8: 0x0  nop
    ctx->pc = 0x16b6f8u;
    // NOP
    // 0x16b6fc: 0x0  nop
    ctx->pc = 0x16b6fcu;
    // NOP
    ctx->pc = 0x16b700u;
}
