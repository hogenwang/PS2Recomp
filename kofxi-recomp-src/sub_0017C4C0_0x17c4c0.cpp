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

// Function: sub_0017C4C0
// Address: 0x17c4c0 - 0x17cff0
void sub_0017C4C0_0x17c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C4C0_0x17c4c0");
#endif

    switch (ctx->pc) {
        case 0x17c530u: goto label_17c530;
        case 0x17c588u: goto label_17c588;
        case 0x17c628u: goto label_17c628;
        case 0x17c67cu: goto label_17c67c;
        case 0x17c6f0u: goto label_17c6f0;
        case 0x17c72cu: goto label_17c72c;
        case 0x17c748u: goto label_17c748;
        case 0x17c7a4u: goto label_17c7a4;
        case 0x17c7e8u: goto label_17c7e8;
        case 0x17c814u: goto label_17c814;
        case 0x17c890u: goto label_17c890;
        case 0x17cd30u: goto label_17cd30;
        case 0x17cd7cu: goto label_17cd7c;
        case 0x17cd9cu: goto label_17cd9c;
        case 0x17ce74u: goto label_17ce74;
        case 0x17cf3cu: goto label_17cf3c;
        default: break;
    }

    ctx->pc = 0x17c4c0u;

    // 0x17c4c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17c4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17c4c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17c4c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17c4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17c4cc: 0x2442b6d0  addiu       $v0, $v0, -0x4930
    ctx->pc = 0x17c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948560));
    // 0x17c4d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17c4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x17c4d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17c4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17c4d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17c4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17c4dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17c4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17c4e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17c4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17c4e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17c4e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c4e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17c4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17c4ec: 0x325000ff  andi        $s0, $s2, 0xFF
    ctx->pc = 0x17c4ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x17c4f0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x17c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x17c4f4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17c4f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17c4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17c4fc: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x17c4fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c500: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x17c500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17c504: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x17c504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x17c508: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17C508u;
    {
        const bool branch_taken_0x17c508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C508u;
        // 0x17c50c: 0x26910024  addiu       $s1, $s4, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c508) {
            ctx->pc = 0x17C528u;
            goto label_17c528;
        }
    }
    ctx->pc = 0x17C510u;
    // 0x17c510: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x17c510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17c514: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x17c514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x17c518: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x17c518u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c51c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x17c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17c520: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x17c520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x17c524: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x17c524u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_17c528:
    // 0x17c528: 0xc05f4b8  jal         func_17D2E0
    ctx->pc = 0x17C528u;
    SET_GPR_U32(ctx, 31, 0x17C530u);
    ctx->pc = 0x17D2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D2E0u, 0x17C528u, 0x17C530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C530u;
label_17c530:
    // 0x17c530: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x17c530u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17c534: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x17c534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x17c538: 0x508301b0  beql        $a0, $v1, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x17C538u;
    {
        const bool branch_taken_0x17c538 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17c538) {
            ctx->pc = 0x17C53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C538u;
            // 0x17c53c: 0x86230020  lh          $v1, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CBFCu;
            goto label_17cbfc;
        }
    }
    ctx->pc = 0x17C540u;
    // 0x17c540: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x17c540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x17c544: 0x108200e6  beq         $a0, $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x17C544u;
    {
        const bool branch_taken_0x17c544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c544) {
            ctx->pc = 0x17C8E0u;
            goto label_17c8e0;
        }
    }
    ctx->pc = 0x17C54Cu;
    // 0x17c54c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x17c54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17c550: 0x50820088  beql        $a0, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x17C550u;
    {
        const bool branch_taken_0x17c550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c550) {
            ctx->pc = 0x17C554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C550u;
            // 0x17c554: 0x9225001a  lbu         $a1, 0x1A($s1) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C774u;
            goto label_17c774;
        }
    }
    ctx->pc = 0x17C558u;
    // 0x17c558: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x17c558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17c55c: 0x10820027  beq         $a0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x17C55Cu;
    {
        const bool branch_taken_0x17c55c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c55c) {
            ctx->pc = 0x17C5FCu;
            goto label_17c5fc;
        }
    }
    ctx->pc = 0x17C564u;
    // 0x17c564: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17c564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17c568: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17C568u;
    {
        const bool branch_taken_0x17c568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c568) {
            ctx->pc = 0x17C56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C568u;
            // 0x17c56c: 0x324300ff  andi        $v1, $s2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C594u;
            goto label_17c594;
        }
    }
    ctx->pc = 0x17C570u;
    // 0x17c570: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C570u;
    {
        const bool branch_taken_0x17c570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c570) {
            ctx->pc = 0x17C574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C570u;
            // 0x17c574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C580u;
            goto label_17c580;
        }
    }
    ctx->pc = 0x17C578u;
    // 0x17c578: 0x100001b9  b           . + 4 + (0x1B9 << 2)
    ctx->pc = 0x17C578u;
    {
        const bool branch_taken_0x17c578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C578u;
        // 0x17c57c: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c578) {
            ctx->pc = 0x17CC60u;
            goto label_17cc60;
        }
    }
    ctx->pc = 0x17C580u;
label_17c580:
    // 0x17c580: 0xc05f3fc  jal         func_17CFF0
    ctx->pc = 0x17C580u;
    SET_GPR_U32(ctx, 31, 0x17C588u);
    ctx->pc = 0x17CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CFF0u, 0x17C580u, 0x17C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C588u;
label_17c588:
    // 0x17c588: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x17c588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17c58c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x17c58cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x17c590: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x17c590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_17c594:
    // 0x17c594: 0x2407fffc  addiu       $a3, $zero, -0x4
    ctx->pc = 0x17c594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x17c598: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x17c598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17c59c: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x17c59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x17c5a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c5a4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x17c5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x17c5a8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x17c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x17c5ac: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x17c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x17c5b0: 0x24420072  addiu       $v0, $v0, 0x72
    ctx->pc = 0x17c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 114));
    // 0x17c5b4: 0x240404b0  addiu       $a0, $zero, 0x4B0
    ctx->pc = 0x17c5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x17c5b8: 0xa6220022  sh          $v0, 0x22($s1)
    ctx->pc = 0x17c5b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x17c5bc: 0xa6270024  sh          $a3, 0x24($s1)
    ctx->pc = 0x17c5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 7));
    // 0x17c5c0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17c5c4: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x17c5c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c5c8: 0x2442b810  addiu       $v0, $v0, -0x47F0
    ctx->pc = 0x17c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948880));
    // 0x17c5cc: 0xa2260003  sb          $a2, 0x3($s1)
    ctx->pc = 0x17c5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x17c5d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c5d4: 0xa2260004  sb          $a2, 0x4($s1)
    ctx->pc = 0x17c5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x17c5d8: 0xa2260005  sb          $a2, 0x5($s1)
    ctx->pc = 0x17c5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 6));
    // 0x17c5dc: 0xa620001a  sh          $zero, 0x1A($s1)
    ctx->pc = 0x17c5dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c5e0: 0xa620001c  sh          $zero, 0x1C($s1)
    ctx->pc = 0x17c5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x17c5e4: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x17c5e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x17c5e8: 0xa625001e  sh          $a1, 0x1E($s1)
    ctx->pc = 0x17c5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 5));
    // 0x17c5ec: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x17c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17c5f0: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x17c5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x17c5f4: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x17C5F4u;
    {
        const bool branch_taken_0x17c5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C5F4u;
        // 0x17c5f8: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c5f4) {
            ctx->pc = 0x17CC5Cu;
            goto label_17cc5c;
        }
    }
    ctx->pc = 0x17C5FCu;
