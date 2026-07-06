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

// Function: sub_002E4870
// Address: 0x2e4870 - 0x2e4de8
void sub_002E4870_0x2e4870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4870_0x2e4870");
#endif

    switch (ctx->pc) {
        case 0x2e48e0u: goto label_2e48e0;
        case 0x2e48f8u: goto label_2e48f8;
        case 0x2e491cu: goto label_2e491c;
        case 0x2e4948u: goto label_2e4948;
        case 0x2e4968u: goto label_2e4968;
        case 0x2e497cu: goto label_2e497c;
        case 0x2e4a0cu: goto label_2e4a0c;
        case 0x2e4a28u: goto label_2e4a28;
        case 0x2e4a50u: goto label_2e4a50;
        case 0x2e4a90u: goto label_2e4a90;
        case 0x2e4a9cu: goto label_2e4a9c;
        case 0x2e4b20u: goto label_2e4b20;
        case 0x2e4b98u: goto label_2e4b98;
        case 0x2e4c10u: goto label_2e4c10;
        case 0x2e4c90u: goto label_2e4c90;
        case 0x2e4d08u: goto label_2e4d08;
        case 0x2e4d70u: goto label_2e4d70;
        case 0x2e4da4u: goto label_2e4da4;
        default: break;
    }

    ctx->pc = 0x2e4870u;

    // 0x2e4870: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x2e4870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x2e4874: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x2e4874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x2e4878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e4878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e487c: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x2e487cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x2e4880: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e4880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4884: 0xffb30218  sd          $s3, 0x218($sp)
    ctx->pc = 0x2e4884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 19));
    // 0x2e4888: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2e4888u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e488c: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x2e488cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x2e4890: 0xffb40220  sd          $s4, 0x220($sp)
    ctx->pc = 0x2e4890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 20));
    // 0x2e4894: 0xffb50228  sd          $s5, 0x228($sp)
    ctx->pc = 0x2e4894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 21));
    // 0x2e4898: 0xffb60230  sd          $s6, 0x230($sp)
    ctx->pc = 0x2e4898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 22));
    // 0x2e489c: 0xffb70238  sd          $s7, 0x238($sp)
    ctx->pc = 0x2e489cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 23));
    // 0x2e48a0: 0xffbe0240  sd          $fp, 0x240($sp)
    ctx->pc = 0x2e48a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 30));
    // 0x2e48a4: 0xffbf0248  sd          $ra, 0x248($sp)
    ctx->pc = 0x2e48a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 31));
    // 0x2e48a8: 0xe7b60260  swc1        $f22, 0x260($sp)
    ctx->pc = 0x2e48a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x2e48ac: 0xe7b50258  swc1        $f21, 0x258($sp)
    ctx->pc = 0x2e48acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x2e48b0: 0xe7b40250  swc1        $f20, 0x250($sp)
    ctx->pc = 0x2e48b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x2e48b4: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e48b8: 0x24634900  addiu       $v1, $v1, 0x4900
    ctx->pc = 0x2e48b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18688));
    // 0x2e48bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e48bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e48c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E48C0u;
    {
        const bool branch_taken_0x2e48c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e48c0) {
            ctx->pc = 0x2E48E0u;
            goto label_2e48e0;
        }
    }
    ctx->pc = 0x2E48C8u;
    // 0x2e48c8: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e48c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e48cc: 0x24844914  addiu       $a0, $a0, 0x4914
    ctx->pc = 0x2e48ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18708));
    // 0x2e48d0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e48d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e48d4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e48d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e48d8: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E48D8u;
    SET_GPR_U32(ctx, 31, 0x2E48E0u);
    ctx->pc = 0x2E48DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E48D8u;
    // 0x2e48dc: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E48D8u, 0x2E48E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E48E0u;
label_2e48e0:
    // 0x2e48e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E48E0u;
    {
        const bool branch_taken_0x2e48e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e48e0) {
            ctx->pc = 0x2E4914u;
            goto label_2e4914;
        }
    }
    ctx->pc = 0x2E48E8u;
    // 0x2e48e8: 0xfe82e7a2  sd          $v0, -0x185E($s4)
    ctx->pc = 0x2e48e8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 4294961058), GPR_U64(ctx, 2));
    // 0x2e48ec: 0x26240438  addiu       $a0, $s1, 0x438
    ctx->pc = 0x2e48ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1080));
    // 0x2e48f0: 0xc19cea6  jal         func_673A98
    ctx->pc = 0x2E48F0u;
    SET_GPR_U32(ctx, 31, 0x2E48F8u);
    ctx->pc = 0x2E48F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E48F0u;
    // 0x2e48f4: 0xfcef414a  sd          $t7, 0x414A($a3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 7), 16714), GPR_U64(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x673A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x673A98u, 0x2E48F0u, 0x2E48F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E48F8u;
label_2e48f8:
    // 0x2e48f8: 0xa14d0d89  sb          $t5, 0xD89($t2)
    ctx->pc = 0x2e48f8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 3465), (uint8_t)GPR_U32(ctx, 13));
    // 0x2e48fc: 0x84c202cb  lh          $v0, 0x2CB($a2)
    ctx->pc = 0x2e48fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 715)));
    // 0x2e4900: 0x0  nop
    ctx->pc = 0x2e4900u;
    // NOP
    // 0x2e4904: 0xf3fd2882  scd         $sp, 0x2882($ra)
    ctx->pc = 0x2e4904u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4904 raw=0xF3FD2882");
    // 0x2e4908: 0xcb1cadcc  lwc2        $28, -0x5234($t8)
    ctx->pc = 0x2e4908u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E4908 raw=0xCB1CADCC");
    // 0x2e490c: 0xf3fd2cc2  scd         $sp, 0x2CC2($ra)
    ctx->pc = 0x2e490cu;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E490C raw=0xF3FD2CC2");
    // 0x2e4910: 0x0  nop
    ctx->pc = 0x2e4910u;
    // NOP
