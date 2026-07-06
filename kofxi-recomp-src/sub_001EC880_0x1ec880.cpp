#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EC880
// Address: 0x1ec880 - 0x1eca20
void sub_001EC880_0x1ec880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC880_0x1ec880");
#endif

    switch (ctx->pc) {
        case 0x1ec8c0u: goto label_1ec8c0;
        case 0x1ec8ccu: goto label_1ec8cc;
        case 0x1ec9e8u: goto label_1ec9e8;
        case 0x1eca08u: goto label_1eca08;
        default: break;
    }

    ctx->pc = 0x1ec880u;

    // 0x1ec880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ec880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ec884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ec884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ec888: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ec888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec88c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ec88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ec890: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ec890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec894: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ec894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ec898: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ec898u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec89c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ec89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ec8a0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ec8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ec8a4: 0x1a000046  blez        $s0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1EC8A4u;
    {
        const bool branch_taken_0x1ec8a4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1EC8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC8A4u;
            // 0x1ec8a8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec8a4) {
            ctx->pc = 0x1EC9C0u;
            goto label_1ec9c0;
        }
    }
    ctx->pc = 0x1EC8ACu;
    // 0x1ec8ac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ec8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ec8b0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1ec8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1ec8b4: 0x2453e688  addiu       $s3, $v0, -0x1978
    ctx->pc = 0x1ec8b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960776));
    // 0x1ec8b8: 0x2474e8b0  addiu       $s4, $v1, -0x1750
    ctx->pc = 0x1ec8b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961328));
    // 0x1ec8bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ec8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec8c0:
    // 0x1ec8c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ec8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec8c4: 0xc076326  jal         func_1D8C98
    ctx->pc = 0x1EC8C4u;
    SET_GPR_U32(ctx, 31, 0x1EC8CCu);
    ctx->pc = 0x1EC8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC8C4u;
            // 0x1ec8c8: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (runtime->hasFunction(0x1D8C98u)) {
        auto targetFn = runtime->lookupFunction(0x1D8C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8CCu; }
        if (ctx->pc != 0x1EC8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8C98_0x1d8c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8CCu; }
        if (ctx->pc != 0x1EC8CCu) { return; }
    }
    ctx->pc = 0x1EC8CCu;