label_17c5fc:
    // 0x17c5fc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17c600: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x17c600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x17c604: 0x2442b6b0  addiu       $v0, $v0, -0x4950
    ctx->pc = 0x17c604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
    // 0x17c608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c60c: 0x94520000  lhu         $s2, 0x0($v0)
    ctx->pc = 0x17c60cu;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c610: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x17c610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x17c614: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x17C614u;
    {
        const bool branch_taken_0x17c614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c614) {
            ctx->pc = 0x17C618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C614u;
            // 0x17c618: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C668u;
            goto label_17c668;
        }
    }
    ctx->pc = 0x17C61Cu;
    // 0x17c61c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x17c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x17c620: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x17C620u;
    SET_GPR_U32(ctx, 31, 0x17C628u);
    ctx->pc = 0x17C624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C620u;
    // 0x17c624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x17C620u, 0x17C628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C628u;
label_17c628:
    // 0x17c628: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x17c628u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x17c62c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17c630: 0xa622001c  sh          $v0, 0x1C($s1)
    ctx->pc = 0x17c630u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x17c634: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17c634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17c638: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17c638u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17c63c: 0x2841003f  slti        $at, $v0, 0x3F
    ctx->pc = 0x17c63cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x17c640: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x17C640u;
    {
        const bool branch_taken_0x17c640 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c640) {
            ctx->pc = 0x17C664u;
            goto label_17c664;
        }
    }
    ctx->pc = 0x17C648u;
    // 0x17c648: 0x8622001a  lh          $v0, 0x1A($s1)
    ctx->pc = 0x17c648u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x17c64c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x17c64cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17c650: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C650u;
    {
        const bool branch_taken_0x17c650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c650) {
            ctx->pc = 0x17C654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C650u;
            // 0x17c654: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C660u;
            goto label_17c660;
        }
    }
    ctx->pc = 0x17C658u;
    // 0x17c658: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17C658u;
    {
        const bool branch_taken_0x17c658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C658u;
        // 0x17c65c: 0xa620001c  sh          $zero, 0x1C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c658) {
            ctx->pc = 0x17C664u;
            goto label_17c664;
        }
    }
    ctx->pc = 0x17C660u;
label_17c660:
    // 0x17c660: 0xa622001c  sh          $v0, 0x1C($s1)
    ctx->pc = 0x17c660u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 2));
label_17c664:
    // 0x17c664: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x17c664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_17c668:
    // 0x17c668: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x17C668u;
    {
        const bool branch_taken_0x17c668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c668) {
            ctx->pc = 0x17C66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C668u;
            // 0x17c66c: 0x32421f00  andi        $v0, $s2, 0x1F00 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C6BCu;
            goto label_17c6bc;
        }
    }
    ctx->pc = 0x17C670u;
    // 0x17c670: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x17c670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x17c674: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x17C674u;
    SET_GPR_U32(ctx, 31, 0x17C67Cu);
    ctx->pc = 0x17C678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C674u;
    // 0x17c678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x17C674u, 0x17C67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C67Cu;
label_17c67c:
    // 0x17c67c: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x17c67cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x17c680: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17c680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17c684: 0xa622001c  sh          $v0, 0x1C($s1)
    ctx->pc = 0x17c684u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x17c688: 0x8622001a  lh          $v0, 0x1A($s1)
    ctx->pc = 0x17c688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x17c68c: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x17c68cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17c690: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x17C690u;
    {
        const bool branch_taken_0x17c690 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C690u;
        // 0x17c694: 0x6403003d  daddiu      $v1, $zero, 0x3D (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)61);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c690) {
            ctx->pc = 0x17C69Cu;
            goto label_17c69c;
        }
    }
    ctx->pc = 0x17C698u;
    // 0x17c698: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17c698u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17c69c:
    // 0x17c69c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x17c69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17c6a0: 0x8623001c  lh          $v1, 0x1C($s1)
    ctx->pc = 0x17c6a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x17c6a4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x17c6a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17c6a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C6A8u;
    {
        const bool branch_taken_0x17c6a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c6a8) {
            ctx->pc = 0x17C6B8u;
            goto label_17c6b8;
        }
    }
    ctx->pc = 0x17C6B0u;
    // 0x17c6b0: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x17c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x17c6b4: 0xa622001c  sh          $v0, 0x1C($s1)
    ctx->pc = 0x17c6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 2));
label_17c6b8:
    // 0x17c6b8: 0x32421f00  andi        $v0, $s2, 0x1F00
    ctx->pc = 0x17c6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7936);
label_17c6bc:
    // 0x17c6bc: 0x10400167  beqz        $v0, . + 4 + (0x167 << 2)
    ctx->pc = 0x17C6BCu;
    {
        const bool branch_taken_0x17c6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c6bc) {
            ctx->pc = 0x17CC5Cu;
            goto label_17cc5c;
        }
    }
    ctx->pc = 0x17C6C4u;
    // 0x17c6c4: 0x8623001c  lh          $v1, 0x1C($s1)
    ctx->pc = 0x17c6c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x17c6c8: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x17c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x17c6cc: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17C6CCu;
    {
        const bool branch_taken_0x17c6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c6cc) {
            ctx->pc = 0x17C6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C6CCu;
            // 0x17c6d0: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C724u;
            goto label_17c724;
        }
    }
    ctx->pc = 0x17C6D4u;
    // 0x17c6d4: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x17c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x17c6d8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C6D8u;
    {
        const bool branch_taken_0x17c6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c6d8) {
            ctx->pc = 0x17C6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C6D8u;
            // 0x17c6dc: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C6E8u;
            goto label_17c6e8;
        }
    }
    ctx->pc = 0x17C6E0u;
    // 0x17c6e0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x17C6E0u;
    {
        const bool branch_taken_0x17c6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C6E0u;
        // 0x17c6e4: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c6e0) {
            ctx->pc = 0x17C740u;
            goto label_17c740;
        }
    }
    ctx->pc = 0x17C6E8u;
label_17c6e8:
    // 0x17c6e8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x17C6E8u;
    SET_GPR_U32(ctx, 31, 0x17C6F0u);
    ctx->pc = 0x17C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C6E8u;
    // 0x17c6ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x17C6E8u, 0x17C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C6F0u;