label_2e4914:
    // 0x2e4914: 0xc0b8ff4  jal         func_2E3FD0
    ctx->pc = 0x2E4914u;
    SET_GPR_U32(ctx, 31, 0x2E491Cu);
    ctx->pc = 0x2E4918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4914u;
    // 0x2e4918: 0x72514832  .word       0x72514832                   # INVALID     $s2, $s1, 0x4832 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E4918 raw=0x72514832");
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3FD0u, 0x2E4914u, 0x2E491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E491Cu;
label_2e491c:
    // 0x2e491c: 0x78d16c32  lq          $s1, 0x6C32($a2)
    ctx->pc = 0x2e491cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 6), 27698)));
    // 0x2e4920: 0x90510a20  lbu         $s1, 0xA20($v0)
    ctx->pc = 0x2e4920u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2592)));
    // 0x2e4924: 0xa0531362  sb          $s3, 0x1362($v0)
    ctx->pc = 0x2e4924u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4962), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e4928: 0x30506830  andi        $s0, $v0, 0x6830
    ctx->pc = 0x2e4928u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)26672);
    // 0x2e492c: 0xa0431347  sb          $v1, 0x1347($v0)
    ctx->pc = 0x2e492cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4935), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e4930: 0xafa30b26  sw          $v1, 0xB26($sp)
    ctx->pc = 0x2e4930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2854), GPR_U32(ctx, 3));
    // 0x2e4934: 0x72514832  .word       0x72514832                   # INVALID     $s2, $s1, 0x4832 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e4934u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E4934 raw=0x72514832");
    // 0x2e4938: 0x72d14a32  .word       0x72D14A32                   # INVALID     $s6, $s1, 0x4A32 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e4938u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E4938 raw=0x72D14A32");
    // 0x2e493c: 0x73514232  .word       0x73514232                   # INVALID     $k0, $s1, 0x4232 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e493cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E493C raw=0x73514232");
    // 0x2e4940: 0xc0b9046  jal         func_2E4118
    ctx->pc = 0x2E4940u;
    SET_GPR_U32(ctx, 31, 0x2E4948u);
    ctx->pc = 0x2E4944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4940u;
    // 0x2e4944: 0x7b514232  lq          $s1, 0x4232($k0) (Delay Slot)
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 26), 16946)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4118u, 0x2E4940u, 0x2E4948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4948u;
label_2e4948:
    // 0x2e4948: 0x90512c20  lbu         $s1, 0x2C20($v0)
    ctx->pc = 0x2e4948u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11296)));
    // 0x2e494c: 0xa0431347  sb          $v1, 0x1347($v0)
    ctx->pc = 0x2e494cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4935), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e4950: 0xc0506836  ll          $s0, 0x6836($v0)
    ctx->pc = 0x2e4950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 26678); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e4954: 0xa05313dc  sb          $s3, 0x13DC($v0)
    ctx->pc = 0x2e4954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5084), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e4958: 0x72514832  .word       0x72514832                   # INVALID     $s2, $s1, 0x4832 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e4958u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E4958 raw=0x72514832");
    // 0x2e495c: 0x72d15232  .word       0x72D15232                   # INVALID     $s6, $s1, 0x5232 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e495cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E495C raw=0x72D15232");
    // 0x2e4960: 0xc0b91ae  jal         func_2E46B8
    ctx->pc = 0x2E4960u;
    SET_GPR_U32(ctx, 31, 0x2E4968u);
    ctx->pc = 0x2E4964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4960u;
    // 0x2e4964: 0x73514632  .word       0x73514632                   # INVALID     $k0, $s1, 0x4632 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E4964 raw=0x73514632");
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E46B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E46B8u, 0x2E4960u, 0x2E4968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4968u;
label_2e4968:
    // 0x2e4968: 0x7a514632  lq          $s1, 0x4632($s2)
    ctx->pc = 0x2e4968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 18), 17970)));
    // 0x2e496c: 0x50512c35  beql        $v0, $s1, . + 4 + (0x2C35 << 2)
    ctx->pc = 0x2E496Cu;
    {
        const bool branch_taken_0x2e496c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2e496c) {
            ctx->pc = 0x2E4970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E496Cu;
            // 0x2e4970: 0xa05313dc  sb          $s3, 0x13DC($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 5084), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EFA44u;
            return;
        }
    }
    ctx->pc = 0x2E4974u;
    // 0x2e4974: 0xc0b913c  jal         func_2E44F0
    ctx->pc = 0x2E4974u;
    SET_GPR_U32(ctx, 31, 0x2E497Cu);
    ctx->pc = 0x2E4978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4974u;
    // 0x2e4978: 0x72515232  .word       0x72515232                   # INVALID     $s2, $s1, 0x5232 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E4978 raw=0x72515232");
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E44F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E44F0u, 0x2E4974u, 0x2E497Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E497Cu;
label_2e497c:
    // 0x2e497c: 0x10512c35  beq         $v0, $s1, . + 4 + (0x2C35 << 2)
    ctx->pc = 0x2E497Cu;
    {
        const bool branch_taken_0x2e497c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2E4980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E497Cu;
        // 0x2e4980: 0xa05313dc  sb          $s3, 0x13DC($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 5084), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e497c) {
            ctx->pc = 0x2EFA54u;
            return;
        }
    }
    ctx->pc = 0x2E4984u;
    // 0x2e4984: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e4984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e4988: 0x20531260  addi        $s3, $v0, 0x1260
    ctx->pc = 0x2e4988u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4704, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x2e498c: 0x2444e308  addiu       $a0, $v0, -0x1CF8
    ctx->pc = 0x2e498cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959880));
    // 0x2e4990: 0xa0596200  sb          $t9, 0x6200($v0)
    ctx->pc = 0x2e4990u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25088), (uint8_t)GPR_U32(ctx, 25));
    // 0x2e4994: 0xa0596010  sb          $t9, 0x6010($v0)
    ctx->pc = 0x2e4994u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24592), (uint8_t)GPR_U32(ctx, 25));
    // 0x2e4998: 0xd0506830  lld         $s0, 0x6830($v0)
    ctx->pc = 0x2e4998u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2E4998 raw=0xD0506830");
    // 0x2e499c: 0x73516832  .word       0x73516832                   # INVALID     $k0, $s1, 0x6832 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e499cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E499C raw=0x73516832");
    // 0x2e49a0: 0xb0532260  sdl         $s3, 0x2260($v0)
    ctx->pc = 0x2e49a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8800); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e49a4: 0x2053a410  addi        $s3, $v0, -0x5BF0
    ctx->pc = 0x2e49a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294943760, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x2e49a8: 0xd0506c30  lld         $s0, 0x6C30($v0)
    ctx->pc = 0x2e49a8u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2E49A8 raw=0xD0506C30");
    // 0x2e49ac: 0xb0532070  sdl         $s3, 0x2070($v0)
    ctx->pc = 0x2e49acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e49b0: 0xa0596200  sb          $t9, 0x6200($v0)
    ctx->pc = 0x2e49b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25088), (uint8_t)GPR_U32(ctx, 25));
    // 0x2e49b4: 0xa0596010  sb          $t9, 0x6010($v0)
    ctx->pc = 0x2e49b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24592), (uint8_t)GPR_U32(ctx, 25));
    // 0x2e49b8: 0xa0516830  sb          $s1, 0x6830($v0)
    ctx->pc = 0x2e49b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e49bc: 0x2fa46e1f  sltiu       $a0, $sp, 0x6E1F
    ctx->pc = 0x2e49bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 29) < (uint64_t)(int64_t)(int32_t)28191) ? 1 : 0);
    // 0x2e49c0: 0xb0532450  sdl         $s3, 0x2450($v0)
    ctx->pc = 0x2e49c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 9296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e49c4: 0x99516e12  lwr         $s1, 0x6E12($t2)
    ctx->pc = 0x2e49c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 28178); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 17) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 17) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 17, merged64); }
    // 0x2e49c8: 0x90504c30  lbu         $s0, 0x4C30($v0)
    ctx->pc = 0x2e49c8u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19504)));
    // 0x2e49cc: 0x79d16832  lq          $s1, 0x6832($t6)
    ctx->pc = 0x2e49ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 14), 26674)));
    // 0x2e49d0: 0xc0506834  ll          $s0, 0x6834($v0)
    ctx->pc = 0x2e49d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 26676); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e49d4: 0xa05313dc  sb          $s3, 0x13DC($v0)
    ctx->pc = 0x2e49d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5084), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e49d8: 0xa05313dc  sb          $s3, 0x13DC($v0)
    ctx->pc = 0x2e49d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5084), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e49dc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e49e0: 0x2446e318  addiu       $a2, $v0, -0x1CE8
    ctx->pc = 0x2e49e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959896));
    // 0x2e49e4: 0x78515432  lq          $s1, 0x5432($v0)
    ctx->pc = 0x2e49e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 2), 21554)));
    // 0x2e49e8: 0x72d16832  .word       0x72D16832                   # INVALID     $s6, $s1, 0x6832 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e49e8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E49E8 raw=0x72D16832");
    // 0x2e49ec: 0xa0516830  sb          $s1, 0x6830($v0)
    ctx->pc = 0x2e49ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e49f0: 0xb1516462  sdl         $s1, 0x6462($t2)
    ctx->pc = 0x2e49f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25698); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e49f4: 0xb2514862  sdl         $s1, 0x4862($s2)
    ctx->pc = 0x2e49f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 18530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e49f8: 0xa0586c00  sb          $t8, 0x6C00($v0)
    ctx->pc = 0x2e49f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27648), (uint8_t)GPR_U32(ctx, 24));
    // 0x2e49fc: 0xb0532260  sdl         $s3, 0x2260($v0)
    ctx->pc = 0x2e49fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8800); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4a00: 0x8053a21a  lb          $s3, -0x5DE6($v0)
    ctx->pc = 0x2e4a00u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943258)));
    // 0x2e4a04: 0xfa02c3f  jal         func_E80B0FC
    ctx->pc = 0x2E4A04u;
    SET_GPR_U32(ctx, 31, 0x2E4A0Cu);
    ctx->pc = 0x2E4A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A04u;
    // 0x2e4a08: 0xa05b6000  sb          $k1, 0x6000($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 24576), (uint8_t)GPR_U32(ctx, 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0xE80B0FCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xE80B0FCu, 0x2E4A04u, 0x2E4A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A0Cu;