label_1ec8cc:
    // 0x1ec8cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ec8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec8d0: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x1EC8D0u;
    {
        const bool branch_taken_0x1ec8d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC8D0u;
            // 0x1ec8d4: 0xb12023  subu        $a0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec8d0) {
            ctx->pc = 0x1EC9C4u;
            goto label_1ec9c4;
        }
    }
    ctx->pc = 0x1EC8D8u;
    // 0x1ec8d8: 0x90a60007  lbu         $a2, 0x7($a1)
    ctx->pc = 0x1ec8d8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x1ec8dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ec8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ec8e0: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x1ec8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1ec8e4: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x1ec8e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1ec8e8: 0x61902  srl         $v1, $a2, 4
    ctx->pc = 0x1ec8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1ec8ec: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x1ec8ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1ec8f0: 0x24c200ff  addiu       $v0, $a2, 0xFF
    ctx->pc = 0x1ec8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 255));
    // 0x1ec8f4: 0x90ac000b  lbu         $t4, 0xB($a1)
    ctx->pc = 0x1ec8f4u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x1ec8f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ec8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec8fc: 0x90a7000a  lbu         $a3, 0xA($a1)
    ctx->pc = 0x1ec8fcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x1ec900: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1ec900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ec904: 0x90a80004  lbu         $t0, 0x4($a1)
    ctx->pc = 0x1ec904u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ec908: 0x90a40005  lbu         $a0, 0x5($a1)
    ctx->pc = 0x1ec908u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x1ec90c: 0x90a90006  lbu         $t1, 0x6($a1)
    ctx->pc = 0x1ec90cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x1ec910: 0x90aa0008  lbu         $t2, 0x8($a1)
    ctx->pc = 0x1ec910u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ec914: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1EC914u;
    {
        const bool branch_taken_0x1ec914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC914u;
            // 0x1ec918: 0x90ab0009  lbu         $t3, 0x9($a1) (Delay Slot)
        SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec914) {
            ctx->pc = 0x1EC9B8u;
            goto label_1ec9b8;
        }
    }
    ctx->pc = 0x1EC91Cu;
    // 0x1ec91c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1EC91Cu;
    {
        const bool branch_taken_0x1ec91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC91Cu;
            // 0x1ec920: 0x71142  srl         $v0, $a3, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec91c) {
            ctx->pc = 0x1EC9B8u;
            goto label_1ec9b8;
        }
    }
    ctx->pc = 0x1EC924u;
    // 0x1ec924: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ec928: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ec928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec92c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1EC92Cu;
    {
        const bool branch_taken_0x1ec92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC92Cu;
            // 0x1ec930: 0x3082000f  andi        $v0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec92c) {
            ctx->pc = 0x1EC9B8u;
            goto label_1ec9b8;
        }
    }
    ctx->pc = 0x1EC934u;
    // 0x1ec934: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x1ec934u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x1ec938: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x1ec938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1ec93c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1ec93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1ec940: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x1ec940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1ec944: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ec944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ec948: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x1ec948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x1ec94c: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1ec94cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x1ec950: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1EC950u;
    {
        const bool branch_taken_0x1ec950 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC950u;
            // 0x1ec954: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec950) {
            ctx->pc = 0x1EC984u;
            goto label_1ec984;
        }
    }
    ctx->pc = 0x1EC958u;
    // 0x1ec958: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x1ec958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1ec95c: 0xa1a80  sll         $v1, $t2, 10
    ctx->pc = 0x1ec95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 10));
    // 0x1ec960: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ec960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ec964: 0x72182  srl         $a0, $a3, 6
    ctx->pc = 0x1ec964u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
    // 0x1ec968: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ec968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ec96c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1ec96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1ec970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ec970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec974: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ec974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ec978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ec978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec97c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ec97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ec980: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x1ec980u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_1ec984:
    // 0x1ec984: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1ec984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1ec988: 0x30e2001f  andi        $v0, $a3, 0x1F
    ctx->pc = 0x1ec988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
    // 0x1ec98c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1ec98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1ec990: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1ec990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1ec994: 0xc20c2  srl         $a0, $t4, 3
    ctx->pc = 0x1ec994u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 3));
    // 0x1ec998: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ec998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec99c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1ec99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1ec9a0: 0xae540008  sw          $s4, 0x8($s2)
    ctx->pc = 0x1ec9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
    // 0x1ec9a4: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x1ec9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1ec9a8: 0xae450020  sw          $a1, 0x20($s2)
    ctx->pc = 0x1ec9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 5));
    // 0x1ec9ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC9ACu;
    {
        const bool branch_taken_0x1ec9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC9ACu;
            // 0x1ec9b0: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9ac) {
            ctx->pc = 0x1EC9C0u;
            goto label_1ec9c0;
        }
    }
    ctx->pc = 0x1EC9B4u;
    // 0x1ec9b4: 0x0  nop
    ctx->pc = 0x1ec9b4u;
    // NOP
label_1ec9b8:
    // 0x1ec9b8: 0x1e00ffc1  bgtz        $s0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1EC9B8u;
    {
        const bool branch_taken_0x1ec9b8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1EC9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC9B8u;
            // 0x1ec9bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9b8) {
            ctx->pc = 0x1EC8C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ec8c0;
        }
    }
    ctx->pc = 0x1EC9C0u;
label_1ec9c0:
    // 0x1ec9c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ec9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ec9c4:
    // 0x1ec9c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ec9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec9c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ec9c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ec9cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ec9ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec9d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ec9d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ec9d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ec9d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec9d8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ec9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ec9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC9DCu;
            // 0x1ec9e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC9E4u;
    // 0x1ec9e4: 0x0  nop
    ctx->pc = 0x1ec9e4u;
    // NOP
label_1ec9e8:
    // 0x1ec9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ec9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ec9ec: 0x3c0501c0  lui         $a1, 0x1C0
    ctx->pc = 0x1ec9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)448 << 16));
    // 0x1ec9f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec9f4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1ec9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ec9f8: 0x24a54d50  addiu       $a1, $a1, 0x4D50
    ctx->pc = 0x1ec9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19792));
    // 0x1ec9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eca00: 0x807fb4a  j           func_1FED28
    ctx->pc = 0x1ECA00u;
    ctx->pc = 0x1ECA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA00u;
            // 0x1eca04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FED28u;
    {
        auto targetFn = runtime->lookupFunction(0x1FED28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1ECA08u;
label_1eca08:
    // 0x1eca08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eca08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eca0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eca0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eca10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eca10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eca14: 0x807fb6e  j           func_1FEDB8
    ctx->pc = 0x1ECA14u;
    ctx->pc = 0x1ECA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA14u;
            // 0x1eca18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEDB8u;
    {
        auto targetFn = runtime->lookupFunction(0x1FEDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1ECA1Cu;
    // 0x1eca1c: 0x0  nop
    ctx->pc = 0x1eca1cu;
    // NOP
    ctx->pc = 0x1eca20u;
}