label_17c6f0:
    // 0x17c6f0: 0x8622001a  lh          $v0, 0x1A($s1)
    ctx->pc = 0x17c6f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x17c6f4: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x17c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x17c6f8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17c6fc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x17c6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c700: 0x8622001a  lh          $v0, 0x1A($s1)
    ctx->pc = 0x17c700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x17c704: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17c704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17c708: 0xa622001a  sh          $v0, 0x1A($s1)
    ctx->pc = 0x17c708u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x17c70c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17c70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17c710: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17c710u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17c714: 0x4410151  bgez        $v0, . + 4 + (0x151 << 2)
    ctx->pc = 0x17C714u;
    {
        const bool branch_taken_0x17c714 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17c714) {
            ctx->pc = 0x17CC5Cu;
            goto label_17cc5c;
        }
    }
    ctx->pc = 0x17C71Cu;
    // 0x17c71c: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x17C71Cu;
    {
        const bool branch_taken_0x17c71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C71Cu;
        // 0x17c720: 0xa620001a  sh          $zero, 0x1A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c71c) {
            ctx->pc = 0x17CC5Cu;
            goto label_17cc5c;
        }
    }
    ctx->pc = 0x17C724u;
label_17c724:
    // 0x17c724: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x17C724u;
    SET_GPR_U32(ctx, 31, 0x17C72Cu);
    ctx->pc = 0x17C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C724u;
    // 0x17c728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x17C724u, 0x17C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C72Cu;
label_17c72c:
    // 0x17c72c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x17c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x17c730: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x17c730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17c734: 0xa623001c  sh          $v1, 0x1C($s1)
    ctx->pc = 0x17c734u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x17c738: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x17C738u;
    {
        const bool branch_taken_0x17c738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C738u;
        // 0x17c73c: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c738) {
            ctx->pc = 0x17CC5Cu;
            goto label_17cc5c;
        }
    }
    ctx->pc = 0x17C740u;
label_17c740:
    // 0x17c740: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x17C740u;
    SET_GPR_U32(ctx, 31, 0x17C748u);
    ctx->pc = 0x17C744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C740u;
    // 0x17c744: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x17C740u, 0x17C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C748u;
label_17c748:
    // 0x17c748: 0x8622001a  lh          $v0, 0x1A($s1)
    ctx->pc = 0x17c748u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x17c74c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17c750: 0xa622001a  sh          $v0, 0x1A($s1)
    ctx->pc = 0x17c750u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x17c754: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17c754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17c758: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17c758u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17c75c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x17c75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x17c760: 0x1440013e  bnez        $v0, . + 4 + (0x13E << 2)
    ctx->pc = 0x17C760u;
    {
        const bool branch_taken_0x17c760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c760) {
            ctx->pc = 0x17CC5Cu;
            goto label_17cc5c;
        }
    }
    ctx->pc = 0x17C768u;
    // 0x17c768: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x17c768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x17c76c: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x17C76Cu;
    {
        const bool branch_taken_0x17c76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C76Cu;
        // 0x17c770: 0xa622001c  sh          $v0, 0x1C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c76c) {
            ctx->pc = 0x17CC5Cu;
            goto label_17cc5c;
        }
    }
    ctx->pc = 0x17C774u;
label_17c774:
    // 0x17c774: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x17c774u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17c778: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x17C778u;
    {
        const bool branch_taken_0x17c778 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c778) {
            ctx->pc = 0x17C808u;
            goto label_17c808;
        }
    }
    ctx->pc = 0x17C780u;
    // 0x17c780: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17c780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17c784: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x17c784u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17c788: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x17c788u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x17c78c: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x17C78Cu;
    {
        const bool branch_taken_0x17c78c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c78c) {
            ctx->pc = 0x17C7D8u;
            goto label_17c7d8;
        }
    }
    ctx->pc = 0x17C794u;
    // 0x17c794: 0x2ca10005  sltiu       $at, $a1, 0x5
    ctx->pc = 0x17c794u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x17c798: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x17C798u;
    {
        const bool branch_taken_0x17c798 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c798) {
            ctx->pc = 0x17C7D8u;
            goto label_17c7d8;
        }
    }
    ctx->pc = 0x17C7A0u;
    // 0x17c7a0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x17c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_17c7a4:
    // 0x17c7a4: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x17c7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x17c7a8: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x17c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x17c7ac: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x17c7acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c7b0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x17c7b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17c7b4: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x17c7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c7b8: 0x28a2fffc  slti        $v0, $a1, -0x4
    ctx->pc = 0x17c7b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967292) ? 1 : 0);
    // 0x17c7bc: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x17c7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c7c0: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x17c7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c7c4: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x17c7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c7c8: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x17c7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c7cc: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x17c7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c7d0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17C7D0u;
    {
        const bool branch_taken_0x17c7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C7D0u;
        // 0x17c7d4: 0xa0830009  sb          $v1, 0x9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c7d0) {
            ctx->pc = 0x17C7A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c7a4;
        }
    }
    ctx->pc = 0x17C7D8u;
label_17c7d8:
    // 0x17c7d8: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x17c7d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17c7dc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x17C7DCu;
    {
        const bool branch_taken_0x17c7dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c7dc) {
            ctx->pc = 0x17C808u;
            goto label_17c808;
        }
    }
    ctx->pc = 0x17C7E4u;
    // 0x17c7e4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x17c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_17c7e8:
    // 0x17c7e8: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x17c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x17c7ec: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x17c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17c7f0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x17c7f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17c7f4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x17c7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x17c7f8: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x17c7f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17c7fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17C7FCu;
    {
        const bool branch_taken_0x17c7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c7fc) {
            ctx->pc = 0x17C7E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c7e8;
        }
    }
    ctx->pc = 0x17C804u;
    // 0x17c804: 0x0  nop
    ctx->pc = 0x17c804u;
    // NOP
label_17c808:
    // 0x17c808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c80c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x17c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x17c810: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x17c810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_17c814:
    // 0x17c814: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17c814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17c818: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x17c818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17c81c: 0x80420002  lb          $v0, 0x2($v0)
    ctx->pc = 0x17c81cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x17c820: 0x2442ffc3  addiu       $v0, $v0, -0x3D
    ctx->pc = 0x17c820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967235));
    // 0x17c824: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x17c824u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17c828: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C828u;
    {
        const bool branch_taken_0x17c828 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c828) {
            ctx->pc = 0x17C838u;
            goto label_17c838;
        }
    }
    ctx->pc = 0x17C830u;
    // 0x17c830: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x17c830u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c834: 0x0  nop
    ctx->pc = 0x17c834u;
    // NOP