label_2e4a0c:
    // 0x2e4a0c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2e4a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2e4a10: 0x72514832  .word       0x72514832                   # INVALID     $s2, $s1, 0x4832 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e4a10u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E4A10 raw=0x72514832");
    // 0x2e4a14: 0x24a5e310  addiu       $a1, $a1, -0x1CF0
    ctx->pc = 0x2e4a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959888));
    // 0x2e4a18: 0x73514832  .word       0x73514832                   # INVALID     $k0, $s1, 0x4832 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e4a18u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E4A18 raw=0x73514832");
    // 0x2e4a1c: 0xc0532840  ll          $s3, 0x2840($v0)
    ctx->pc = 0x2e4a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 10304); SET_GPR_S32(ctx, 19, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e4a20: 0xc0b8126  jal         func_2E0498
    ctx->pc = 0x2E4A20u;
    SET_GPR_U32(ctx, 31, 0x2E4A28u);
    ctx->pc = 0x2E4A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A20u;
    // 0x2e4a24: 0x5fa3290f  .word       0x5FA3290F                   # bgtzl       $sp, . + 4 + (0x290F << 2) # 00030000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x2E4A24 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0498u, 0x2E4A20u, 0x2E4A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A28u;
label_2e4a28:
    // 0x2e4a28: 0xa0512c33  sb          $s1, 0x2C33($v0)
    ctx->pc = 0x2e4a28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11315), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4a2c: 0xa0531214  sb          $s3, 0x1214($v0)
    ctx->pc = 0x2e4a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4628), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e4a30: 0x72514032  .word       0x72514032                   # INVALID     $s2, $s1, 0x4032 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e4a30u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E4A30 raw=0x72514032");
    // 0x2e4a34: 0x73514832  .word       0x73514832                   # INVALID     $k0, $s1, 0x4832 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e4a34u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E4A34 raw=0x73514832");
    // 0x2e4a38: 0xa0532868  sb          $s3, 0x2868($v0)
    ctx->pc = 0x2e4a38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10344), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e4a3c: 0x8053284a  lb          $s3, 0x284A($v0)
    ctx->pc = 0x2e4a3cu;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 10314)));
    // 0x2e4a40: 0x74516c32  .word       0x74516C32                   # INVALID     $v0, $s1, 0x6C32 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e4a40u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x2E4A40 raw=0x74516C32");
    // 0x2e4a44: 0xa05328a8  sb          $s3, 0x28A8($v0)
    ctx->pc = 0x2e4a44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10408), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e4a48: 0xc0b851a  jal         func_2E1468
    ctx->pc = 0x2E4A48u;
    SET_GPR_U32(ctx, 31, 0x2E4A50u);
    ctx->pc = 0x2E4A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A48u;
    // 0x2e4a4c: 0xa043129f  sb          $v1, 0x129F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4767), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1468u, 0x2E4A48u, 0x2E4A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A50u;