label_17c838:
    // 0x17c838: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x17c838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17c83c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x17c83cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17c840: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x17c840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17c844: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x17C844u;
    {
        const bool branch_taken_0x17c844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c844) {
            ctx->pc = 0x17C848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C844u;
            // 0x17c848: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c814;
        }
    }
    ctx->pc = 0x17C84Cu;
    // 0x17c84c: 0x82250002  lb          $a1, 0x2($s1)
    ctx->pc = 0x17c84cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17c850: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x17c850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x17c854: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x17c854u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x17c858: 0x24c638f0  addiu       $a2, $a2, 0x38F0
    ctx->pc = 0x17c858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14576));
    // 0x17c85c: 0x82220004  lb          $v0, 0x4($s1)
    ctx->pc = 0x17c85cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17c860: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x17c860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x17c864: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x17c864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x17c868: 0xa3a0007f  sb          $zero, 0x7F($sp)
    ctx->pc = 0x17c868u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c86c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x17c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x17c870: 0x80a50000  lb          $a1, 0x0($a1)
    ctx->pc = 0x17c870u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17c874: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17c874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17c878: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x17c878u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c87c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x17c87cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c880: 0xa3a5007c  sb          $a1, 0x7C($sp)
    ctx->pc = 0x17c880u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 5));
    // 0x17c884: 0xa3a3007d  sb          $v1, 0x7D($sp)
    ctx->pc = 0x17c884u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 125), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c888: 0xc05f498  jal         func_17D260
    ctx->pc = 0x17C888u;
    SET_GPR_U32(ctx, 31, 0x17C890u);
    ctx->pc = 0x17C88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17C888u;
    // 0x17c88c: 0xa3a2007e  sb          $v0, 0x7E($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D260u, 0x17C888u, 0x17C890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C890u;
label_17c890:
    // 0x17c890: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x17c890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x17c894: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x17c894u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x17c898: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17c898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17c89c: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x17C89Cu;
    {
        const bool branch_taken_0x17c89c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c89c) {
            ctx->pc = 0x17C8A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C89Cu;
            // 0x17c8a0: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C8DCu;
            goto label_17c8dc;
        }
    }
    ctx->pc = 0x17C8A4u;
    // 0x17c8a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c8a8: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C8A8u;
    {
        const bool branch_taken_0x17c8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17c8a8) {
            ctx->pc = 0x17C8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C8A8u;
            // 0x17c8ac: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C8C4u;
            goto label_17c8c4;
        }
    }
    ctx->pc = 0x17C8B0u;
    // 0x17c8b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17C8B0u;
    {
        const bool branch_taken_0x17c8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c8b0) {
            ctx->pc = 0x17C8C0u;
            goto label_17c8c0;
        }
    }
    ctx->pc = 0x17C8B8u;
    // 0x17c8b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17C8B8u;
    {
        const bool branch_taken_0x17c8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c8b8) {
            ctx->pc = 0x17C8D8u;
            goto label_17c8d8;
        }
    }
    ctx->pc = 0x17C8C0u;
label_17c8c0:
    // 0x17c8c0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x17c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_17c8c4:
    // 0x17c8c4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x17c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x17c8c8: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x17c8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x17c8cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x17c8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17c8d0: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x17c8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x17c8d4: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x17c8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_17c8d8:
    // 0x17c8d8: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x17c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_17c8dc:
    // 0x17c8dc: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x17c8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_17c8e0:
    // 0x17c8e0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17c8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17c8e4: 0x2442da58  addiu       $v0, $v0, -0x25A8
    ctx->pc = 0x17c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957656));
    // 0x17c8e8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x17c8ec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x17c8ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c8f0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x17c8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17c8f4: 0x5060006b  beql        $v1, $zero, . + 4 + (0x6B << 2)
    ctx->pc = 0x17C8F4u;
    {
        const bool branch_taken_0x17c8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c8f4) {
            ctx->pc = 0x17C8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C8F4u;
            // 0x17c8f8: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CAA4u;
            goto label_17caa4;
        }
    }
    ctx->pc = 0x17C8FCu;
    // 0x17c8fc: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x17c8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x17c900: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x17c900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17c904: 0x90659780  lbu         $a1, -0x6880($v1)
    ctx->pc = 0x17c904u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x17c908: 0x54a40022  bnel        $a1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x17C908u;
    {
        const bool branch_taken_0x17c908 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x17c908) {
            ctx->pc = 0x17C90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17C908u;
            // 0x17c90c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17C994u;
            goto label_17c994;
        }
    }
    ctx->pc = 0x17C910u;
    // 0x17c910: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17c910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17c914: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x17c914u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x17c918: 0x2484b828  addiu       $a0, $a0, -0x47D8
    ctx->pc = 0x17c918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948904));
    // 0x17c91c: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x17c91cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17c920: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x17c920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x17c924: 0x250838f0  addiu       $t0, $t0, 0x38F0
    ctx->pc = 0x17c924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14576));
    // 0x17c928: 0x90890000  lbu         $t1, 0x0($a0)
    ctx->pc = 0x17c928u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c92c: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x17c92cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x17c930: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x17c930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x17c934: 0x82250003  lb          $a1, 0x3($s1)
    ctx->pc = 0x17c934u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x17c938: 0x80670000  lb          $a3, 0x0($v1)
    ctx->pc = 0x17c938u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c93c: 0x24c6edf6  addiu       $a2, $a2, -0x120A
    ctx->pc = 0x17c93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962678));
    // 0x17c940: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x17c940u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x17c944: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x17c944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x17c948: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x17c948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x17c94c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x17c94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x17c950: 0x82230004  lb          $v1, 0x4($s1)
    ctx->pc = 0x17c950u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17c954: 0x2484edf7  addiu       $a0, $a0, -0x1209
    ctx->pc = 0x17c954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962679));
    // 0x17c958: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x17c958u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x17c95c: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x17c95cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17c960: 0x893021  addu        $a2, $a0, $t1
    ctx->pc = 0x17c960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x17c964: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x17c964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x17c968: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x17c968u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c96c: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x17c96cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x17c970: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x17c970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x17c974: 0x2463edf8  addiu       $v1, $v1, -0x1208
    ctx->pc = 0x17c974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962680));
    // 0x17c978: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x17c978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x17c97c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x17c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x17c980: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x17c980u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x17c984: 0x2463edf9  addiu       $v1, $v1, -0x1207
    ctx->pc = 0x17c984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962681));
    // 0x17c988: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x17c988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x17c98c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x17C98Cu;
    {
        const bool branch_taken_0x17c98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17C98Cu;
        // 0x17c990: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c98c) {
            ctx->pc = 0x17CAA0u;
            goto label_17caa0;
        }
    }
    ctx->pc = 0x17C994u;
label_17c994:
    // 0x17c994: 0x14a30022  bne         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x17C994u;
    {
        const bool branch_taken_0x17c994 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x17c994) {
            ctx->pc = 0x17CA20u;
            goto label_17ca20;
        }
    }
    ctx->pc = 0x17C99Cu;
    // 0x17c99c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17c9a0: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x17c9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x17c9a4: 0x2484b828  addiu       $a0, $a0, -0x47D8
    ctx->pc = 0x17c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948904));
    // 0x17c9a8: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x17c9a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17c9ac: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x17c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x17c9b0: 0x250838f0  addiu       $t0, $t0, 0x38F0
    ctx->pc = 0x17c9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14576));
    // 0x17c9b4: 0x90890000  lbu         $t1, 0x0($a0)
    ctx->pc = 0x17c9b4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17c9b8: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x17c9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x17c9bc: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x17c9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x17c9c0: 0x82250003  lb          $a1, 0x3($s1)
    ctx->pc = 0x17c9c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x17c9c4: 0x80670000  lb          $a3, 0x0($v1)
    ctx->pc = 0x17c9c4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c9c8: 0x24c6ed56  addiu       $a2, $a2, -0x12AA
    ctx->pc = 0x17c9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962518));
    // 0x17c9cc: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x17c9ccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x17c9d0: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x17c9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x17c9d4: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x17c9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x17c9d8: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x17c9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x17c9dc: 0x82230004  lb          $v1, 0x4($s1)
    ctx->pc = 0x17c9dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17c9e0: 0x2484ed57  addiu       $a0, $a0, -0x12A9
    ctx->pc = 0x17c9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962519));
    // 0x17c9e4: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x17c9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x17c9e8: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x17c9e8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17c9ec: 0x893021  addu        $a2, $a0, $t1
    ctx->pc = 0x17c9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x17c9f0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x17c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x17c9f4: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x17c9f4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17c9f8: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x17c9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x17c9fc: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x17c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x17ca00: 0x2463ed58  addiu       $v1, $v1, -0x12A8
    ctx->pc = 0x17ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962520));
    // 0x17ca04: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x17ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x17ca08: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x17ca08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x17ca0c: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x17ca0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x17ca10: 0x2463ed59  addiu       $v1, $v1, -0x12A7
    ctx->pc = 0x17ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962521));
    // 0x17ca14: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x17ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x17ca18: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x17CA18u;
    {
        const bool branch_taken_0x17ca18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CA18u;
        // 0x17ca1c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ca18) {
            ctx->pc = 0x17CAA0u;
            goto label_17caa0;
        }
    }
    ctx->pc = 0x17CA20u;
label_17ca20:
    // 0x17ca20: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17ca20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17ca24: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x17ca24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x17ca28: 0x2484b828  addiu       $a0, $a0, -0x47D8
    ctx->pc = 0x17ca28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948904));
    // 0x17ca2c: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x17ca2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17ca30: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x17ca30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x17ca34: 0x250838f0  addiu       $t0, $t0, 0x38F0
    ctx->pc = 0x17ca34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14576));
    // 0x17ca38: 0x90890000  lbu         $t1, 0x0($a0)
    ctx->pc = 0x17ca38u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17ca3c: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x17ca3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x17ca40: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x17ca40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x17ca44: 0x82250003  lb          $a1, 0x3($s1)
    ctx->pc = 0x17ca44u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x17ca48: 0x80670000  lb          $a3, 0x0($v1)
    ctx->pc = 0x17ca48u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ca4c: 0x24c6ee96  addiu       $a2, $a2, -0x116A
    ctx->pc = 0x17ca4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962838));
    // 0x17ca50: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x17ca50u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x17ca54: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x17ca54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x17ca58: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x17ca58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x17ca5c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x17ca5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x17ca60: 0x82230004  lb          $v1, 0x4($s1)
    ctx->pc = 0x17ca60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17ca64: 0x2484ee97  addiu       $a0, $a0, -0x1169
    ctx->pc = 0x17ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962839));
    // 0x17ca68: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x17ca68u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x17ca6c: 0x80a70000  lb          $a3, 0x0($a1)
    ctx->pc = 0x17ca6cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17ca70: 0x893021  addu        $a2, $a0, $t1
    ctx->pc = 0x17ca70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x17ca74: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x17ca74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x17ca78: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x17ca78u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ca7c: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x17ca7cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x17ca80: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x17ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x17ca84: 0x2463ee98  addiu       $v1, $v1, -0x1168
    ctx->pc = 0x17ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962840));
    // 0x17ca88: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x17ca88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x17ca8c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x17ca8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x17ca90: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x17ca90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x17ca94: 0x2463ee99  addiu       $v1, $v1, -0x1167
    ctx->pc = 0x17ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962841));
    // 0x17ca98: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x17ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x17ca9c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x17ca9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_17caa0:
    // 0x17caa0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x17caa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_17caa4:
    // 0x17caa4: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x17CAA4u;
    {
        const bool branch_taken_0x17caa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17caa4) {
            ctx->pc = 0x17CAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CAA4u;
            // 0x17caa8: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CBD8u;
            goto label_17cbd8;
        }
    }
    ctx->pc = 0x17CAACu;
    // 0x17caac: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x17caacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x17cab0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x17cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17cab4: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x17cab4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x17cab8: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x17CAB8u;
    {
        const bool branch_taken_0x17cab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17cab8) {
            ctx->pc = 0x17CB4Cu;
            goto label_17cb4c;
        }
    }
    ctx->pc = 0x17CAC0u;
    // 0x17cac0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17cac4: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x17cac4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x17cac8: 0x2463b820  addiu       $v1, $v1, -0x47E0
    ctx->pc = 0x17cac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948896));
    // 0x17cacc: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x17caccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x17cad0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17cad4: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x17cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x17cad8: 0x90690000  lbu         $t1, 0x0($v1)
    ctx->pc = 0x17cad8u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17cadc: 0x250838f0  addiu       $t0, $t0, 0x38F0
    ctx->pc = 0x17cadcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14576));
    // 0x17cae0: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x17cae0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17cae4: 0x24c6ec56  addiu       $a2, $a2, -0x13AA
    ctx->pc = 0x17cae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962262));
    // 0x17cae8: 0x2484ec57  addiu       $a0, $a0, -0x13A9
    ctx->pc = 0x17cae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962263));
    // 0x17caec: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x17caecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x17caf0: 0x92840  sll         $a1, $t1, 1
    ctx->pc = 0x17caf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x17caf4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x17caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x17caf8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x17caf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x17cafc: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x17cafcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17cb00: 0x54880  sll         $t1, $a1, 2
    ctx->pc = 0x17cb00u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17cb04: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x17cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x17cb08: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x17cb08u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17cb0c: 0x82220004  lb          $v0, 0x4($s1)
    ctx->pc = 0x17cb0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17cb10: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x17cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x17cb14: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x17cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x17cb18: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x17cb18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x17cb1c: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x17cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x17cb20: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x17cb20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x17cb24: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x17cb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x17cb28: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x17cb28u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17cb2c: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x17cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x17cb30: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x17cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x17cb34: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x17cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x17cb38: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x17cb38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x17cb3c: 0x2442ec59  addiu       $v0, $v0, -0x13A7
    ctx->pc = 0x17cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962265));
    // 0x17cb40: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x17cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x17cb44: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x17CB44u;
    {
        const bool branch_taken_0x17cb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB44u;
        // 0x17cb48: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb44) {
            ctx->pc = 0x17CBD4u;
            goto label_17cbd4;
        }
    }
    ctx->pc = 0x17CB4Cu;