label_2e4a50:
    // 0x2e4a50: 0xc0512c32  ll          $s1, 0x2C32($v0)
    ctx->pc = 0x2e4a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11314); SET_GPR_S32(ctx, 17, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e4a54: 0xa049920f  sb          $t1, -0x6DF1($v0)
    ctx->pc = 0x2e4a54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294939151), (uint8_t)GPR_U32(ctx, 9));
    // 0x2e4a58: 0x20532811  addi        $s3, $v0, 0x2811
    ctx->pc = 0x2e4a58u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)10257, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
    // 0x2e4a5c: 0x90502e12  lbu         $s0, 0x2E12($v0)
    ctx->pc = 0x2e4a5cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11794)));
    // 0x2e4a60: 0x72514432  .word       0x72514432                   # INVALID     $s2, $s1, 0x4432 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e4a60u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E4A60 raw=0x72514432");
    // 0x2e4a64: 0xa0595204  sb          $t9, 0x5204($v0)
    ctx->pc = 0x2e4a64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20996), (uint8_t)GPR_U32(ctx, 25));
    // 0x2e4a68: 0xa0596010  sb          $t9, 0x6010($v0)
    ctx->pc = 0x2e4a68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24592), (uint8_t)GPR_U32(ctx, 25));
    // 0x2e4a6c: 0xa0531264  sb          $s3, 0x1264($v0)
    ctx->pc = 0x2e4a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4708), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e4a70: 0x73516232  .word       0x73516232                   # INVALID     $k0, $s1, 0x6232 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e4a70u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E4A70 raw=0x73516232");
    // 0x2e4a74: 0x72d16832  .word       0x72D16832                   # INVALID     $s6, $s1, 0x6832 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2e4a74u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2E4A74 raw=0x72D16832");
    // 0x2e4a78: 0x90506c00  lbu         $s0, 0x6C00($v0)
    ctx->pc = 0x2e4a78u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27648)));
    // 0x2e4a7c: 0x79516832  lq          $s1, 0x6832($t2)
    ctx->pc = 0x2e4a7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 10), 26674)));
    // 0x2e4a80: 0x60506830  daddi       $s0, $v0, 0x6830
    ctx->pc = 0x2e4a80u;
    { int64_t src = (int64_t)GPR_S64(ctx, 2); int64_t imm = (int64_t)(int32_t)26672; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
    // 0x2e4a84: 0x99516c02  lwr         $s1, 0x6C02($t2)
    ctx->pc = 0x2e4a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 27650); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 17) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 17) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 17, merged64); }
    // 0x2e4a88: 0xb0532260  sdl         $s3, 0x2260($v0)
    ctx->pc = 0x2e4a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8800); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4a8c: 0xb0532070  sdl         $s3, 0x2070($v0)
    ctx->pc = 0x2e4a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e4a90:
    // 0x2e4a90: 0xe053e211  sc          $s3, -0x1DEF($v0)
    ctx->pc = 0x2e4a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294959633); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 19)); SET_GPR_S32(ctx, 19, 1); } else { SET_GPR_S32(ctx, 19, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4a94: 0xd0506c30  lld         $s0, 0x6C30($v0)
    ctx->pc = 0x2e4a94u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2E4A94 raw=0xD0506C30");
    // 0x2e4a98: 0xb0532450  sdl         $s3, 0x2450($v0)
    ctx->pc = 0x2e4a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 9296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e4a9c:
    // 0x2e4a9c: 0xa0596000  sb          $t9, 0x6000($v0)
    ctx->pc = 0x2e4a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24576), (uint8_t)GPR_U32(ctx, 25));
    // 0x2e4aa0: 0xa0596410  sb          $t9, 0x6410($v0)
    ctx->pc = 0x2e4aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 25616), (uint8_t)GPR_U32(ctx, 25));
    // 0x2e4aa4: 0xa0516830  sb          $s1, 0x6830($v0)
    ctx->pc = 0x2e4aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4aa8: 0x2fa46e1f  sltiu       $a0, $sp, 0x6E1F
    ctx->pc = 0x2e4aa8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 29) < (uint64_t)(int64_t)(int32_t)28191) ? 1 : 0);
    // 0x2e4aac: 0xb0532260  sdl         $s3, 0x2260($v0)
    ctx->pc = 0x2e4aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8800); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4ab0: 0x99516e12  lwr         $s1, 0x6E12($t2)
    ctx->pc = 0x2e4ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 28178); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 17) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 17) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 17, merged64); }
    // 0x2e4ab4: 0x70500c30  .word       0x70500C30                   # INVALID     $v0, $s0, 0xC30 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x2e4ab4u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x10 at 0x2E4AB4 raw=0x70500C30");
    // 0x2e4ab8: 0x79d16832  lq          $s1, 0x6832($t6)
    ctx->pc = 0x2e4ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 14), 26674)));
    // 0x2e4abc: 0xe0585215  sc          $t8, 0x5215($v0)
    ctx->pc = 0x2e4abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 21013); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 24)); SET_GPR_S32(ctx, 24, 1); } else { SET_GPR_S32(ctx, 24, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4ac0: 0xc0585205  ll          $t8, 0x5205($v0)
    ctx->pc = 0x2e4ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20997); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e4ac4: 0xf0585275  scd         $t8, 0x5275($v0)
    ctx->pc = 0x2e4ac4u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4AC4 raw=0xF0585275");
    // 0x2e4ac8: 0xa1316810  sb          $s1, 0x6810($t1)
    ctx->pc = 0x2e4ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 26640), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4acc: 0xd0585265  lld         $t8, 0x5265($v0)
    ctx->pc = 0x2e4accu;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x2E4ACC raw=0xD0585265");
    // 0x2e4ad0: 0xa1f16800  sb          $s1, 0x6800($t7)
    ctx->pc = 0x2e4ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 26624), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4ad4: 0xa2116870  sb          $s1, 0x6870($s0)
    ctx->pc = 0x2e4ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26736), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4ad8: 0xf1516c62  scd         $s1, 0x6C62($t2)
    ctx->pc = 0x2e4ad8u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4AD8 raw=0xF1516C62");
    // 0x2e4adc: 0xf1d16e72  scd         $s1, 0x6E72($t6)
    ctx->pc = 0x2e4adcu;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4ADC raw=0xF1D16E72");
    // 0x2e4ae0: 0xf1516c02  scd         $s1, 0x6C02($t2)
    ctx->pc = 0x2e4ae0u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4AE0 raw=0xF1516C02");
    // 0x2e4ae4: 0xc1514a12  ll          $s1, 0x4A12($t2)
    ctx->pc = 0x2e4ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 18962); SET_GPR_S32(ctx, 17, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x2e4ae8: 0xb053ad00  sdl         $s3, -0x5300($v0)
    ctx->pc = 0x2e4ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294946048); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4aec: 0x54b2a82f  bnel        $a1, $s2, . + 4 + (-0x57D1 << 2)
    ctx->pc = 0x2E4AECu;
    {
        const bool branch_taken_0x2e4aec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 18));
        if (branch_taken_0x2e4aec) {
            ctx->pc = 0x2E4AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4AECu;
            // 0x2e4af0: 0x5fa22a2f  .word       0x5FA22A2F                   # bgtzl       $sp, . + 4 + (0x2A2F << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E4AF0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEBACu;
            return;
        }
    }
    ctx->pc = 0x2E4AF4u;
    // 0x2e4af4: 0xab552020  swl         $s5, 0x2020($k0)
    ctx->pc = 0x2e4af4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4af8: 0x79515232  lq          $s1, 0x5232($t2)
    ctx->pc = 0x2e4af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 10), 21042)));
    // 0x2e4afc: 0xa462a828  sh          $v0, -0x57D8($v1)
    ctx->pc = 0x2e4afcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294944808), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e4b00: 0xaad52020  swl         $s5, 0x2020($s6)
    ctx->pc = 0x2e4b00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4b04: 0x78516832  lq          $s1, 0x6832($v0)
    ctx->pc = 0x2e4b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 2), 26674)));
    // 0x2e4b08: 0xa4a2a820  sh          $v0, -0x57E0($a1)
    ctx->pc = 0x2e4b08u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294944800), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e4b0c: 0xaa552020  swl         $s5, 0x2020($s2)
    ctx->pc = 0x2e4b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4b10: 0xa852a920  swl         $s2, -0x56E0($v0)
    ctx->pc = 0x2e4b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294945056); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4b14: 0xa0516830  sb          $s1, 0x6830($v0)
    ctx->pc = 0x2e4b14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4b18: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E4B18u;
    SET_GPR_U32(ctx, 31, 0x2E4B20u);
    ctx->pc = 0x2E4B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B18u;
    // 0x2e4b1c: 0xa0516830  sb          $s1, 0x6830($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2E4B18u, 0x2E4B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B20u;