label_17cb4c:
    // 0x17cb4c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17cb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17cb50: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x17cb50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x17cb54: 0x2463b820  addiu       $v1, $v1, -0x47E0
    ctx->pc = 0x17cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948896));
    // 0x17cb58: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x17cb58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x17cb5c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17cb60: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x17cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x17cb64: 0x90690000  lbu         $t1, 0x0($v1)
    ctx->pc = 0x17cb64u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17cb68: 0x250838f0  addiu       $t0, $t0, 0x38F0
    ctx->pc = 0x17cb68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14576));
    // 0x17cb6c: 0x82220002  lb          $v0, 0x2($s1)
    ctx->pc = 0x17cb6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17cb70: 0x24c6ecd6  addiu       $a2, $a2, -0x132A
    ctx->pc = 0x17cb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962390));
    // 0x17cb74: 0x2484ecd7  addiu       $a0, $a0, -0x1329
    ctx->pc = 0x17cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962391));
    // 0x17cb78: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x17cb78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x17cb7c: 0x92840  sll         $a1, $t1, 1
    ctx->pc = 0x17cb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x17cb80: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x17cb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x17cb84: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x17cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x17cb88: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x17cb88u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17cb8c: 0x54880  sll         $t1, $a1, 2
    ctx->pc = 0x17cb8cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x17cb90: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x17cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x17cb94: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x17cb94u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17cb98: 0x82220004  lb          $v0, 0x4($s1)
    ctx->pc = 0x17cb98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17cb9c: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x17cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x17cba0: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x17cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x17cba4: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x17cba4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x17cba8: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x17cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x17cbac: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x17cbacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x17cbb0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x17cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x17cbb4: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x17cbb4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17cbb8: 0x2442ecd8  addiu       $v0, $v0, -0x1328
    ctx->pc = 0x17cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962392));
    // 0x17cbbc: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x17cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x17cbc0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x17cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x17cbc4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x17cbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x17cbc8: 0x2442ecd9  addiu       $v0, $v0, -0x1327
    ctx->pc = 0x17cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962393));
    // 0x17cbcc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x17cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x17cbd0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x17cbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_17cbd4:
    // 0x17cbd4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x17cbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_17cbd8:
    // 0x17cbd8: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x17cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x17cbdc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x17cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x17cbe0: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x17cbe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x17cbe4: 0xae840004  sw          $a0, 0x4($s4)
    ctx->pc = 0x17cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
    // 0x17cbe8: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x17cbe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x17cbec: 0xae840004  sw          $a0, 0x4($s4)
    ctx->pc = 0x17cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 4));
    // 0x17cbf0: 0xa6230020  sh          $v1, 0x20($s1)
    ctx->pc = 0x17cbf0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x17cbf4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x17CBF4u;
    {
        const bool branch_taken_0x17cbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBF4u;
        // 0x17cbf8: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cbf4) {
            ctx->pc = 0x17CC5Cu;
            goto label_17cc5c;
        }
    }
    ctx->pc = 0x17CBFCu;
label_17cbfc:
    // 0x17cbfc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17cc00: 0xa6230020  sh          $v1, 0x20($s1)
    ctx->pc = 0x17cc00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x17cc04: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x17cc04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17cc08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17cc08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17cc0c: 0x4610013  bgez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x17CC0Cu;
    {
        const bool branch_taken_0x17cc0c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x17cc0c) {
            ctx->pc = 0x17CC5Cu;
            goto label_17cc5c;
        }
    }
    ctx->pc = 0x17CC14u;
    // 0x17cc14: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17cc18: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x17cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17cc1c: 0x2484da58  addiu       $a0, $a0, -0x25A8
    ctx->pc = 0x17cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957656));
    // 0x17cc20: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x17cc20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17cc24: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x17cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x17cc28: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x17cc28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17cc2c: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x17cc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x17cc30: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x17cc30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17cc34: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x17cc34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17cc38: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x17cc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x17cc3c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x17cc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17cc40: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x17cc40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17cc44: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x17cc44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x17cc48: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x17cc48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x17cc4c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x17cc4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17cc50: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x17cc50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x17cc54: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x17CC54u;
    {
        const bool branch_taken_0x17cc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC54u;
        // 0x17cc58: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc54) {
            ctx->pc = 0x17CFCCu;
            goto label_17cfcc;
        }
    }
    ctx->pc = 0x17CC5Cu;
label_17cc5c:
    // 0x17cc5c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x17cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_17cc60:
    // 0x17cc60: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x17cc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x17cc64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17CC64u;
    {
        const bool branch_taken_0x17cc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cc64) {
            ctx->pc = 0x17CC7Cu;
            goto label_17cc7c;
        }
    }
    ctx->pc = 0x17CC6Cu;
    // 0x17cc6c: 0x8622001a  lh          $v0, 0x1A($s1)
    ctx->pc = 0x17cc6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x17cc70: 0x8623001c  lh          $v1, 0x1C($s1)
    ctx->pc = 0x17cc70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x17cc74: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x17cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17cc78: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x17cc78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_17cc7c:
    // 0x17cc7c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x17cc80: 0x109840  sll         $s3, $s0, 1
    ctx->pc = 0x17cc80u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x17cc84: 0x24423890  addiu       $v0, $v0, 0x3890
    ctx->pc = 0x17cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14480));
    // 0x17cc88: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x17cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x17cc8c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x17cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x17cc90: 0x9042b280  lbu         $v0, -0x4D80($v0)
    ctx->pc = 0x17cc90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x17cc94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CC94u;
    {
        const bool branch_taken_0x17cc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC94u;
        // 0x17cc98: 0x84640000  lh          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc94) {
            ctx->pc = 0x17CCA4u;
            goto label_17cca4;
        }
    }
    ctx->pc = 0x17CC9Cu;
    // 0x17cc9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17CC9Cu;
    {
        const bool branch_taken_0x17cc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC9Cu;
        // 0x17cca0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc9c) {
            ctx->pc = 0x17CCA8u;
            goto label_17cca8;
        }
    }
    ctx->pc = 0x17CCA4u;
label_17cca4:
    // 0x17cca4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x17cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_17cca8:
    // 0x17cca8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x17cca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17ccac: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17ccacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17ccb0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17ccb4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x17ccb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x17ccb8: 0x9443dab0  lhu         $v1, -0x2550($v0)
    ctx->pc = 0x17ccb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x17ccbc: 0x4ac3c  dsll32      $s5, $a0, 16
    ctx->pc = 0x17ccbcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << (32 + 16));
    // 0x17ccc0: 0x2402030c  addiu       $v0, $zero, 0x30C
    ctx->pc = 0x17ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 780));
    // 0x17ccc4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CCC4u;
    {
        const bool branch_taken_0x17ccc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CCC4u;
        // 0x17ccc8: 0x15ac3f  dsra32      $s5, $s5, 16 (Delay Slot)
        SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ccc4) {
            ctx->pc = 0x17CCD8u;
            goto label_17ccd8;
        }
    }
    ctx->pc = 0x17CCCCu;
    // 0x17cccc: 0x26a20010  addiu       $v0, $s5, 0x10
    ctx->pc = 0x17ccccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x17ccd0: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x17ccd0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17ccd4: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x17ccd4u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
label_17ccd8:
    // 0x17ccd8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x17ccd8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ccdc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x17cce0: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x17cce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x17cce4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17cce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17cce8: 0x109040  sll         $s2, $s0, 1
    ctx->pc = 0x17cce8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x17ccec: 0x24423888  addiu       $v0, $v0, 0x3888
    ctx->pc = 0x17ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14472));
    // 0x17ccf0: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x17ccf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17ccf4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17ccf8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x17ccf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17ccfc: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x17ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
    // 0x17cd00: 0x24846210  addiu       $a0, $a0, 0x6210
    ctx->pc = 0x17cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25104));
    // 0x17cd04: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x17cd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x17cd08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17cd08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17cd0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cd10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17cd10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cd14: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17cd14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17cd18: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x17cd18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x17cd1c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x17cd1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17cd20: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x17cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x17cd24: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x17cd24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x17cd28: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x17CD28u;
    SET_GPR_U32(ctx, 31, 0x17CD30u);
    ctx->pc = 0x17CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD28u;
    // 0x17cd2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788C0u, 0x17CD28u, 0x17CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD30u;
label_17cd30:
    // 0x17cd30: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x17cd30u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cd34: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x17cd34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17cd38: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x17cd38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x17cd3c: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x17cd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x17cd40: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x17cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x17cd44: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17cd44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17cd48: 0x24aa0050  addiu       $t2, $a1, 0x50
    ctx->pc = 0x17cd48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x17cd4c: 0x24846138  addiu       $a0, $a0, 0x6138
    ctx->pc = 0x17cd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24888));
    // 0x17cd50: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17cd50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17cd54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17cd54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd58: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x17cd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x17cd5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17cd5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cd60: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17cd60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17cd64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17cd64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd68: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x17cd68u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cd6c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x17cd6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17cd70: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x17cd70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x17cd74: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x17CD74u;
    SET_GPR_U32(ctx, 31, 0x17CD7Cu);
    ctx->pc = 0x17CD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD74u;
    // 0x17cd78: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788C0u, 0x17CD74u, 0x17CD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD7Cu;
label_17cd7c:
    // 0x17cd7c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x17cd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x17cd80: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x17cd80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd84: 0x24633890  addiu       $v1, $v1, 0x3890
    ctx->pc = 0x17cd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14480));
    // 0x17cd88: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x17cd88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17cd8c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x17cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x17cd90: 0x24633888  addiu       $v1, $v1, 0x3888
    ctx->pc = 0x17cd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14472));
    // 0x17cd94: 0x739821  addu        $s3, $v1, $s3
    ctx->pc = 0x17cd94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x17cd98: 0x8624001a  lh          $a0, 0x1A($s1)
    ctx->pc = 0x17cd98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
label_17cd9c:
    // 0x17cd9c: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x17cd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x17cda0: 0x14640037  bne         $v1, $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x17CDA0u;
    {
        const bool branch_taken_0x17cda0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x17cda0) {
            ctx->pc = 0x17CE80u;
            goto label_17ce80;
        }
    }
    ctx->pc = 0x17CDA8u;
    // 0x17cda8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x17cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17cdac: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x17cdacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x17cdb0: 0x10800063  beqz        $a0, . + 4 + (0x63 << 2)
    ctx->pc = 0x17CDB0u;
    {
        const bool branch_taken_0x17cdb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cdb0) {
            ctx->pc = 0x17CF40u;
            goto label_17cf40;
        }
    }
    ctx->pc = 0x17CDB8u;
    // 0x17cdb8: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x17cdb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17cdbc: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x17cdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x17cdc0: 0x9042b280  lbu         $v0, -0x4D80($v0)
    ctx->pc = 0x17cdc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x17cdc4: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x17cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x17cdc8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x17cdc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x17cdcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CDCCu;
    {
        const bool branch_taken_0x17cdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDCCu;
        // 0x17cdd0: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdcc) {
            ctx->pc = 0x17CDDCu;
            goto label_17cddc;
        }
    }
    ctx->pc = 0x17CDD4u;
    // 0x17cdd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17CDD4u;
    {
        const bool branch_taken_0x17cdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDD4u;
        // 0x17cdd8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdd4) {
            ctx->pc = 0x17CDE0u;
            goto label_17cde0;
        }
    }
    ctx->pc = 0x17CDDCu;
label_17cddc:
    // 0x17cddc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x17cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_17cde0:
    // 0x17cde0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x17cde0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17cde4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17cde4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17cde8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17cdec: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x17cdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17cdf0: 0x9444dab0  lhu         $a0, -0x2550($v0)
    ctx->pc = 0x17cdf0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x17cdf4: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x17cdf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x17cdf8: 0x2402030c  addiu       $v0, $zero, 0x30C
    ctx->pc = 0x17cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 780));
    // 0x17cdfc: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CDFCu;
    {
        const bool branch_taken_0x17cdfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17CE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDFCu;
        // 0x17ce00: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cdfc) {
            ctx->pc = 0x17CE10u;
            goto label_17ce10;
        }
    }
    ctx->pc = 0x17CE04u;
    // 0x17ce04: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x17ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x17ce08: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x17ce08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17ce0c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x17ce0cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_17ce10:
    // 0x17ce10: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x17ce10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17ce14: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x17ce14u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ce18: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x17ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17ce1c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x17ce1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x17ce20: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x17ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x17ce24: 0x24a30060  addiu       $v1, $a1, 0x60
    ctx->pc = 0x17ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x17ce28: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17ce28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17ce2c: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x17ce2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17ce30: 0x80450002  lb          $a1, 0x2($v0)
    ctx->pc = 0x17ce30u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x17ce34: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17ce34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17ce38: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x17ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x17ce3c: 0x24843930  addiu       $a0, $a0, 0x3930
    ctx->pc = 0x17ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14640));
    // 0x17ce40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17ce40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce44: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x17ce44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17ce48: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x17ce48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x17ce4c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x17ce4cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ce50: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17ce50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17ce54: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x17ce54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x17ce58: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x17ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x17ce5c: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x17ce5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x17ce60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17ce60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce64: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x17ce64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17ce68: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x17ce68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x17ce6c: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x17CE6Cu;
    SET_GPR_U32(ctx, 31, 0x17CE74u);
    ctx->pc = 0x17CE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE6Cu;
    // 0x17ce70: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788C0u, 0x17CE6Cu, 0x17CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE74u;