label_2e4b20:
    // 0x2e4b20: 0xa0552010  sb          $s5, 0x2010($v0)
    ctx->pc = 0x2e4b20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8208), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4b24: 0xa0550032  sb          $s5, 0x32($v0)
    ctx->pc = 0x2e4b24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4b28: 0xb2514d32  sdl         $s1, 0x4D32($s2)
    ctx->pc = 0x2e4b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19762); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4b2c: 0xb0530930  sdl         $s3, 0x930($v0)
    ctx->pc = 0x2e4b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4b30: 0xa0516830  sb          $s1, 0x6830($v0)
    ctx->pc = 0x2e4b30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4b34: 0xa0516830  sb          $s1, 0x6830($v0)
    ctx->pc = 0x2e4b34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4b38: 0x90550950  lbu         $s5, 0x950($v0)
    ctx->pc = 0x2e4b38u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2384)));
    // 0x2e4b3c: 0x80550960  lb          $s5, 0x960($v0)
    ctx->pc = 0x2e4b3cu;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2400)));
    // 0x2e4b40: 0xca550833  lwc2        $21, 0x833($s2)
    ctx->pc = 0x2e4b40u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E4B40 raw=0xCA550833");
    // 0x2e4b44: 0xe0550836  sc          $s5, 0x836($v0)
    ctx->pc = 0x2e4b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2102); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 21)); SET_GPR_S32(ctx, 21, 1); } else { SET_GPR_S32(ctx, 21, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4b48: 0xa0d52810  sb          $s5, 0x2810($a2)
    ctx->pc = 0x2e4b48u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10256), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4b4c: 0xf0553830  scd         $s5, 0x3830($v0)
    ctx->pc = 0x2e4b4cu;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4B4C raw=0xF0553830");
    // 0x2e4b50: 0xa0538802  sb          $s3, -0x77FE($v0)
    ctx->pc = 0x2e4b50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294936578), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e4b54: 0xb0550970  sdl         $s5, 0x970($v0)
    ctx->pc = 0x2e4b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4b58: 0xe0550836  sc          $s5, 0x836($v0)
    ctx->pc = 0x2e4b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2102); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 21)); SET_GPR_S32(ctx, 21, 1); } else { SET_GPR_S32(ctx, 21, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4b5c: 0xa0d52810  sb          $s5, 0x2810($a2)
    ctx->pc = 0x2e4b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10256), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4b60: 0xf1516d22  scd         $s1, 0x6D22($t2)
    ctx->pc = 0x2e4b60u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4B60 raw=0xF1516D22");
    // 0x2e4b64: 0x6fa02e3e  ldr         $zero, 0x2E3E($sp)
    ctx->pc = 0x2e4b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11838); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x2e4b68: 0xa05b6010  sb          $k1, 0x6010($v0)
    ctx->pc = 0x2e4b68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24592), (uint8_t)GPR_U32(ctx, 27));
    // 0x2e4b6c: 0x54b2a82f  bnel        $a1, $s2, . + 4 + (-0x57D1 << 2)
    ctx->pc = 0x2E4B6Cu;
    {
        const bool branch_taken_0x2e4b6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 18));
        if (branch_taken_0x2e4b6c) {
            ctx->pc = 0x2E4B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4B6Cu;
            // 0x2e4b70: 0x5fa22a2f  .word       0x5FA22A2F                   # bgtzl       $sp, . + 4 + (0x2A2F << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E4B70 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEC2Cu;
            return;
        }
    }
    ctx->pc = 0x2E4B74u;
    // 0x2e4b74: 0xab552020  swl         $s5, 0x2020($k0)
    ctx->pc = 0x2e4b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4b78: 0x78516832  lq          $s1, 0x6832($v0)
    ctx->pc = 0x2e4b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 2), 26674)));
    // 0x2e4b7c: 0xa462a828  sh          $v0, -0x57D8($v1)
    ctx->pc = 0x2e4b7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294944808), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e4b80: 0xaad52020  swl         $s5, 0x2020($s6)
    ctx->pc = 0x2e4b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4b84: 0xa852a920  swl         $s2, -0x56E0($v0)
    ctx->pc = 0x2e4b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294945056); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4b88: 0xa4a2a820  sh          $v0, -0x57E0($a1)
    ctx->pc = 0x2e4b88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294944800), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e4b8c: 0xaa552020  swl         $s5, 0x2020($s2)
    ctx->pc = 0x2e4b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4b90: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E4B90u;
    SET_GPR_U32(ctx, 31, 0x2E4B98u);
    ctx->pc = 0x2E4B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B90u;
    // 0x2e4b94: 0xa0516830  sb          $s1, 0x6830($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2E4B90u, 0x2E4B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4B98u;
label_2e4b98:
    // 0x2e4b98: 0xa0552010  sb          $s5, 0x2010($v0)
    ctx->pc = 0x2e4b98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8208), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4b9c: 0xa0550032  sb          $s5, 0x32($v0)
    ctx->pc = 0x2e4b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4ba0: 0xb2514332  sdl         $s1, 0x4332($s2)
    ctx->pc = 0x2e4ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 17202); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4ba4: 0xb0530930  sdl         $s3, 0x930($v0)
    ctx->pc = 0x2e4ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4ba8: 0xa0516830  sb          $s1, 0x6830($v0)
    ctx->pc = 0x2e4ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4bac: 0xa0516830  sb          $s1, 0x6830($v0)
    ctx->pc = 0x2e4bacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4bb0: 0x90550950  lbu         $s5, 0x950($v0)
    ctx->pc = 0x2e4bb0u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2384)));
    // 0x2e4bb4: 0x80550960  lb          $s5, 0x960($v0)
    ctx->pc = 0x2e4bb4u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2400)));
    // 0x2e4bb8: 0xca550833  lwc2        $21, 0x833($s2)
    ctx->pc = 0x2e4bb8u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E4BB8 raw=0xCA550833");
    // 0x2e4bbc: 0xe0550836  sc          $s5, 0x836($v0)
    ctx->pc = 0x2e4bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2102); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 21)); SET_GPR_S32(ctx, 21, 1); } else { SET_GPR_S32(ctx, 21, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4bc0: 0xa0d52810  sb          $s5, 0x2810($a2)
    ctx->pc = 0x2e4bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10256), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4bc4: 0xf0553830  scd         $s5, 0x3830($v0)
    ctx->pc = 0x2e4bc4u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4BC4 raw=0xF0553830");
    // 0x2e4bc8: 0xe0538801  sc          $s3, -0x77FF($v0)
    ctx->pc = 0x2e4bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294936577); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 19)); SET_GPR_S32(ctx, 19, 1); } else { SET_GPR_S32(ctx, 19, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4bcc: 0xb0550970  sdl         $s5, 0x970($v0)
    ctx->pc = 0x2e4bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4bd0: 0xe0550836  sc          $s5, 0x836($v0)
    ctx->pc = 0x2e4bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2102); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 21)); SET_GPR_S32(ctx, 21, 1); } else { SET_GPR_S32(ctx, 21, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4bd4: 0xa0d52810  sb          $s5, 0x2810($a2)
    ctx->pc = 0x2e4bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10256), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4bd8: 0xf1516d22  scd         $s1, 0x6D22($t2)
    ctx->pc = 0x2e4bd8u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4BD8 raw=0xF1516D22");
    // 0x2e4bdc: 0x6fa02e3e  ldr         $zero, 0x2E3E($sp)
    ctx->pc = 0x2e4bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11838); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x2e4be0: 0xa05b6010  sb          $k1, 0x6010($v0)
    ctx->pc = 0x2e4be0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24592), (uint8_t)GPR_U32(ctx, 27));
    // 0x2e4be4: 0x54b2a82f  bnel        $a1, $s2, . + 4 + (-0x57D1 << 2)
    ctx->pc = 0x2E4BE4u;
    {
        const bool branch_taken_0x2e4be4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 18));
        if (branch_taken_0x2e4be4) {
            ctx->pc = 0x2E4BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4BE4u;
            // 0x2e4be8: 0x5fa22a2f  .word       0x5FA22A2F                   # bgtzl       $sp, . + 4 + (0x2A2F << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E4BE8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CECA4u;
            return;
        }
    }
    ctx->pc = 0x2E4BECu;
    // 0x2e4bec: 0xab552020  swl         $s5, 0x2020($k0)
    ctx->pc = 0x2e4becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4bf0: 0x78516832  lq          $s1, 0x6832($v0)
    ctx->pc = 0x2e4bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 2), 26674)));
    // 0x2e4bf4: 0xa462a828  sh          $v0, -0x57D8($v1)
    ctx->pc = 0x2e4bf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294944808), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e4bf8: 0xaad52020  swl         $s5, 0x2020($s6)
    ctx->pc = 0x2e4bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4bfc: 0xa852a920  swl         $s2, -0x56E0($v0)
    ctx->pc = 0x2e4bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294945056); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4c00: 0xa4a2a820  sh          $v0, -0x57E0($a1)
    ctx->pc = 0x2e4c00u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294944800), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e4c04: 0xaa552020  swl         $s5, 0x2020($s2)
    ctx->pc = 0x2e4c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4c08: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E4C08u;
    SET_GPR_U32(ctx, 31, 0x2E4C10u);
    ctx->pc = 0x2E4C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C08u;
    // 0x2e4c0c: 0xa0516830  sb          $s1, 0x6830($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2E4C08u, 0x2E4C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C10u;
label_2e4c10:
    // 0x2e4c10: 0xa0552010  sb          $s5, 0x2010($v0)
    ctx->pc = 0x2e4c10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8208), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4c14: 0xa0550032  sb          $s5, 0x32($v0)
    ctx->pc = 0x2e4c14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4c18: 0xa0531214  sb          $s3, 0x1214($v0)
    ctx->pc = 0x2e4c18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4628), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e4c1c: 0xb2516d32  sdl         $s1, 0x6D32($s2)
    ctx->pc = 0x2e4c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4c20: 0xb0530930  sdl         $s3, 0x930($v0)
    ctx->pc = 0x2e4c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4c24: 0xa0516830  sb          $s1, 0x6830($v0)
    ctx->pc = 0x2e4c24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4c28: 0xa0516830  sb          $s1, 0x6830($v0)
    ctx->pc = 0x2e4c28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4c2c: 0x90550950  lbu         $s5, 0x950($v0)
    ctx->pc = 0x2e4c2cu;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2384)));
    // 0x2e4c30: 0x80550960  lb          $s5, 0x960($v0)
    ctx->pc = 0x2e4c30u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2400)));
    // 0x2e4c34: 0xca550833  lwc2        $21, 0x833($s2)
    ctx->pc = 0x2e4c34u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E4C34 raw=0xCA550833");
    // 0x2e4c38: 0xe0550836  sc          $s5, 0x836($v0)
    ctx->pc = 0x2e4c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2102); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 21)); SET_GPR_S32(ctx, 21, 1); } else { SET_GPR_S32(ctx, 21, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4c3c: 0xa0d52810  sb          $s5, 0x2810($a2)
    ctx->pc = 0x2e4c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10256), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4c40: 0xf0553830  scd         $s5, 0x3830($v0)
    ctx->pc = 0x2e4c40u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4C40 raw=0xF0553830");
    // 0x2e4c44: 0xa0538808  sb          $s3, -0x77F8($v0)
    ctx->pc = 0x2e4c44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294936584), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e4c48: 0xb0550970  sdl         $s5, 0x970($v0)
    ctx->pc = 0x2e4c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4c4c: 0xe0550836  sc          $s5, 0x836($v0)
    ctx->pc = 0x2e4c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2102); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 21)); SET_GPR_S32(ctx, 21, 1); } else { SET_GPR_S32(ctx, 21, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4c50: 0xa0d52810  sb          $s5, 0x2810($a2)
    ctx->pc = 0x2e4c50u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10256), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4c54: 0xf1516d22  scd         $s1, 0x6D22($t2)
    ctx->pc = 0x2e4c54u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4C54 raw=0xF1516D22");
    // 0x2e4c58: 0x1fa02e3e  bgtz        $sp, . + 4 + (0x2E3E << 2)
    ctx->pc = 0x2E4C58u;
    {
        const bool branch_taken_0x2e4c58 = (GPR_S32(ctx, 29) > 0);
        ctx->pc = 0x2E4C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C58u;
        // 0x2e4c5c: 0xa05b6010  sb          $k1, 0x6010($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 24592), (uint8_t)GPR_U32(ctx, 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c58) {
            ctx->pc = 0x2F0554u;
            return;
        }
    }
    ctx->pc = 0x2E4C60u;
    // 0x2e4c60: 0x54b2a82f  bnel        $a1, $s2, . + 4 + (-0x57D1 << 2)
    ctx->pc = 0x2E4C60u;
    {
        const bool branch_taken_0x2e4c60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 18));
        if (branch_taken_0x2e4c60) {
            ctx->pc = 0x2E4C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4C60u;
            // 0x2e4c64: 0x5fa22a2f  .word       0x5FA22A2F                   # bgtzl       $sp, . + 4 + (0x2A2F << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E4C64 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CED20u;
            return;
        }
    }
    ctx->pc = 0x2E4C68u;
    // 0x2e4c68: 0xab552020  swl         $s5, 0x2020($k0)
    ctx->pc = 0x2e4c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4c6c: 0x78516832  lq          $s1, 0x6832($v0)
    ctx->pc = 0x2e4c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 2), 26674)));
    // 0x2e4c70: 0xa462a828  sh          $v0, -0x57D8($v1)
    ctx->pc = 0x2e4c70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294944808), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e4c74: 0xaad52020  swl         $s5, 0x2020($s6)
    ctx->pc = 0x2e4c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4c78: 0xa852a920  swl         $s2, -0x56E0($v0)
    ctx->pc = 0x2e4c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294945056); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4c7c: 0xa4a2a820  sh          $v0, -0x57E0($a1)
    ctx->pc = 0x2e4c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294944800), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e4c80: 0xaa552020  swl         $s5, 0x2020($s2)
    ctx->pc = 0x2e4c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4c84: 0xa0516830  sb          $s1, 0x6830($v0)
    ctx->pc = 0x2e4c84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4c88: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E4C88u;
    SET_GPR_U32(ctx, 31, 0x2E4C90u);
    ctx->pc = 0x2E4C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C88u;
    // 0x2e4c8c: 0xa0516830  sb          $s1, 0x6830($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2E4C88u, 0x2E4C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4C90u;