label_17ce74:
    // 0x17ce74: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x17CE74u;
    {
        const bool branch_taken_0x17ce74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ce74) {
            ctx->pc = 0x17CF40u;
            goto label_17cf40;
        }
    }
    ctx->pc = 0x17CE7Cu;
    // 0x17ce7c: 0x0  nop
    ctx->pc = 0x17ce7cu;
    // NOP
label_17ce80:
    // 0x17ce80: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x17ce80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17ce84: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x17ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x17ce88: 0x9042b280  lbu         $v0, -0x4D80($v0)
    ctx->pc = 0x17ce88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x17ce8c: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x17ce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x17ce90: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x17ce90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x17ce94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17CE94u;
    {
        const bool branch_taken_0x17ce94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE94u;
        // 0x17ce98: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce94) {
            ctx->pc = 0x17CEA4u;
            goto label_17cea4;
        }
    }
    ctx->pc = 0x17CE9Cu;
    // 0x17ce9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17CE9Cu;
    {
        const bool branch_taken_0x17ce9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE9Cu;
        // 0x17cea0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce9c) {
            ctx->pc = 0x17CEA8u;
            goto label_17cea8;
        }
    }
    ctx->pc = 0x17CEA4u;
label_17cea4:
    // 0x17cea4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x17cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_17cea8:
    // 0x17cea8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x17cea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17ceac: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x17ceacu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x17ceb0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17ceb4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x17ceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17ceb8: 0x9444dab0  lhu         $a0, -0x2550($v0)
    ctx->pc = 0x17ceb8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x17cebc: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x17cebcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x17cec0: 0x2402030c  addiu       $v0, $zero, 0x30C
    ctx->pc = 0x17cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 780));
    // 0x17cec4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CEC4u;
    {
        const bool branch_taken_0x17cec4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17CEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CEC4u;
        // 0x17cec8: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cec4) {
            ctx->pc = 0x17CED8u;
            goto label_17ced8;
        }
    }
    ctx->pc = 0x17CECCu;
    // 0x17cecc: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x17ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x17ced0: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x17ced0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17ced4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x17ced4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_17ced8:
    // 0x17ced8: 0x86650000  lh          $a1, 0x0($s3)
    ctx->pc = 0x17ced8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17cedc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x17cedcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cee0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x17cee0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17cee4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x17cee4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x17cee8: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x17cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x17ceec: 0x24a30060  addiu       $v1, $a1, 0x60
    ctx->pc = 0x17ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x17cef0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x17cef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17cef4: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x17cef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17cef8: 0x80450002  lb          $a1, 0x2($v0)
    ctx->pc = 0x17cef8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x17cefc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x17cefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x17cf00: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x17cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
    // 0x17cf04: 0x24843930  addiu       $a0, $a0, 0x3930
    ctx->pc = 0x17cf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14640));
    // 0x17cf08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17cf08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf0c: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x17cf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17cf10: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x17cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x17cf14: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x17cf14u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cf18: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x17cf18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x17cf1c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x17cf1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x17cf20: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x17cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x17cf24: 0x24a5d538  addiu       $a1, $a1, -0x2AC8
    ctx->pc = 0x17cf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956344));
    // 0x17cf28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17cf28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cf2c: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x17cf2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x17cf30: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x17cf30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x17cf34: 0xc05e230  jal         func_1788C0
    ctx->pc = 0x17CF34u;
    SET_GPR_U32(ctx, 31, 0x17CF3Cu);
    ctx->pc = 0x17CF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CF34u;
    // 0x17cf38: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788C0u, 0x17CF34u, 0x17CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CF3Cu;
label_17cf3c:
    // 0x17cf3c: 0x0  nop
    ctx->pc = 0x17cf3cu;
    // NOP
label_17cf40:
    // 0x17cf40: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x17cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x17cf44: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x17cf44u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17cf48: 0x2aa30004  slti        $v1, $s5, 0x4
    ctx->pc = 0x17cf48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x17cf4c: 0x5460ff93  bnel        $v1, $zero, . + 4 + (-0x6D << 2)
    ctx->pc = 0x17CF4Cu;
    {
        const bool branch_taken_0x17cf4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cf4c) {
            ctx->pc = 0x17CF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CF4Cu;
            // 0x17cf50: 0x8624001a  lh          $a0, 0x1A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CD9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17cd9c;
        }
    }
    ctx->pc = 0x17CF54u;
    // 0x17cf54: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x17cf54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17cf58: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x17cf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x17cf5c: 0x5460001a  bnel        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x17CF5Cu;
    {
        const bool branch_taken_0x17cf5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cf5c) {
            ctx->pc = 0x17CF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CF5Cu;
            // 0x17cf60: 0x34a30001  ori         $v1, $a1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CFC8u;
            goto label_17cfc8;
        }
    }
    ctx->pc = 0x17CF64u;
    // 0x17cf64: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17cf68: 0x2463b810  addiu       $v1, $v1, -0x47F0
    ctx->pc = 0x17cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948880));
    // 0x17cf6c: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x17cf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x17cf70: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x17cf70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17cf74: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x17cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17cf78: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x17cf78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x17cf7c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x17cf7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x17cf80: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x17cf80u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x17cf84: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17CF84u;
    {
        const bool branch_taken_0x17cf84 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x17cf84) {
            ctx->pc = 0x17CF9Cu;
            goto label_17cf9c;
        }
    }
    ctx->pc = 0x17CF8Cu;
    // 0x17cf8c: 0x34a30002  ori         $v1, $a1, 0x2
    ctx->pc = 0x17cf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x17cf90: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x17cf90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x17cf94: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x17cf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x17cf98: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x17cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_17cf9c:
    // 0x17cf9c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17cfa0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x17cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17cfa4: 0x8c63da70  lw          $v1, -0x2590($v1)
    ctx->pc = 0x17cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957680)));
    // 0x17cfa8: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x17cfa8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x17cfac: 0x1810  mfhi        $v1
    ctx->pc = 0x17cfacu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x17cfb0: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x17CFB0u;
    {
        const bool branch_taken_0x17cfb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cfb0) {
            ctx->pc = 0x17CFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CFB0u;
            // 0x17cfb4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CFD0u;
            goto label_17cfd0;
        }
    }
    ctx->pc = 0x17CFB8u;
    // 0x17cfb8: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x17cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17cfbc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x17cfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x17cfc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17CFC0u;
    {
        const bool branch_taken_0x17cfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFC0u;
        // 0x17cfc4: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cfc0) {
            ctx->pc = 0x17CFCCu;
            goto label_17cfcc;
        }
    }
    ctx->pc = 0x17CFC8u;
label_17cfc8:
    // 0x17cfc8: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x17cfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_17cfcc:
    // 0x17cfcc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17cfccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_17cfd0:
    // 0x17cfd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17cfd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17cfd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17cfd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17cfd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17cfd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17cfdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17cfdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cfe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17cfe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cfe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17cfe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x17CFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFE8u;
        // 0x17cfec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CFF0u;
}