label_2e4c90:
    // 0x2e4c90: 0xa0552010  sb          $s5, 0x2010($v0)
    ctx->pc = 0x2e4c90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8208), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4c94: 0xa0550032  sb          $s5, 0x32($v0)
    ctx->pc = 0x2e4c94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4c98: 0xb2515532  sdl         $s1, 0x5532($s2)
    ctx->pc = 0x2e4c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 21810); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4c9c: 0xb0530930  sdl         $s3, 0x930($v0)
    ctx->pc = 0x2e4c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4ca0: 0xa0516830  sb          $s1, 0x6830($v0)
    ctx->pc = 0x2e4ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4ca4: 0xa0516830  sb          $s1, 0x6830($v0)
    ctx->pc = 0x2e4ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4ca8: 0x90550950  lbu         $s5, 0x950($v0)
    ctx->pc = 0x2e4ca8u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2384)));
    // 0x2e4cac: 0x80550960  lb          $s5, 0x960($v0)
    ctx->pc = 0x2e4cacu;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2400)));
    // 0x2e4cb0: 0xca550833  lwc2        $21, 0x833($s2)
    ctx->pc = 0x2e4cb0u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E4CB0 raw=0xCA550833");
    // 0x2e4cb4: 0xe0550836  sc          $s5, 0x836($v0)
    ctx->pc = 0x2e4cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2102); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 21)); SET_GPR_S32(ctx, 21, 1); } else { SET_GPR_S32(ctx, 21, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4cb8: 0xa0d52810  sb          $s5, 0x2810($a2)
    ctx->pc = 0x2e4cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10256), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4cbc: 0xf0553830  scd         $s5, 0x3830($v0)
    ctx->pc = 0x2e4cbcu;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4CBC raw=0xF0553830");
    // 0x2e4cc0: 0x8053880a  lb          $s3, -0x77F6($v0)
    ctx->pc = 0x2e4cc0u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294936586)));
    // 0x2e4cc4: 0xb0550970  sdl         $s5, 0x970($v0)
    ctx->pc = 0x2e4cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4cc8: 0xe0550836  sc          $s5, 0x836($v0)
    ctx->pc = 0x2e4cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2102); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 21)); SET_GPR_S32(ctx, 21, 1); } else { SET_GPR_S32(ctx, 21, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4ccc: 0xa0d52810  sb          $s5, 0x2810($a2)
    ctx->pc = 0x2e4cccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10256), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4cd0: 0xf1516d22  scd         $s1, 0x6D22($t2)
    ctx->pc = 0x2e4cd0u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4CD0 raw=0xF1516D22");
    // 0x2e4cd4: 0x6fa02e3e  ldr         $zero, 0x2E3E($sp)
    ctx->pc = 0x2e4cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11838); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x2e4cd8: 0xa05b6010  sb          $k1, 0x6010($v0)
    ctx->pc = 0x2e4cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24592), (uint8_t)GPR_U32(ctx, 27));
    // 0x2e4cdc: 0x54b2a82f  bnel        $a1, $s2, . + 4 + (-0x57D1 << 2)
    ctx->pc = 0x2E4CDCu;
    {
        const bool branch_taken_0x2e4cdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 18));
        if (branch_taken_0x2e4cdc) {
            ctx->pc = 0x2E4CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4CDCu;
            // 0x2e4ce0: 0x5fa22a2f  .word       0x5FA22A2F                   # bgtzl       $sp, . + 4 + (0x2A2F << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2E4CE0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CED9Cu;
            return;
        }
    }
    ctx->pc = 0x2E4CE4u;
    // 0x2e4ce4: 0xab552020  swl         $s5, 0x2020($k0)
    ctx->pc = 0x2e4ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4ce8: 0x78516832  lq          $s1, 0x6832($v0)
    ctx->pc = 0x2e4ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 2), 26674)));
    // 0x2e4cec: 0xa462a828  sh          $v0, -0x57D8($v1)
    ctx->pc = 0x2e4cecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294944808), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e4cf0: 0xaad52020  swl         $s5, 0x2020($s6)
    ctx->pc = 0x2e4cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4cf4: 0xa852a920  swl         $s2, -0x56E0($v0)
    ctx->pc = 0x2e4cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294945056); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4cf8: 0xa4a2a820  sh          $v0, -0x57E0($a1)
    ctx->pc = 0x2e4cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294944800), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e4cfc: 0xaa552020  swl         $s5, 0x2020($s2)
    ctx->pc = 0x2e4cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 21); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4d00: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E4D00u;
    SET_GPR_U32(ctx, 31, 0x2E4D08u);
    ctx->pc = 0x2E4D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D00u;
    // 0x2e4d04: 0xa0516830  sb          $s1, 0x6830($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2E4D00u, 0x2E4D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D08u;
label_2e4d08:
    // 0x2e4d08: 0xa0552010  sb          $s5, 0x2010($v0)
    ctx->pc = 0x2e4d08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8208), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4d0c: 0xa0550032  sb          $s5, 0x32($v0)
    ctx->pc = 0x2e4d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4d10: 0xb2514732  sdl         $s1, 0x4732($s2)
    ctx->pc = 0x2e4d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 18226); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4d14: 0xb0530930  sdl         $s3, 0x930($v0)
    ctx->pc = 0x2e4d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4d18: 0xa0516830  sb          $s1, 0x6830($v0)
    ctx->pc = 0x2e4d18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4d1c: 0xa0516830  sb          $s1, 0x6830($v0)
    ctx->pc = 0x2e4d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26672), (uint8_t)GPR_U32(ctx, 17));
    // 0x2e4d20: 0x90550950  lbu         $s5, 0x950($v0)
    ctx->pc = 0x2e4d20u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2384)));
    // 0x2e4d24: 0x80550960  lb          $s5, 0x960($v0)
    ctx->pc = 0x2e4d24u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2400)));
    // 0x2e4d28: 0xca550833  lwc2        $21, 0x833($s2)
    ctx->pc = 0x2e4d28u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E4D28 raw=0xCA550833");
    // 0x2e4d2c: 0xe0550836  sc          $s5, 0x836($v0)
    ctx->pc = 0x2e4d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2102); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 21)); SET_GPR_S32(ctx, 21, 1); } else { SET_GPR_S32(ctx, 21, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4d30: 0xa0d52810  sb          $s5, 0x2810($a2)
    ctx->pc = 0x2e4d30u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10256), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4d34: 0xf0553830  scd         $s5, 0x3830($v0)
    ctx->pc = 0x2e4d34u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4D34 raw=0xF0553830");
    // 0x2e4d38: 0xa0538808  sb          $s3, -0x77F8($v0)
    ctx->pc = 0x2e4d38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294936584), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e4d3c: 0xb0550970  sdl         $s5, 0x970($v0)
    ctx->pc = 0x2e4d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2416); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 21); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e4d40: 0xe0550836  sc          $s5, 0x836($v0)
    ctx->pc = 0x2e4d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 2102); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 21)); SET_GPR_S32(ctx, 21, 1); } else { SET_GPR_S32(ctx, 21, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4d44: 0xa0d52810  sb          $s5, 0x2810($a2)
    ctx->pc = 0x2e4d44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 10256), (uint8_t)GPR_U32(ctx, 21));
    // 0x2e4d48: 0xf1516d22  scd         $s1, 0x6D22($t2)
    ctx->pc = 0x2e4d48u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4D48 raw=0xF1516D22");
    // 0x2e4d4c: 0x6fa02e3e  ldr         $zero, 0x2E3E($sp)
    ctx->pc = 0x2e4d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11838); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x2e4d50: 0xa05b6010  sb          $k1, 0x6010($v0)
    ctx->pc = 0x2e4d50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24592), (uint8_t)GPR_U32(ctx, 27));
    // 0x2e4d54: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E4D54u;
    {
        const bool branch_taken_0x2e4d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4d54) {
            ctx->pc = 0x2E4D84u;
            goto label_2e4d84;
        }
    }
    ctx->pc = 0x2E4D5Cu;
    // 0x2e4d5c: 0x84574953  lh          $s7, 0x4953($v0)
    ctx->pc = 0x2e4d5cu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18771)));
    // 0x2e4d60: 0x8c9749ed  lw          $s7, 0x49ED($a0)
    ctx->pc = 0x2e4d60u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18925)));
    // 0x2e4d64: 0xa25490b1  sb          $s4, -0x6F4F($s2)
    ctx->pc = 0x2e4d64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4294938801), (uint8_t)GPR_U32(ctx, 20));
    // 0x2e4d68: 0xcea95be  jal         func_3AA56F8
    ctx->pc = 0x2E4D68u;
    SET_GPR_U32(ctx, 31, 0x2E4D70u);
    ctx->pc = 0x2E4D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D68u;
    // 0x2e4d6c: 0xfc82005a  sd          $v0, 0x5A($a0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 4), 90), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA56F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA56F8u, 0x2E4D68u, 0x2E4D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D70u;
label_2e4d70:
    // 0x2e4d70: 0x8cd0a595  lw          $s0, -0x5A6B($a2)
    ctx->pc = 0x2e4d70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294944149)));
    // 0x2e4d74: 0xf2882df3  scd         $t0, 0x2DF3($s4)
    ctx->pc = 0x2e4d74u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4D74 raw=0xF2882DF3");
    // 0x2e4d78: 0xcb1cadcd  lwc2        $28, -0x5233($t8)
    ctx->pc = 0x2e4d78u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2E4D78 raw=0xCB1CADCD");
    // 0x2e4d7c: 0xf28829b3  scd         $t0, 0x29B3($s4)
    ctx->pc = 0x2e4d7cu;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x2E4D7C raw=0xF28829B3");
    // 0x2e4d80: 0x0  nop
    ctx->pc = 0x2e4d80u;
    // NOP
label_2e4d84:
    // 0x2e4d84: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e4d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e4d88: 0x24424d74  addiu       $v0, $v0, 0x4D74
    ctx->pc = 0x2e4d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19828));
    // 0x2e4d8c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e4d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e4d90: 0x24844d54  addiu       $a0, $a0, 0x4D54
    ctx->pc = 0x2e4d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19796));
    // 0x2e4d94: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e4d94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e4d98: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e4d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e4d9c: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E4D9Cu;
    SET_GPR_U32(ctx, 31, 0x2E4DA4u);
    ctx->pc = 0x2E4DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D9Cu;
    // 0x2e4da0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2E4D9Cu, 0x2E4DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DA4u;
label_2e4da4:
    // 0x2e4da4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2e4da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4da8: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x2e4da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2e4dac: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x2e4dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x2e4db0: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x2e4db0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2e4db4: 0xdfb30218  ld          $s3, 0x218($sp)
    ctx->pc = 0x2e4db4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x2e4db8: 0xdfb40220  ld          $s4, 0x220($sp)
    ctx->pc = 0x2e4db8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2e4dbc: 0xdfb50228  ld          $s5, 0x228($sp)
    ctx->pc = 0x2e4dbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2e4dc0: 0xdfb60230  ld          $s6, 0x230($sp)
    ctx->pc = 0x2e4dc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2e4dc4: 0xdfb70238  ld          $s7, 0x238($sp)
    ctx->pc = 0x2e4dc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x2e4dc8: 0xdfbe0240  ld          $fp, 0x240($sp)
    ctx->pc = 0x2e4dc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2e4dcc: 0xdfbf0248  ld          $ra, 0x248($sp)
    ctx->pc = 0x2e4dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x2e4dd0: 0xc7b60260  lwc1        $f22, 0x260($sp)
    ctx->pc = 0x2e4dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e4dd4: 0xc7b50258  lwc1        $f21, 0x258($sp)
    ctx->pc = 0x2e4dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e4dd8: 0xc7b40250  lwc1        $f20, 0x250($sp)
    ctx->pc = 0x2e4dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e4ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DDCu;
        // 0x2e4de0: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4DE4u;
    // 0x2e4de4: 0x0  nop
    ctx->pc = 0x2e4de4u;
    // NOP
}
