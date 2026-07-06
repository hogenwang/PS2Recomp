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

// Function: sub_0027A480
// Address: 0x27a480 - 0x27b090
void sub_0027A480_0x27a480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A480_0x27a480");
#endif

    switch (ctx->pc) {
        case 0x27a4dcu: goto label_27a4dc;
        case 0x27a508u: goto label_27a508;
        case 0x27a510u: goto label_27a510;
        case 0x27a518u: goto label_27a518;
        case 0x27a6e0u: goto label_27a6e0;
        case 0x27a6e8u: goto label_27a6e8;
        case 0x27a744u: goto label_27a744;
        case 0x27a7b4u: goto label_27a7b4;
        case 0x27a7c8u: goto label_27a7c8;
        case 0x27a828u: goto label_27a828;
        case 0x27a89cu: goto label_27a89c;
        case 0x27a914u: goto label_27a914;
        case 0x27a928u: goto label_27a928;
        case 0x27a934u: goto label_27a934;
        case 0x27a98cu: goto label_27a98c;
        case 0x27a9a8u: goto label_27a9a8;
        case 0x27a9f8u: goto label_27a9f8;
        case 0x27aa7cu: goto label_27aa7c;
        case 0x27aa98u: goto label_27aa98;
        case 0x27ab08u: goto label_27ab08;
        case 0x27ac3cu: goto label_27ac3c;
        case 0x27acacu: goto label_27acac;
        case 0x27acc8u: goto label_27acc8;
        case 0x27acccu: goto label_27accc;
        case 0x27acd4u: goto label_27acd4;
        case 0x27ad5cu: goto label_27ad5c;
        case 0x27add4u: goto label_27add4;
        case 0x27ade4u: goto label_27ade4;
        case 0x27ae68u: goto label_27ae68;
        case 0x27aedcu: goto label_27aedc;
        case 0x27aef4u: goto label_27aef4;
        case 0x27aef8u: goto label_27aef8;
        case 0x27aefcu: goto label_27aefc;
        case 0x27af30u: goto label_27af30;
        case 0x27afa8u: goto label_27afa8;
        case 0x27aff8u: goto label_27aff8;
        case 0x27b040u: goto label_27b040;
        case 0x27b060u: goto label_27b060;
        default: break;
    }

    ctx->pc = 0x27a480u;

label_27a480:
    // 0x27a480: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27a484: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27a484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27a488: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27a488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a48c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27a48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27a490: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27a490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27a494: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27a494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27a498: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27a498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27a49c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x27a49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x27a4a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x27a4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x27a4a4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x27a4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x27a4a8: 0x126002ed  beqz        $s3, . + 4 + (0x2ED << 2)
    ctx->pc = 0x27A4A8u;
    {
        const bool branch_taken_0x27a4a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4A8u;
        // 0x27a4ac: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4a8) {
            ctx->pc = 0x27B060u;
            goto label_27b060;
        }
    }
    ctx->pc = 0x27A4B0u;
    // 0x27a4b0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27a4b4: 0x2463a4fc  addiu       $v1, $v1, -0x5B04
    ctx->pc = 0x27a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943996));
    // 0x27a4b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a4bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A4BCu;
    {
        const bool branch_taken_0x27a4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a4bc) {
            ctx->pc = 0x27A4DCu;
            goto label_27a4dc;
        }
    }
    ctx->pc = 0x27A4C4u;
    // 0x27a4c4: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27a4c8: 0x2484a510  addiu       $a0, $a0, -0x5AF0
    ctx->pc = 0x27a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944016));
    // 0x27a4cc: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27a4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27a4d0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27a4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27a4d4: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27A4D4u;
    SET_GPR_U32(ctx, 31, 0x27A4DCu);
    ctx->pc = 0x27A4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A4D4u;
    // 0x27a4d8: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27A4D4u, 0x27A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4DCu;
label_27a4dc:
    // 0x27a4dc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27A4DCu;
    {
        const bool branch_taken_0x27a4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a4dc) {
            ctx->pc = 0x27A510u;
            goto label_27a510;
        }
    }
    ctx->pc = 0x27A4E4u;
    // 0x27a4e4: 0xfc779362  sd          $s7, -0x6C9E($v1)
    ctx->pc = 0x27a4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294939490), GPR_U64(ctx, 23));
    // 0x27a4e8: 0x869fb4c3  lh          $ra, -0x4B3D($s4)
    ctx->pc = 0x27a4e8u;
    SET_GPR_S32(ctx, 31, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4294948035)));
    // 0x27a4ec: 0x8ed77b75  lw          $s7, 0x7B75($s6)
    ctx->pc = 0x27a4ecu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 31605)));
    // 0x27a4f0: 0x2515820  add         $t3, $s2, $s1
    ctx->pc = 0x27a4f0u;
    {     int32_t rs_val = GPR_S32(ctx, 18);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
    // 0x27a4f4: 0xa0d28ed1  sb          $s2, -0x712F($a2)
    ctx->pc = 0x27a4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294938321), (uint8_t)GPR_U32(ctx, 18));
    // 0x27a4f8: 0xa3bb9741  sb          $k1, -0x68BF($sp)
    ctx->pc = 0x27a4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4294940481), (uint8_t)GPR_U32(ctx, 27));
    // 0x27a4fc: 0x0  nop
    ctx->pc = 0x27a4fcu;
    // NOP
    // 0x27a500: 0xe847d79  jal         func_A11F5E4
    ctx->pc = 0x27A500u;
    SET_GPR_U32(ctx, 31, 0x27A508u);
    ctx->pc = 0x27A504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A500u;
    // 0x27a504: 0x980d27b0  lwr         $t5, 0x27B0($zero) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10160); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xA11F5E4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA11F5E4u, 0x27A500u, 0x27A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A508u;
label_27a508:
    // 0x27a508: 0xe847cd1  jal         func_A11F344
    ctx->pc = 0x27A508u;
    SET_GPR_U32(ctx, 31, 0x27A510u);
    ctx->pc = 0xA11F344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA11F344u, 0x27A508u, 0x27A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A510u;
label_27a510:
    // 0x27a510: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27a510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27a514: 0x8c4334b8  lw          $v1, 0x34B8($v0)
    ctx->pc = 0x27a514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13496)));
label_27a518:
    // 0x27a518: 0xb122aadb  sdl         $v0, -0x5525($t1)
    ctx->pc = 0x27a518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294945499); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27a51c: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x27a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x27a520: 0xa12288d3  sb          $v0, -0x772D($t1)
    ctx->pc = 0x27a520u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4294936787), (uint8_t)GPR_U32(ctx, 2));
    // 0x27a524: 0x212280d6  addi        $v0, $t1, -0x7F2A
    ctx->pc = 0x27a524u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294934742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27a528: 0x212280d6  addi        $v0, $t1, -0x7F2A
    ctx->pc = 0x27a528u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294934742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27a52c: 0x212280d6  addi        $v0, $t1, -0x7F2A
    ctx->pc = 0x27a52cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294934742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27a530: 0x971236e0  lhu         $s2, 0x36E0($t8)
    ctx->pc = 0x27a530u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 14048)));
    // 0x27a534: 0x95331461  lhu         $s3, 0x1461($t1)
    ctx->pc = 0x27a534u;
    SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 5217)));
    // 0x27a538: 0x1196b946  beq         $t4, $s6, . + 4 + (-0x46BA << 2)
    ctx->pc = 0x27A538u;
    {
        const bool branch_taken_0x27a538 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 22));
        ctx->pc = 0x27A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A538u;
        // 0x27a53c: 0x1395bbc6  beq         $gp, $s5, . + 4 + (-0x443A << 2) (Delay Slot)
        // Likely branch instruction at 0x27A53C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a538) {
            ctx->pc = 0x268A54u;
            return;
        }
    }
    ctx->pc = 0x27A540u;
    // 0x27a540: 0x911b91e4  lbu         $k1, -0x6E1C($t0)
    ctx->pc = 0x27a540u;
    SET_GPR_U32(ctx, 27, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294939108)));
    // 0x27a544: 0x963030e4  lhu         $s0, 0x30E4($s1)
    ctx->pc = 0x27a544u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12516)));
    // 0x27a548: 0x971236e7  lhu         $s2, 0x36E7($t8)
    ctx->pc = 0x27a548u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 24), 14055)));
    // 0x27a54c: 0x963080e4  lhu         $s0, -0x7F1C($s1)
    ctx->pc = 0x27a54cu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294934756)));
    // 0x27a550: 0x212280d6  addi        $v0, $t1, -0x7F2A
    ctx->pc = 0x27a550u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294934742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27a554: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27a554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27a558: 0x2484a530  addiu       $a0, $a0, -0x5AD0
    ctx->pc = 0x27a558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944048));
    // 0x27a55c: 0x3942cf56  xori        $v0, $t2, 0xCF56
    ctx->pc = 0x27a55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)53078);
    // 0x27a560: 0x39c2cf52  xori        $v0, $t6, 0xCF52
    ctx->pc = 0x27a560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)53074);
    // 0x27a564: 0x3842cf5e  xori        $v0, $v0, 0xCF5E
    ctx->pc = 0x27a564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)53086);
    // 0x27a568: 0x38c2cf5a  xori        $v0, $a2, 0xCF5A
    ctx->pc = 0x27a568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)53082);
    // 0x27a56c: 0x3b42cf46  xori        $v0, $k0, 0xCF46
    ctx->pc = 0x27a56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)53062);
    // 0x27a570: 0x3bc2cf42  xori        $v0, $fp, 0xCF42
    ctx->pc = 0x27a570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)53058);
    // 0x27a574: 0x3a42cf4e  xori        $v0, $s2, 0xCF4E
    ctx->pc = 0x27a574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)53070);
    // 0x27a578: 0x3ac2cf4a  xori        $v0, $s6, 0xCF4A
    ctx->pc = 0x27a578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)53066);
    // 0x27a57c: 0x3ec2cf76  .word       0x3EC2CF76                   # lui         $v0, 0xCF76 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53110 << 16));
    // 0x27a580: 0x809e574  j           func_2795D0
    ctx->pc = 0x27A580u;
    ctx->pc = 0x27A584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A580u;
    // 0x27a584: 0x3fa2d37e  .word       0x3FA2D37E                   # lui         $v0, 0xD37E # 03A00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54142 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    sub_002795D0_0x2795d0(rdram, ctx, runtime); return;
    ctx->pc = 0x27A588u;
    // 0x27a588: 0x8c4353d0  lw          $v1, 0x53D0($v0)
    ctx->pc = 0x27a588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21456)));
    // 0x27a58c: 0xb123aa8c  sdl         $v1, -0x5574($t1)
    ctx->pc = 0x27a58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294945420); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27a590: 0x3942cf56  xori        $v0, $t2, 0xCF56
    ctx->pc = 0x27a590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)53078);
    // 0x27a594: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x27a594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x27a598: 0x3c0b01c3  lui         $t3, 0x1C3
    ctx->pc = 0x27a598u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)451 << 16));
    // 0x27a59c: 0x8c4553a0  lw          $a1, 0x53A0($v0)
    ctx->pc = 0x27a59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21408)));
    // 0x27a5a0: 0x3c0601c3  lui         $a2, 0x1C3
    ctx->pc = 0x27a5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)451 << 16));
    // 0x27a5a4: 0x8d635390  lw          $v1, 0x5390($t3)
    ctx->pc = 0x27a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 21392)));
    // 0x27a5a8: 0xb3b6a1c6  sdl         $s6, -0x5E3A($sp)
    ctx->pc = 0x27a5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294943174); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27a5ac: 0x8cc453a4  lw          $a0, 0x53A4($a2)
    ctx->pc = 0x27a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 21412)));
    // 0x27a5b0: 0x33aaa0d5  andi        $t2, $sp, 0xA0D5
    ctx->pc = 0x27a5b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) & (uint64_t)(uint16_t)41173);
    // 0x27a5b4: 0x8322a0c7  lb          $v0, -0x5F39($t9)
    ctx->pc = 0x27a5b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 25), 4294942919)));
    // 0x27a5b8: 0xa0ae8043  sb          $t6, -0x7FBD($a1)
    ctx->pc = 0x27a5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294934595), (uint8_t)GPR_U32(ctx, 14));
    // 0x27a5bc: 0x3122a8d9  andi        $v0, $t1, 0xA8D9
    ctx->pc = 0x27a5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)43225);
    // 0x27a5c0: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x27a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x27a5c4: 0x212288d1  addi        $v0, $t1, -0x772F
    ctx->pc = 0x27a5c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294936785, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27a5c8: 0x212280d6  addi        $v0, $t1, -0x7F2A
    ctx->pc = 0x27a5c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294934742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27a5cc: 0x212280d6  addi        $v0, $t1, -0x7F2A
    ctx->pc = 0x27a5ccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294934742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27a5d0: 0x212280d6  addi        $v0, $t1, -0x7F2A
    ctx->pc = 0x27a5d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294934742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27a5d4: 0x16183563  bne         $s0, $t8, . + 4 + (0x3563 << 2)
    ctx->pc = 0x27A5D4u;
    {
        const bool branch_taken_0x27a5d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 24));
        ctx->pc = 0x27A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5D4u;
        // 0x27a5d8: 0x169ab446  bne         $s4, $k0, . + 4 + (-0x4BBA << 2) (Delay Slot)
        // Likely branch instruction at 0x27A5D8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5d4) {
            ctx->pc = 0x287B64u;
            return;
        }
    }
    ctx->pc = 0x27A5DCu;
    // 0x27a5dc: 0x1398b9e1  beq         $gp, $t8, . + 4 + (-0x461F << 2)
    ctx->pc = 0x27A5DCu;
    {
        const bool branch_taken_0x27a5dc = (GPR_U64(ctx, 28) == GPR_U64(ctx, 24));
        ctx->pc = 0x27A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5DCu;
        // 0x27a5e0: 0x3b12b740  xori        $s2, $t8, 0xB740 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 24) ^ (uint64_t)(uint16_t)46912);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5dc) {
            ctx->pc = 0x268D64u;
            return;
        }
    }
    ctx->pc = 0x27A5E4u;
    // 0x27a5e4: 0xb712b761  sdr         $s2, -0x489F($t8)
    ctx->pc = 0x27a5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294948705); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27a5e8: 0xbb12b76d  swr         $s2, -0x4893($t8)
    ctx->pc = 0x27a5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 4294948717); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27a5ec: 0x11943546  beq         $t4, $s4, . + 4 + (0x3546 << 2)
    ctx->pc = 0x27A5ECu;
    {
        const bool branch_taken_0x27a5ec = (GPR_U64(ctx, 12) == GPR_U64(ctx, 20));
        ctx->pc = 0x27A5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5ECu;
        // 0x27a5f0: 0xb892b264  swr         $s2, -0x4D9C($a0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294947428); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5ec) {
            ctx->pc = 0x287B08u;
            return;
        }
    }
    ctx->pc = 0x27A5F4u;
    // 0x27a5f4: 0x13bb37e1  beq         $sp, $k1, . + 4 + (0x37E1 << 2)
    ctx->pc = 0x27A5F4u;
    {
        const bool branch_taken_0x27a5f4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 27));
        ctx->pc = 0x27A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5F4u;
        // 0x27a5f8: 0x212280d6  addi        $v0, $t1, -0x7F2A (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294934742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5f4) {
            ctx->pc = 0x28857Cu;
            return;
        }
    }
    ctx->pc = 0x27A5FCu;
    // 0x27a5fc: 0x212280d6  addi        $v0, $t1, -0x7F2A
    ctx->pc = 0x27a5fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294934742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27a600: 0x212280d6  addi        $v0, $t1, -0x7F2A
    ctx->pc = 0x27a600u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294934742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27a604: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27a604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27a608: 0x2484a5d4  addiu       $a0, $a0, -0x5A2C
    ctx->pc = 0x27a608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944212));
    // 0x27a60c: 0x3942cf56  xori        $v0, $t2, 0xCF56
    ctx->pc = 0x27a60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)53078);
    // 0x27a610: 0x39c2cf52  xori        $v0, $t6, 0xCF52
    ctx->pc = 0x27a610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)53074);
    // 0x27a614: 0x3842cf5e  xori        $v0, $v0, 0xCF5E
    ctx->pc = 0x27a614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)53086);
    // 0x27a618: 0x38c2cf5a  xori        $v0, $a2, 0xCF5A
    ctx->pc = 0x27a618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)53082);
    // 0x27a61c: 0x3b42cf46  xori        $v0, $k0, 0xCF46
    ctx->pc = 0x27a61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)53062);
    // 0x27a620: 0x3bc2cf42  xori        $v0, $fp, 0xCF42
    ctx->pc = 0x27a620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)53058);
    // 0x27a624: 0x3a42cf4e  xori        $v0, $s2, 0xCF4E
    ctx->pc = 0x27a624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)53070);
    // 0x27a628: 0x3ac2cf4a  xori        $v0, $s6, 0xCF4A
    ctx->pc = 0x27a628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)53066);
    // 0x27a62c: 0x3ec2cf76  .word       0x3EC2CF76                   # lui         $v0, 0xCF76 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53110 << 16));
    // 0x27a630: 0x809e574  j           func_2795D0
    ctx->pc = 0x27A630u;
    ctx->pc = 0x27A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A630u;
    // 0x27a634: 0x3fa2d37e  .word       0x3FA2D37E                   # lui         $v0, 0xD37E # 03A00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54142 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    sub_002795D0_0x2795d0(rdram, ctx, runtime); return;
    ctx->pc = 0x27A638u;
    // 0x27a638: 0x8c6253a8  lw          $v0, 0x53A8($v1)
    ctx->pc = 0x27a638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21416)));
    // 0x27a63c: 0xa52aa0c3  sh          $t2, -0x5F3D($t1)
    ctx->pc = 0x27a63cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4294942915), (uint16_t)GPR_U32(ctx, 10));
    // 0x27a640: 0xa122a8d8  sb          $v0, -0x5728($t1)
    ctx->pc = 0x27a640u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4294944984), (uint8_t)GPR_U32(ctx, 2));
    // 0x27a644: 0x212280d6  addi        $v0, $t1, -0x7F2A
    ctx->pc = 0x27a644u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294934742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27a648: 0xa12288d0  sb          $v0, -0x7730($t1)
    ctx->pc = 0x27a648u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4294936784), (uint8_t)GPR_U32(ctx, 2));
    // 0x27a64c: 0x212280d6  addi        $v0, $t1, -0x7F2A
    ctx->pc = 0x27a64cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294934742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27a650: 0x212280d6  addi        $v0, $t1, -0x7F2A
    ctx->pc = 0x27a650u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294934742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27a654: 0x212280d6  addi        $v0, $t1, -0x7F2A
    ctx->pc = 0x27a654u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294934742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27a658: 0x16183563  bne         $s0, $t8, . + 4 + (0x3563 << 2)
    ctx->pc = 0x27A658u;
    {
        const bool branch_taken_0x27a658 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 24));
        ctx->pc = 0x27A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A658u;
        // 0x27a65c: 0x169ab446  bne         $s4, $k0, . + 4 + (-0x4BBA << 2) (Delay Slot)
        // Likely branch instruction at 0x27A65C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a658) {
            ctx->pc = 0x287BE8u;
            return;
        }
    }
    ctx->pc = 0x27A660u;
    // 0x27a660: 0x1398b9e1  beq         $gp, $t8, . + 4 + (-0x461F << 2)
    ctx->pc = 0x27A660u;
    {
        const bool branch_taken_0x27a660 = (GPR_U64(ctx, 28) == GPR_U64(ctx, 24));
        ctx->pc = 0x27A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A660u;
        // 0x27a664: 0x3b12b740  xori        $s2, $t8, 0xB740 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 24) ^ (uint64_t)(uint16_t)46912);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a660) {
            ctx->pc = 0x268DE8u;
            return;
        }
    }
    ctx->pc = 0x27A668u;
    // 0x27a668: 0xb512b461  sdr         $s2, -0x4B9F($t0)
    ctx->pc = 0x27a668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4294947937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27a66c: 0x91169ae5  lbu         $s6, -0x651B($t0)
    ctx->pc = 0x27a66cu;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294941413)));
    // 0x27a670: 0xb792b061  sdr         $s2, -0x4F9F($gp)
    ctx->pc = 0x27a670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 4294946913); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27a674: 0x91101963  lbu         $s0, 0x1963($t0)
    ctx->pc = 0x27a674u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6499)));
    // 0x27a678: 0x9895b264  lwr         $s5, -0x4D9C($a0)
    ctx->pc = 0x27a678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294947428); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 21) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 21) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 21, merged64); }
    // 0x27a67c: 0x212280c1  addi        $v0, $t1, -0x7F3F
    ctx->pc = 0x27a67cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294934721, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27a680: 0x212280d6  addi        $v0, $t1, -0x7F2A
    ctx->pc = 0x27a680u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)4294934742, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x27a684: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27a684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27a688: 0x2484a658  addiu       $a0, $a0, -0x59A8
    ctx->pc = 0x27a688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944344));
    // 0x27a68c: 0x3942cf56  xori        $v0, $t2, 0xCF56
    ctx->pc = 0x27a68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)53078);
    // 0x27a690: 0x39c2cf52  xori        $v0, $t6, 0xCF52
    ctx->pc = 0x27a690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)53074);
    // 0x27a694: 0x3842cf5e  xori        $v0, $v0, 0xCF5E
    ctx->pc = 0x27a694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)53086);
    // 0x27a698: 0x38c2cf5a  xori        $v0, $a2, 0xCF5A
    ctx->pc = 0x27a698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)53082);
    // 0x27a69c: 0x3b42cf46  xori        $v0, $k0, 0xCF46
    ctx->pc = 0x27a69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 26) ^ (uint64_t)(uint16_t)53062);
    // 0x27a6a0: 0x3bc2cf42  xori        $v0, $fp, 0xCF42
    ctx->pc = 0x27a6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) ^ (uint64_t)(uint16_t)53058);
    // 0x27a6a4: 0x3a42cf4e  xori        $v0, $s2, 0xCF4E
    ctx->pc = 0x27a6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)53070);
    // 0x27a6a8: 0x3ac2cf4a  xori        $v0, $s6, 0xCF4A
    ctx->pc = 0x27a6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)53066);
    // 0x27a6ac: 0x3ec2cf76  .word       0x3EC2CF76                   # lui         $v0, 0xCF76 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53110 << 16));
    // 0x27a6b0: 0x809e574  j           func_2795D0
    ctx->pc = 0x27A6B0u;
    ctx->pc = 0x27A6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A6B0u;
    // 0x27a6b4: 0x3fa2d37e  .word       0x3FA2D37E                   # lui         $v0, 0xD37E # 03A00000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54142 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    sub_002795D0_0x2795d0(rdram, ctx, runtime); return;
    ctx->pc = 0x27A6B8u;
    // 0x27a6b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27A6B8u;
    {
        const bool branch_taken_0x27a6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a6b8) {
            ctx->pc = 0x27A6E8u;
            goto label_27a6e8;
        }
    }
    ctx->pc = 0x27A6C0u;
    // 0x27a6c0: 0x8704047b  lh          $a0, 0x47B($t8)
    ctx->pc = 0x27a6c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 1147)));
    // 0x27a6c4: 0xfc5579fa  sd          $s5, 0x79FA($v0)
    ctx->pc = 0x27a6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 31226), GPR_U64(ctx, 21));
    // 0x27a6c8: 0xdd915c57  ld          $s1, 0x5C57($t4)
    ctx->pc = 0x27a6c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 12), 23639)));
    // 0x27a6cc: 0xa2021a61  sb          $v0, 0x1A61($s0)
    ctx->pc = 0x27a6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6753), (uint8_t)GPR_U32(ctx, 2));
    // 0x27a6d0: 0x32fa020  add         $s4, $t9, $t7
    ctx->pc = 0x27a6d0u;
    {     int32_t rs_val = GPR_S32(ctx, 25);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
    // 0x27a6d4: 0x343a020  add         $s4, $k0, $v1
    ctx->pc = 0x27a6d4u;
    {     int32_t rs_val = GPR_S32(ctx, 26);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
    // 0x27a6d8: 0xe897d74  jal         func_A25F5D0
    ctx->pc = 0x27A6D8u;
    SET_GPR_U32(ctx, 31, 0x27A6E0u);
    ctx->pc = 0x27A6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A6D8u;
    // 0x27a6dc: 0x980d27b1  lwr         $t5, 0x27B1($zero) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10161); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0xA25F5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA25F5D0u, 0x27A6D8u, 0x27A6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A6E0u;
label_27a6e0:
    // 0x27a6e0: 0xe897cdc  jal         func_A25F370
    ctx->pc = 0x27A6E0u;
    SET_GPR_U32(ctx, 31, 0x27A6E8u);
    ctx->pc = 0xA25F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA25F370u, 0x27A6E0u, 0x27A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A6E8u;
label_27a6e8:
    // 0x27a6e8: 0x3c1701c3  lui         $s7, 0x1C3
    ctx->pc = 0x27a6e8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)451 << 16));
    // 0x27a6ec: 0x26f453ac  addiu       $s4, $s7, 0x53AC
    ctx->pc = 0x27a6ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 21420));
    // 0x27a6f0: 0x8a880  sll         $s5, $t0, 2
    ctx->pc = 0x27a6f0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x27a6f4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27a6f8: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x27a6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x27a6fc: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x27a6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27a700: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x27a700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27a704: 0x10400182  beqz        $v0, . + 4 + (0x182 << 2)
    ctx->pc = 0x27A704u;
    {
        const bool branch_taken_0x27a704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A704u;
        // 0x27a708: 0x3c0201c3  lui         $v0, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a704) {
            ctx->pc = 0x27AD10u;
            goto label_27ad10;
        }
    }
    ctx->pc = 0x27A70Cu;
    // 0x27a70c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27a70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a710: 0x16060037  bne         $s0, $a2, . + 4 + (0x37 << 2)
    ctx->pc = 0x27A710u;
    {
        const bool branch_taken_0x27a710 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x27A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A710u;
        // 0x27a714: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a710) {
            ctx->pc = 0x27A7F0u;
            goto label_27a7f0;
        }
    }
    ctx->pc = 0x27A718u;
    // 0x27a718: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27a718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27a71c: 0x2463a764  addiu       $v1, $v1, -0x589C
    ctx->pc = 0x27a71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944612));
    // 0x27a720: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27a720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a724: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A724u;
    {
        const bool branch_taken_0x27a724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a724) {
            ctx->pc = 0x27A744u;
            goto label_27a744;
        }
    }
    ctx->pc = 0x27A72Cu;
    // 0x27a72c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27a72cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27a730: 0x2484a778  addiu       $a0, $a0, -0x5888
    ctx->pc = 0x27a730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944632));
    // 0x27a734: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27a734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27a738: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27a738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27a73c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27A73Cu;
    SET_GPR_U32(ctx, 31, 0x27A744u);
    ctx->pc = 0x27A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A73Cu;
    // 0x27a740: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27A73Cu, 0x27A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A744u;
label_27a744:
    // 0x27a744: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27A744u;
    {
        const bool branch_taken_0x27a744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a744) {
            ctx->pc = 0x27A778u;
            goto label_27a778;
        }
    }
    ctx->pc = 0x27A74Cu;
    // 0x27a74c: 0x2374020  add         $t0, $s1, $s7
    ctx->pc = 0x27a74cu;
    {     int32_t rs_val = GPR_S32(ctx, 17);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x27a750: 0xa178f8c9  sb          $t8, -0x737($t3)
    ctx->pc = 0x27a750u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4294965449), (uint8_t)GPR_U32(ctx, 24));
    // 0x27a754: 0xa39345a9  sb          $s3, 0x45A9($gp)
    ctx->pc = 0x27a754u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 17833), (uint8_t)GPR_U32(ctx, 19));
    // 0x27a758: 0xa34ea321  sb          $t6, -0x5CDF($k0)
    ctx->pc = 0x27a758u;
    WRITE8(ADD32(GPR_U32(ctx, 26), 4294943521), (uint8_t)GPR_U32(ctx, 14));
    // 0x27a75c: 0xdfd47827  ld          $s4, 0x7827($fp)
    ctx->pc = 0x27a75cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 30), 30759)));
    // 0x27a760: 0x26cd8918  addiu       $t5, $s6, -0x76E8
    ctx->pc = 0x27a760u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 22), 4294936856));
    // 0x27a764: 0x0  nop
    ctx->pc = 0x27a764u;
    // NOP
    // 0x27a768: 0xaae48f4c  swl         $a0, -0x70B4($s7)
    ctx->pc = 0x27a768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4294938444); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27a76c: 0x980d280a  lwr         $t5, 0x280A($zero)
    ctx->pc = 0x27a76cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10250); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27a770: 0xaae48f70  swl         $a0, -0x7090($s7)
    ctx->pc = 0x27a770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4294938480); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27a774: 0x0  nop
    ctx->pc = 0x27a774u;
    // NOP
label_27a778:
    // 0x27a778: 0x9000010  j           func_4000040
    ctx->pc = 0x27A778u;
    ctx->pc = 0x4000040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4000040u, 0x27A778u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x27A780u;
    // 0x27a780: 0x0  nop
    ctx->pc = 0x27a780u;
    // NOP
    // 0x27a784: 0x0  nop
    ctx->pc = 0x27a784u;
    // NOP
    // 0x27a788: 0x70616765  .word       0x70616765                   # INVALID     $v1, $at, 0x6765 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x27a788u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x27A788 raw=0x70616765");
    // 0x27a78c: 0x20697320  addi        $t1, $v1, 0x7320
    ctx->pc = 0x27a78cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29472, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x27a790: 0x616c7265  daddi       $t4, $t3, 0x7265
    ctx->pc = 0x27a790u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29285; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
    // 0x27a794: 0x61647920  daddi       $a0, $t3, 0x7920
    ctx->pc = 0x27a794u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)31008; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
    // 0x27a798: 0x66726565  daddiu      $s2, $s3, 0x6565
    ctx->pc = 0x27a798u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25957);
    // 0x27a79c: 0x2e000000  sltiu       $zero, $s0, 0x0
    ctx->pc = 0x27a79cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)0) ? 1 : 0);
    // 0x27a7a0: 0x0  nop
    ctx->pc = 0x27a7a0u;
    // NOP
    // 0x27a7a4: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27a7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27a7a8: 0x2484a788  addiu       $a0, $a0, -0x5878
    ctx->pc = 0x27a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944648));
    // 0x27a7ac: 0xc09e574  jal         func_2795D0
    ctx->pc = 0x27A7ACu;
    SET_GPR_U32(ctx, 31, 0x27A7B4u);
    ctx->pc = 0x2795D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2795D0u, 0x27A7ACu, 0x27A7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A7B4u;
label_27a7b4:
    // 0x27a7b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27A7B4u;
    {
        const bool branch_taken_0x27a7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a7b4) {
            ctx->pc = 0x27A7E4u;
            goto label_27a7e4;
        }
    }
    ctx->pc = 0x27A7BCu;
    // 0x27a7bc: 0x293d020  add         $k0, $s4, $s3
    ctx->pc = 0x27a7bcu;
    {     int32_t rs_val = GPR_S32(ctx, 20);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
    // 0x27a7c0: 0xcdcfa0f  jal         func_373E83C
    ctx->pc = 0x27A7C0u;
    SET_GPR_U32(ctx, 31, 0x27A7C8u);
    ctx->pc = 0x27A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A7C0u;
    // 0x27a7c4: 0x2693f330  addiu       $s3, $s4, -0xCD0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294964016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373E83Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373E83Cu, 0x27A7C0u, 0x27A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A7C8u;
label_27a7c8:
    // 0x27a7c8: 0x8d7afa2d  lw          $k0, -0x5D3($t3)
    ctx->pc = 0x27a7c8u;
    SET_GPR_S32(ctx, 26, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294965805)));
    // 0x27a7cc: 0xfc6fd622  sd          $t7, -0x29DE($v1)
    ctx->pc = 0x27a7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294956578), GPR_U64(ctx, 15));
    // 0x27a7d0: 0x26b143c8  addiu       $s1, $s5, 0x43C8
    ctx->pc = 0x27a7d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 17352));
    // 0x27a7d4: 0xaae48fc4  swl         $a0, -0x703C($s7)
    ctx->pc = 0x27a7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4294938564); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27a7d8: 0x980d280b  lwr         $t5, 0x280B($zero)
    ctx->pc = 0x27a7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10251); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27a7dc: 0xaae48ff8  swl         $a0, -0x7008($s7)
    ctx->pc = 0x27a7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4294938616); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27a7e0: 0x0  nop
    ctx->pc = 0x27a7e0u;
    // NOP
label_27a7e4:
    // 0x27a7e4: 0x1000021f  b           . + 4 + (0x21F << 2)
    ctx->pc = 0x27A7E4u;
    {
        const bool branch_taken_0x27a7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A7E4u;
        // 0x27a7e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a7e4) {
            ctx->pc = 0x27B064u;
            goto label_27b064;
        }
    }
    ctx->pc = 0x27A7ECu;
    // 0x27a7ec: 0x0  nop
    ctx->pc = 0x27a7ecu;
    // NOP
label_27a7f0:
    // 0x27a7f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27a7f4: 0x12020038  beq         $s0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x27A7F4u;
    {
        const bool branch_taken_0x27a7f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x27A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A7F4u;
        // 0x27a7f8: 0x3c0301c3  lui         $v1, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a7f4) {
            ctx->pc = 0x27A8D8u;
            goto label_27a8d8;
        }
    }
    ctx->pc = 0x27A7FCu;
    // 0x27a7fc: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27a800: 0x2463a848  addiu       $v1, $v1, -0x57B8
    ctx->pc = 0x27a800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944840));
    // 0x27a804: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a808: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A808u;
    {
        const bool branch_taken_0x27a808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a808) {
            ctx->pc = 0x27A828u;
            goto label_27a828;
        }
    }
    ctx->pc = 0x27A810u;
    // 0x27a810: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27a810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27a814: 0x2484a85c  addiu       $a0, $a0, -0x57A4
    ctx->pc = 0x27a814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944860));
    // 0x27a818: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27a818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27a81c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27a820: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27A820u;
    SET_GPR_U32(ctx, 31, 0x27A828u);
    ctx->pc = 0x27A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A820u;
    // 0x27a824: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27A820u, 0x27A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A828u;
label_27a828:
    // 0x27a828: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27A828u;
    {
        const bool branch_taken_0x27a828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a828) {
            ctx->pc = 0x27A85Cu;
            goto label_27a85c;
        }
    }
    ctx->pc = 0x27A830u;
    // 0x27a830: 0xff10f08a  sd          $s0, -0xF76($t8)
    ctx->pc = 0x27a830u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 4294963338), GPR_U64(ctx, 16));
    // 0x27a834: 0xdc4ea377  ld          $t6, -0x5C89($v0)
    ctx->pc = 0x27a834u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 2), 4294943607)));
    // 0x27a838: 0xa3cd0de9  sb          $t5, 0xDE9($fp)
    ctx->pc = 0x27a838u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 3561), (uint8_t)GPR_U32(ctx, 13));
    // 0x27a83c: 0xfd4c2522  sd          $t4, 0x2522($t2)
    ctx->pc = 0x27a83cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 9506), GPR_U64(ctx, 12));
    // 0x27a840: 0x87075283  lh          $a3, 0x5283($t8)
    ctx->pc = 0x27a840u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 21123)));
    // 0x27a844: 0x861cb1eb  lh          $gp, -0x4E15($s0)
    ctx->pc = 0x27a844u;
    SET_GPR_S32(ctx, 28, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294947307)));
    // 0x27a848: 0x0  nop
    ctx->pc = 0x27a848u;
    // NOP
    // 0x27a84c: 0xe3dbdd9f  sc          $k1, -0x2261($fp)
    ctx->pc = 0x27a84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 4294958495); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 27)); SET_GPR_S32(ctx, 27, 1); } else { SET_GPR_S32(ctx, 27, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x27a850: 0x980d2862  lwr         $t5, 0x2862($zero)
    ctx->pc = 0x27a850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10338); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27a854: 0xe3dbdddf  sc          $k1, -0x2221($fp)
    ctx->pc = 0x27a854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 4294958559); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 27)); SET_GPR_S32(ctx, 27, 1); } else { SET_GPR_S32(ctx, 27, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x27a858: 0x0  nop
    ctx->pc = 0x27a858u;
    // NOP
label_27a85c:
    // 0x27a85c: 0x5ae55be4  .word       0x5AE55BE4                   # blezl       $s7, . + 4 + (0x5BE4 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27A85Cu;
    {
        const bool branch_taken_0x27a85c = (GPR_S32(ctx, 23) <= 0);
        if (branch_taken_0x27a85c) {
            ctx->pc = 0x27A860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A85Cu;
            // 0x27a860: 0x5be5fbe4  .word       0x5BE5FBE4                   # blezl       $ra, . + 4 + (-0x41C << 2) # 00050000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x27A860 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2917F0u;
            return;
        }
    }
    ctx->pc = 0x27A864u;
    // 0x27a864: 0x5be5fbe4  .word       0x5BE5FBE4                   # blezl       $ra, . + 4 + (-0x41C << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27A864u;
    {
        const bool branch_taken_0x27a864 = (GPR_S32(ctx, 31) <= 0);
        if (branch_taken_0x27a864) {
            ctx->pc = 0x27A868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A864u;
            // 0x27a868: 0x5be5fbe4  .word       0x5BE5FBE4                   # blezl       $ra, . + 4 + (-0x41C << 2) # 00050000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x27A868 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2797F8u;
            return;
        }
    }
    ctx->pc = 0x27A86Cu;
    // 0x27a86c: 0xbd12fd72  cache       0x12, -0x28E($t0)
    ctx->pc = 0x27a86cu;
    // CACHE instruction (ignored)
    // 0x27a870: 0x19f2bcc2  .word       0x19F2BCC2                   # blez        $t7, . + 4 + (-0x433E << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27A870u;
    {
        const bool branch_taken_0x27a870 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x27A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A870u;
        // 0x27a874: 0xbc92a9e2  cache       0x12, -0x561E($a0) (Delay Slot)
        // CACHE instruction (ignored)
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a870) {
            ctx->pc = 0x269B7Cu;
            return;
        }
    }
    ctx->pc = 0x27A878u;
    // 0x27a878: 0xbd92cd02  cache       0x12, -0x32FE($t4)
    ctx->pc = 0x27a878u;
    // CACHE instruction (ignored)
    // 0x27a87c: 0x5d87edf3  .word       0x5D87EDF3                   # bgtzl       $t4, . + 4 + (-0x120D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27A87Cu;
    {
        const bool branch_taken_0x27a87c = (GPR_S32(ctx, 12) > 0);
        if (branch_taken_0x27a87c) {
            ctx->pc = 0x27A880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A87Cu;
            // 0x27a880: 0xabe3bbe6  swl         $v1, -0x441A($ra) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294949862); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27604Cu;
            return;
        }
    }
    ctx->pc = 0x27A884u;
    // 0x27a884: 0x5be5fbe4  .word       0x5BE5FBE4                   # blezl       $ra, . + 4 + (-0x41C << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27A884u;
    {
        const bool branch_taken_0x27a884 = (GPR_S32(ctx, 31) <= 0);
        if (branch_taken_0x27a884) {
            ctx->pc = 0x27A888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A884u;
            // 0x27a888: 0x5be5fbe4  .word       0x5BE5FBE4                   # blezl       $ra, . + 4 + (-0x41C << 2) # 00050000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x27A888 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x279818u;
            return;
        }
    }
    ctx->pc = 0x27A88Cu;
    // 0x27a88c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27a88cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27a890: 0x2484a86c  addiu       $a0, $a0, -0x5794
    ctx->pc = 0x27a890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944876));
    // 0x27a894: 0xc09e574  jal         func_2795D0
    ctx->pc = 0x27A894u;
    SET_GPR_U32(ctx, 31, 0x27A89Cu);
    ctx->pc = 0x27A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A894u;
    // 0x27a898: 0x5be5fbe4  .word       0x5BE5FBE4                   # blezl       $ra, . + 4 + (-0x41C << 2) # 00050000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    // Likely branch instruction at 0x27A898 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2795D0u, 0x27A894u, 0x27A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A89Cu;
label_27a89c:
    // 0x27a89c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27A89Cu;
    {
        const bool branch_taken_0x27a89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a89c) {
            ctx->pc = 0x27A8CCu;
            goto label_27a8cc;
        }
    }
    ctx->pc = 0x27A8A4u;
    // 0x27a8a4: 0xffee0e8a  sd          $t6, 0xE8A($ra)
    ctx->pc = 0x27a8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 3722), GPR_U64(ctx, 14));
    // 0x27a8a8: 0x86c8537b  lh          $t0, 0x537B($s6)
    ctx->pc = 0x27a8a8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 21371)));
    // 0x27a8ac: 0x8ce5055d  lw          $a1, 0x55D($a3)
    ctx->pc = 0x27a8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1373)));
    // 0x27a8b0: 0xdcadd497  ld          $t5, -0x2B69($a1)
    ctx->pc = 0x27a8b0u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 5), 4294956183)));
    // 0x27a8b4: 0x37d8820  add         $s1, $k1, $sp
    ctx->pc = 0x27a8b4u;
    {     int32_t rs_val = GPR_S32(ctx, 27);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
    // 0x27a8b8: 0x8fdac8ad  lw          $k0, -0x3753($fp)
    ctx->pc = 0x27a8b8u;
    SET_GPR_S32(ctx, 26, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294953133)));
    // 0x27a8bc: 0xe3f9ddbd  sc          $t9, -0x2243($ra)
    ctx->pc = 0x27a8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294958525); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 25)); SET_GPR_S32(ctx, 25, 1); } else { SET_GPR_S32(ctx, 25, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x27a8c0: 0x980d2863  lwr         $t5, 0x2863($zero)
    ctx->pc = 0x27a8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10339); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27a8c4: 0xe3f9ddfd  sc          $t9, -0x2203($ra)
    ctx->pc = 0x27a8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294958589); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 25)); SET_GPR_S32(ctx, 25, 1); } else { SET_GPR_S32(ctx, 25, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x27a8c8: 0x0  nop
    ctx->pc = 0x27a8c8u;
    // NOP
label_27a8cc:
    // 0x27a8cc: 0x100001e5  b           . + 4 + (0x1E5 << 2)
    ctx->pc = 0x27A8CCu;
    {
        const bool branch_taken_0x27a8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A8CCu;
        // 0x27a8d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a8cc) {
            ctx->pc = 0x27B064u;
            goto label_27b064;
        }
    }
    ctx->pc = 0x27A8D4u;
    // 0x27a8d4: 0x0  nop
    ctx->pc = 0x27a8d4u;
    // NOP
label_27a8d8:
    // 0x27a8d8: 0x8c625394  lw          $v0, 0x5394($v1)
    ctx->pc = 0x27a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21396)));
    // 0x27a8dc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x27a8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x27a8e0: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x27A8E0u;
    {
        const bool branch_taken_0x27a8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a8e0) {
            ctx->pc = 0x27A8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A8E0u;
            // 0x27a8e4: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A9C8u;
            goto label_27a9c8;
        }
    }
    ctx->pc = 0x27A8E8u;
    // 0x27a8e8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27a8ec: 0x2463a934  addiu       $v1, $v1, -0x56CC
    ctx->pc = 0x27a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945076));
    // 0x27a8f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a8f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A8F4u;
    {
        const bool branch_taken_0x27a8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a8f4) {
            ctx->pc = 0x27A914u;
            goto label_27a914;
        }
    }
    ctx->pc = 0x27A8FCu;
    // 0x27a8fc: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27a900: 0x2484a948  addiu       $a0, $a0, -0x56B8
    ctx->pc = 0x27a900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945096));
    // 0x27a904: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27a904u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27a908: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27a908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27a90c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27A90Cu;
    SET_GPR_U32(ctx, 31, 0x27A914u);
    ctx->pc = 0x27A910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A90Cu;
    // 0x27a910: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27A90Cu, 0x27A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A914u;
label_27a914:
    // 0x27a914: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27A914u;
    {
        const bool branch_taken_0x27a914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a914) {
            ctx->pc = 0x27A948u;
            goto label_27a948;
        }
    }
    ctx->pc = 0x27A91Cu;
    // 0x27a91c: 0x87d831c3  lh          $t8, 0x31C3($fp)
    ctx->pc = 0x27a91cu;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 12739)));
    // 0x27a920: 0xcafe268  jal         func_2BF89A0
    ctx->pc = 0x27A920u;
    SET_GPR_U32(ctx, 31, 0x27A928u);
    ctx->pc = 0x27A924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A920u;
    // 0x27a924: 0x87227f6b  lh          $v0, 0x7F6B($t9) (Delay Slot)
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 32619)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF89A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF89A0u, 0x27A920u, 0x27A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A928u;
label_27a928:
    // 0x27a928: 0x17f2820  add         $a1, $t3, $ra
    ctx->pc = 0x27a928u;
    {     int32_t rs_val = GPR_S32(ctx, 11);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x27a92c: 0xc7bec16  jal         func_1EFB058
    ctx->pc = 0x27A92Cu;
    SET_GPR_U32(ctx, 31, 0x27A934u);
    ctx->pc = 0x27A930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A92Cu;
    // 0x27a930: 0xde886c3f  ld          $t0, 0x6C3F($s4) (Delay Slot)
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 20), 27711)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFB058u, 0x27A92Cu, 0x27A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A934u;
label_27a934:
    // 0x27a934: 0x0  nop
    ctx->pc = 0x27a934u;
    // NOP
    // 0x27a938: 0x905893b  j           func_41624EC
    ctx->pc = 0x27A938u;
    ctx->pc = 0x27A93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A938u;
    // 0x27a93c: 0x980d28bc  lwr         $t5, 0x28BC($zero) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10428); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41624ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41624ECu, 0x27A938u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x27A940u;
    // 0x27a940: 0x905897f  j           func_41625FC
    ctx->pc = 0x27A940u;
    ctx->pc = 0x41625FCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41625FCu, 0x27A940u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x27A948u;
label_27a948:
    // 0x27a948: 0x4ac3a950  vmaxx.yz    $vf5, $vf21, $vf3x
    ctx->pc = 0x27a948u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x27a94c: 0x28c3a951  slti        $v1, $a2, -0x56AF
    ctx->pc = 0x27a94cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294945105) ? 1 : 0);
    // 0x27a950: 0x28c3a951  slti        $v1, $a2, -0x56AF
    ctx->pc = 0x27a950u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294945105) ? 1 : 0);
    // 0x27a954: 0x28c3a951  slti        $v1, $a2, -0x56AF
    ctx->pc = 0x27a954u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294945105) ? 1 : 0);
    // 0x27a958: 0x85ef24bc  lh          $t7, 0x24BC($t7)
    ctx->pc = 0x27a958u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 9404)));
    // 0x27a95c: 0xe44f047d  swc1        $f15, 0x47D($v0)
    ctx->pc = 0x27a95cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1149), bits); }
    // 0x27a960: 0x24edac55  addiu       $t5, $a3, -0x53AB
    ctx->pc = 0x27a960u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945877));
    // 0x27a964: 0xcde605fd  pref        0x06, 0x5FD($t7)
    ctx->pc = 0x27a964u;
    // PREF instruction (ignored)
    // 0x27a968: 0x25ee4755  addiu       $t6, $t7, 0x4755
    ctx->pc = 0x27a968u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 18261));
    // 0x27a96c: 0xe68f07dc  swc1        $f15, 0x7DC($s4)
    ctx->pc = 0x27a96cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 2012), bits); }
    // 0x27a970: 0xe8c3a954  swc2        $3, -0x56AC($a2)
    ctx->pc = 0x27a970u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x27A970 raw=0xE8C3A954");
    // 0x27a974: 0x28c3a951  slti        $v1, $a2, -0x56AF
    ctx->pc = 0x27a974u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294945105) ? 1 : 0);
    // 0x27a978: 0x28c3a951  slti        $v1, $a2, -0x56AF
    ctx->pc = 0x27a978u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294945105) ? 1 : 0);
    // 0x27a97c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27a97cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27a980: 0x2484a958  addiu       $a0, $a0, -0x56A8
    ctx->pc = 0x27a980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945112));
    // 0x27a984: 0xc09e574  jal         func_2795D0
    ctx->pc = 0x27A984u;
    SET_GPR_U32(ctx, 31, 0x27A98Cu);
    ctx->pc = 0x27A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A984u;
    // 0x27a988: 0x28c3a951  slti        $v1, $a2, -0x56AF (Delay Slot)
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294945105) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2795D0u, 0x27A984u, 0x27A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A98Cu;
label_27a98c:
    // 0x27a98c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27A98Cu;
    {
        const bool branch_taken_0x27a98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a98c) {
            ctx->pc = 0x27A9BCu;
            goto label_27a9bc;
        }
    }
    ctx->pc = 0x27A994u;
    // 0x27a994: 0xa1bfe601  sb          $ra, -0x19FF($t5)
    ctx->pc = 0x27a994u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 4294960641), (uint8_t)GPR_U32(ctx, 31));
    // 0x27a998: 0x8579ae53  lh          $t9, -0x51AD($t3)
    ctx->pc = 0x27a998u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294946387)));
    // 0x27a99c: 0x87d71733  lh          $s7, 0x1733($fp)
    ctx->pc = 0x27a99cu;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 5939)));
    // 0x27a9a0: 0xc28c6c2  jal         func_A31B08
    ctx->pc = 0x27A9A0u;
    SET_GPR_U32(ctx, 31, 0x27A9A8u);
    ctx->pc = 0x27A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A9A0u;
    // 0x27a9a4: 0x847b9793  lh          $k1, -0x686D($v1) (Delay Slot)
    SET_GPR_S32(ctx, 27, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294940563)));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA31B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA31B08u, 0x27A9A0u, 0x27A9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A9A8u;
label_27a9a8:
    // 0x27a9a8: 0x245cb190  addiu       $gp, $v0, -0x4E70
    ctx->pc = 0x27a9a8u;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947216));
    // 0x27a9ac: 0x90b3985  j           func_42CE614
    ctx->pc = 0x27A9ACu;
    ctx->pc = 0x27A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A9ACu;
    // 0x27a9b0: 0x980d28bd  lwr         $t5, 0x28BD($zero) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10429); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42CE614u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42CE614u, 0x27A9ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x27A9B4u;
    // 0x27a9b4: 0x90b39c1  j           func_42CE704
    ctx->pc = 0x27A9B4u;
    ctx->pc = 0x42CE704u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42CE704u, 0x27A9B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x27A9BCu;
label_27a9bc:
    // 0x27a9bc: 0x100001a9  b           . + 4 + (0x1A9 << 2)
    ctx->pc = 0x27A9BCu;
    {
        const bool branch_taken_0x27a9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9BCu;
        // 0x27a9c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a9bc) {
            ctx->pc = 0x27B064u;
            goto label_27b064;
        }
    }
    ctx->pc = 0x27A9C4u;
    // 0x27a9c4: 0x0  nop
    ctx->pc = 0x27a9c4u;
    // NOP
label_27a9c8:
    // 0x27a9c8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x27a9c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a9cc: 0x10a3821  addu        $a3, $t0, $t2
    ctx->pc = 0x27a9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x27a9d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x27a9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27a9d4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x27a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27a9d8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x27a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x27a9dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27a9e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a9e4: 0x14650010  bne         $v1, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x27A9E4u;
    {
        const bool branch_taken_0x27a9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x27A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9E4u;
        // 0x27a9e8: 0x3c0201c3  lui         $v0, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a9e4) {
            ctx->pc = 0x27AA28u;
            goto label_27aa28;
        }
    }
    ctx->pc = 0x27A9ECu;
    // 0x27a9ec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x27a9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9f0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x27a9f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a9f4: 0x0  nop
    ctx->pc = 0x27a9f4u;
    // NOP
label_27a9f8:
    // 0x27a9f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x27a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27a9fc: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x27a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x27aa00: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x27aa00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x27aa04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27aa08: 0x10a3821  addu        $a3, $t0, $t2
    ctx->pc = 0x27aa08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x27aa0c: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x27aa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x27aa10: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x27aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x27aa14: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x27aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27aa18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27aa1c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27aa20: 0x1085fff5  beq         $a0, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x27AA20u;
    {
        const bool branch_taken_0x27aa20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x27AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA20u;
        // 0x27aa24: 0x3c0201c3  lui         $v0, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa20) {
            ctx->pc = 0x27A9F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27a9f8;
        }
    }
    ctx->pc = 0x27AA28u;
label_27aa28:
    // 0x27aa28: 0x3c0501c3  lui         $a1, 0x1C3
    ctx->pc = 0x27aa28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)451 << 16));
    // 0x27aa2c: 0x8c46538c  lw          $a2, 0x538C($v0)
    ctx->pc = 0x27aa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21388)));
    // 0x27aa30: 0x3c0401c3  lui         $a0, 0x1C3
    ctx->pc = 0x27aa30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)451 << 16));
    // 0x27aa34: 0x24a55400  addiu       $a1, $a1, 0x5400
    ctx->pc = 0x27aa34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21504));
    // 0x27aa38: 0x248453fc  addiu       $a0, $a0, 0x53FC
    ctx->pc = 0x27aa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21500));
    // 0x27aa3c: 0x1463018  mult        $a2, $t2, $a2
    ctx->pc = 0x27aa3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x27aa40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x27aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27aa44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27aa48: 0x3c0701c3  lui         $a3, 0x1C3
    ctx->pc = 0x27aa48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)451 << 16));
    // 0x27aa4c: 0x8d695390  lw          $t1, 0x5390($t3)
    ctx->pc = 0x27aa4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 21392)));
    // 0x27aa50: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x27aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x27aa54: 0x8ce853e4  lw          $t0, 0x53E4($a3)
    ctx->pc = 0x27aa54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 21476)));
    // 0x27aa58: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x27aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x27aa5c: 0x12a9004  sllv        $s2, $t2, $t1
    ctx->pc = 0x27aa5cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 9) & 0x1F));
    // 0x27aa60: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x27aa60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x27aa64: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27AA64u;
    {
        const bool branch_taken_0x27aa64 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA64u;
        // 0x27aa68: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa64) {
            ctx->pc = 0x27AA7Cu;
            goto label_27aa7c;
        }
    }
    ctx->pc = 0x27AA6Cu;
    // 0x27aa6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27aa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa70: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x27aa70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x27aa74: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x27AA74u;
    SET_GPR_U32(ctx, 31, 0x27AA7Cu);
    ctx->pc = 0x27AA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AA74u;
    // 0x27aa78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x27AA74u, 0x27AA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA7Cu;
label_27aa7c:
    // 0x27aa7c: 0x3c1401c3  lui         $s4, 0x1C3
    ctx->pc = 0x27aa7cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)451 << 16));
    // 0x27aa80: 0x269053e8  addiu       $s0, $s4, 0x53E8
    ctx->pc = 0x27aa80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 21480));
    // 0x27aa84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27aa88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27AA88u;
    {
        const bool branch_taken_0x27aa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA88u;
        // 0x27aa8c: 0x2728821  addu        $s1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa88) {
            ctx->pc = 0x27AA9Cu;
            goto label_27aa9c;
        }
    }
    ctx->pc = 0x27AA90u;
    // 0x27aa90: 0xc09e6f8  jal         func_279BE0
    ctx->pc = 0x27AA90u;
    SET_GPR_U32(ctx, 31, 0x27AA98u);
    ctx->pc = 0x27AA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AA90u;
    // 0x27aa94: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279BE0u, 0x27AA90u, 0x27AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA98u;
label_27aa98:
    // 0x27aa98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27aa98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_27aa9c:
    // 0x27aa9c: 0xac530008  sw          $s3, 0x8($v0)
    ctx->pc = 0x27aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
    // 0x27aaa0: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x27aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x27aaa4: 0x244453b8  addiu       $a0, $v0, 0x53B8
    ctx->pc = 0x27aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21432));
    // 0x27aaa8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27aaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27aaac: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x27aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
    // 0x27aab0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27aab4: 0xac520010  sw          $s2, 0x10($v0)
    ctx->pc = 0x27aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 18));
    // 0x27aab8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27aabc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27AABCu;
    {
        const bool branch_taken_0x27aabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AABCu;
        // 0x27aac0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aabc) {
            ctx->pc = 0x27AAE8u;
            goto label_27aae8;
        }
    }
    ctx->pc = 0x27AAC4u;
    // 0x27aac4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27aac8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27aac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x27aacc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27aad0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x27aad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x27aad4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27aad8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x27aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x27aadc: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x27AADCu;
    {
        const bool branch_taken_0x27aadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AADCu;
        // 0x27aae0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aadc) {
            ctx->pc = 0x27ACDCu;
            goto label_27acdc;
        }
    }
    ctx->pc = 0x27AAE4u;
    // 0x27aae4: 0x0  nop
    ctx->pc = 0x27aae4u;
    // NOP
label_27aae8:
    // 0x27aae8: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x27aae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x27aaec: 0x93102b  sltu        $v0, $a0, $s3
    ctx->pc = 0x27aaecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x27aaf0: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x27AAF0u;
    {
        const bool branch_taken_0x27aaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27aaf0) {
            ctx->pc = 0x27AAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AAF0u;
            // 0x27aaf4: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AB30u;
            goto label_27ab30;
        }
    }
    ctx->pc = 0x27AAF8u;
    // 0x27aaf8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x27aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27aafc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x27AAFCu;
    {
        const bool branch_taken_0x27aafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AAFCu;
        // 0x27ab00: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aafc) {
            ctx->pc = 0x27AB2Cu;
            goto label_27ab2c;
        }
    }
    ctx->pc = 0x27AB04u;
    // 0x27ab04: 0x0  nop
    ctx->pc = 0x27ab04u;
    // NOP
label_27ab08:
    // 0x27ab08: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x27ab08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab0c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x27ab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x27ab10: 0x93102b  sltu        $v0, $a0, $s3
    ctx->pc = 0x27ab10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x27ab14: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27AB14u;
    {
        const bool branch_taken_0x27ab14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ab14) {
            ctx->pc = 0x27AB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AB14u;
            // 0x27ab18: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AB30u;
            goto label_27ab30;
        }
    }
    ctx->pc = 0x27AB1Cu;
    // 0x27ab1c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x27ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27ab20: 0x0  nop
    ctx->pc = 0x27ab20u;
    // NOP
    // 0x27ab24: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27AB24u;
    {
        const bool branch_taken_0x27ab24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB24u;
        // 0x27ab28: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab24) {
            ctx->pc = 0x27AB08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27ab08;
        }
    }
    ctx->pc = 0x27AB2Cu;
label_27ab2c:
    // 0x27ab2c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x27ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_27ab30:
    // 0x27ab30: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x27ab30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x27ab34: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27AB34u;
    {
        const bool branch_taken_0x27ab34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB34u;
        // 0x27ab38: 0x268553e8  addiu       $a1, $s4, 0x53E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 21480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab34) {
            ctx->pc = 0x27AB70u;
            goto label_27ab70;
        }
    }
    ctx->pc = 0x27AB3Cu;
    // 0x27ab3c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x27ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27ab40: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x27ab40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x27ab44: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x27ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27ab48: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x27ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x27ab4c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x27ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x27ab50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x27ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27ab54: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x27ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x27ab58: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x27ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27ab5c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x27ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27ab60: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x27ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x27ab64: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x27AB64u;
    {
        const bool branch_taken_0x27ab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB64u;
        // 0x27ab68: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab64) {
            ctx->pc = 0x27ACDCu;
            goto label_27acdc;
        }
    }
    ctx->pc = 0x27AB6Cu;
    // 0x27ab6c: 0x0  nop
    ctx->pc = 0x27ab6cu;
    // NOP
label_27ab70:
    // 0x27ab70: 0x14930015  bne         $a0, $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x27AB70u;
    {
        const bool branch_taken_0x27ab70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        if (branch_taken_0x27ab70) {
            ctx->pc = 0x27ABC8u;
            goto label_27abc8;
        }
    }
    ctx->pc = 0x27AB78u;
    // 0x27ab78: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x27ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x27ab7c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x27ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27ab80: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x27ab80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x27ab84: 0xacf1000c  sw          $s1, 0xC($a3)
    ctx->pc = 0x27ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 17));
    // 0x27ab88: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x27AB88u;
    {
        const bool branch_taken_0x27ab88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB88u;
        // 0x27ab8c: 0xace60010  sw          $a2, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab88) {
            ctx->pc = 0x27ACDCu;
            goto label_27acdc;
        }
    }
    ctx->pc = 0x27AB90u;
    // 0x27ab90: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x27ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27ab94: 0x16220051  bne         $s1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x27AB94u;
    {
        const bool branch_taken_0x27ab94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x27ab94) {
            ctx->pc = 0x27ACDCu;
            goto label_27acdc;
        }
    }
    ctx->pc = 0x27AB9Cu;
    // 0x27ab9c: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x27ab9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aba0: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x27aba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x27aba4: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x27aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x27aba8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x27aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x27abac: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x27abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x27abb0: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x27abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x27abb4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x27abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27abb8: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x27ABB8u;
    {
        const bool branch_taken_0x27abb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ABB8u;
        // 0x27abbc: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27abb8) {
            ctx->pc = 0x27ACDCu;
            goto label_27acdc;
        }
    }
    ctx->pc = 0x27ABC0u;
    // 0x27abc0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x27ABC0u;
    {
        const bool branch_taken_0x27abc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ABC0u;
        // 0x27abc4: 0xac470004  sw          $a3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27abc0) {
            ctx->pc = 0x27ACDCu;
            goto label_27acdc;
        }
    }
    ctx->pc = 0x27ABC8u;
label_27abc8:
    // 0x27abc8: 0x54710007  bnel        $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27ABC8u;
    {
        const bool branch_taken_0x27abc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x27abc8) {
            ctx->pc = 0x27ABCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27ABC8u;
            // 0x27abcc: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27ABE8u;
            goto label_27abe8;
        }
    }
    ctx->pc = 0x27ABD0u;
    // 0x27abd0: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x27abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x27abd4: 0xacf30008  sw          $s3, 0x8($a3)
    ctx->pc = 0x27abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 19));
    // 0x27abd8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x27abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x27abdc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x27ABDCu;
    {
        const bool branch_taken_0x27abdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ABDCu;
        // 0x27abe0: 0xace20010  sw          $v0, 0x10($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27abdc) {
            ctx->pc = 0x27ACDCu;
            goto label_27acdc;
        }
    }
    ctx->pc = 0x27ABE4u;
    // 0x27abe4: 0x0  nop
    ctx->pc = 0x27abe4u;
    // NOP
label_27abe8:
    // 0x27abe8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27ABE8u;
    {
        const bool branch_taken_0x27abe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ABE8u;
        // 0x27abec: 0x268453e8  addiu       $a0, $s4, 0x53E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27abe8) {
            ctx->pc = 0x27AC10u;
            goto label_27ac10;
        }
    }
    ctx->pc = 0x27ABF0u;
    // 0x27abf0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27abf4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x27abf8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27abfc: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x27abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x27ac00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27ac04: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x27ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x27ac08: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x27AC08u;
    {
        const bool branch_taken_0x27ac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC08u;
        // 0x27ac0c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac08) {
            ctx->pc = 0x27ACDCu;
            goto label_27acdc;
        }
    }
    ctx->pc = 0x27AC10u;
label_27ac10:
    // 0x27ac10: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27ac14: 0x2463ac5c  addiu       $v1, $v1, -0x53A4
    ctx->pc = 0x27ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945884));
    // 0x27ac18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27ac1c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27AC1Cu;
    {
        const bool branch_taken_0x27ac1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ac1c) {
            ctx->pc = 0x27AC3Cu;
            goto label_27ac3c;
        }
    }
    ctx->pc = 0x27AC24u;
    // 0x27ac24: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27ac24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27ac28: 0x2484ac70  addiu       $a0, $a0, -0x5390
    ctx->pc = 0x27ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945904));
    // 0x27ac2c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27ac2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27ac30: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27ac30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27ac34: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27AC34u;
    SET_GPR_U32(ctx, 31, 0x27AC3Cu);
    ctx->pc = 0x27AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AC34u;
    // 0x27ac38: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27AC34u, 0x27AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC3Cu;
label_27ac3c:
    // 0x27ac3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27AC3Cu;
    {
        const bool branch_taken_0x27ac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ac3c) {
            ctx->pc = 0x27AC70u;
            goto label_27ac70;
        }
    }
    ctx->pc = 0x27AC44u;
    // 0x27ac44: 0xdde265ff  ld          $v0, 0x65FF($t7)
    ctx->pc = 0x27ac44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 26111)));
    // 0x27ac48: 0xfded3fb2  sd          $t5, 0x3FB2($t7)
    ctx->pc = 0x27ac48u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 16306), GPR_U64(ctx, 13));
    // 0x27ac4c: 0xfcfeb352  sd          $fp, -0x4CAE($a3)
    ctx->pc = 0x27ac4cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294947666), GPR_U64(ctx, 30));
    // 0x27ac50: 0x26f1a6a0  addiu       $s1, $s7, -0x5960
    ctx->pc = 0x27ac50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 4294944416));
    // 0x27ac54: 0x8f4dd405  lw          $t5, -0x2BFB($k0)
    ctx->pc = 0x27ac54u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 26), 4294956037)));
    // 0x27ac58: 0x27983108  addiu       $t8, $gp, 0x3108
    ctx->pc = 0x27ac58u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 28), 12552));
    // 0x27ac5c: 0x0  nop
    ctx->pc = 0x27ac5cu;
    // NOP
    // 0x27ac60: 0xf471e8cd  sdc1        $f17, -0x1733($v1)
    ctx->pc = 0x27ac60u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27AC60 raw=0xF471E8CD");
    // 0x27ac64: 0x980d2916  lwr         $t5, 0x2916($zero)
    ctx->pc = 0x27ac64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10518); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27ac68: 0xf471e8f1  sdc1        $f17, -0x170F($v1)
    ctx->pc = 0x27ac68u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27AC68 raw=0xF471E8F1");
    // 0x27ac6c: 0x0  nop
    ctx->pc = 0x27ac6cu;
    // NOP
label_27ac70:
    // 0x27ac70: 0x7e457e2a  sq          $a1, 0x7E2A($s2)
    ctx->pc = 0x27ac70u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32298), GPR_VEC(ctx, 5));
    // 0x27ac74: 0x7a455e6a  lq          $a1, 0x5E6A($s2)
    ctx->pc = 0x27ac74u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 24170)));
    // 0x27ac78: 0x7a455e6a  lq          $a1, 0x5E6A($s2)
    ctx->pc = 0x27ac78u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 24170)));
    // 0x27ac7c: 0x7a455e6a  lq          $a1, 0x5E6A($s2)
    ctx->pc = 0x27ac7cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 24170)));
    // 0x27ac80: 0xe390cbe3  sc          $s0, -0x341D($gp)
    ctx->pc = 0x27ac80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 4294953955); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 16)); SET_GPR_S32(ctx, 16, 1); } else { SET_GPR_S32(ctx, 16, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x27ac84: 0xabf4f3af  swl         $s4, -0xC51($ra)
    ctx->pc = 0x27ac84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294964143); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ac88: 0xbbe5d2ef  swr         $a1, -0x2D11($ra)
    ctx->pc = 0x27ac88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294955759); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ac8c: 0xabd4d3bf  swl         $s4, -0x2C41($fp)
    ctx->pc = 0x27ac8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 4294955967); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27ac90: 0x93f09bf7  lbu         $s0, -0x6409($ra)
    ctx->pc = 0x27ac90u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 31), 4294941687)));
    // 0x27ac94: 0x6ae4de72  ldl         $a0, -0x218E($s7)
    ctx->pc = 0x27ac94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4294958706); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x27ac98: 0x7a455e6a  lq          $a1, 0x5E6A($s2)
    ctx->pc = 0x27ac98u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 24170)));
    // 0x27ac9c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27aca0: 0x2484ac80  addiu       $a0, $a0, -0x5380
    ctx->pc = 0x27aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945920));
    // 0x27aca4: 0xc09e572  jal         func_2795C8
    ctx->pc = 0x27ACA4u;
    SET_GPR_U32(ctx, 31, 0x27ACACu);
    ctx->pc = 0x27ACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ACA4u;
    // 0x27aca8: 0x7a455e6a  lq          $a1, 0x5E6A($s2) (Delay Slot)
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 24170)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2795C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2795C8u, 0x27ACA4u, 0x27ACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACACu;
label_27acac:
    // 0x27acac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27ACACu;
    {
        const bool branch_taken_0x27acac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27acac) {
            ctx->pc = 0x27ACDCu;
            goto label_27acdc;
        }
    }
    ctx->pc = 0x27ACB4u;
    // 0x27acb4: 0x3632820  add         $a1, $k1, $v1
    ctx->pc = 0x27acb4u;
    {     int32_t rs_val = GPR_S32(ctx, 27);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x27acb8: 0xa25aafb1  sb          $k0, -0x504F($s2)
    ctx->pc = 0x27acb8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4294946737), (uint8_t)GPR_U32(ctx, 26));
    // 0x27acbc: 0xfe9cb1fa  sd          $gp, -0x4E06($s4)
    ctx->pc = 0x27acbcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 4294947322), GPR_U64(ctx, 28));
    // 0x27acc0: 0xcadf0e5  jal         func_2B7C394
    ctx->pc = 0x27ACC0u;
    SET_GPR_U32(ctx, 31, 0x27ACC8u);
    ctx->pc = 0x27ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ACC0u;
    // 0x27acc4: 0xcf76016  jal         func_3DD8058 (Delay Slot)
    // JAL 0x3DD8058 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7C394u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C394u, 0x27ACC0u, 0x27ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACC8u;
label_27acc8:
    // 0x27acc8: 0x8f118d05  lw          $s1, -0x72FB($t8)
    ctx->pc = 0x27acc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294937861)));
label_27accc:
    // 0x27accc: 0xfdc8e174  sd          $t0, -0x1E8C($t6)
    ctx->pc = 0x27acccu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 4294959476), GPR_U64(ctx, 8));
    // 0x27acd0: 0x980d2917  lwr         $t5, 0x2917($zero)
    ctx->pc = 0x27acd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10519); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
label_27acd4:
    // 0x27acd4: 0xfdc8e148  sd          $t0, -0x1EB8($t6)
    ctx->pc = 0x27acd4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 4294959432), GPR_U64(ctx, 8));
    // 0x27acd8: 0x0  nop
    ctx->pc = 0x27acd8u;
    // NOP
label_27acdc:
    // 0x27acdc: 0x12a000e0  beqz        $s5, . + 4 + (0xE0 << 2)
    ctx->pc = 0x27ACDCu;
    {
        const bool branch_taken_0x27acdc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ACDCu;
        // 0x27ace0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27acdc) {
            ctx->pc = 0x27B060u;
            goto label_27b060;
        }
    }
    ctx->pc = 0x27ACE4u;
    // 0x27ace4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x27ace4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27ace8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27ace8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27acec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27acecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27acf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27acf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27acf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27acf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27acf8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27acf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27acfc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x27acfcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ad00: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x27ad00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27ad04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27ad04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27ad08: 0x809e920  j           func_27A480
    ctx->pc = 0x27AD08u;
    ctx->pc = 0x27AD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD08u;
    // 0x27ad0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A480u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_27a480;
    ctx->pc = 0x27AD10u;
label_27ad10:
    // 0x27ad10: 0x96060008  lhu         $a2, 0x8($s0)
    ctx->pc = 0x27ad10u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27ad14: 0x8c435394  lw          $v1, 0x5394($v0)
    ctx->pc = 0x27ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21396)));
    // 0x27ad18: 0x9604000a  lhu         $a0, 0xA($s0)
    ctx->pc = 0x27ad18u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x27ad1c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x27ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x27ad20: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x27ad20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x27ad24: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x27ad24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x27ad28: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x27AD28u;
    {
        const bool branch_taken_0x27ad28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AD28u;
        // 0x27ad2c: 0x831806  srlv        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ad28) {
            ctx->pc = 0x27AE10u;
            goto label_27ae10;
        }
    }
    ctx->pc = 0x27AD30u;
    // 0x27ad30: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27ad34: 0x2463ad7c  addiu       $v1, $v1, -0x5284
    ctx->pc = 0x27ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946172));
    // 0x27ad38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27ad3c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27AD3Cu;
    {
        const bool branch_taken_0x27ad3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ad3c) {
            ctx->pc = 0x27AD5Cu;
            goto label_27ad5c;
        }
    }
    ctx->pc = 0x27AD44u;
    // 0x27ad44: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27ad48: 0x2484ad90  addiu       $a0, $a0, -0x5270
    ctx->pc = 0x27ad48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946192));
    // 0x27ad4c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27ad4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27ad50: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27ad50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27ad54: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27AD54u;
    SET_GPR_U32(ctx, 31, 0x27AD5Cu);
    ctx->pc = 0x27AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AD54u;
    // 0x27ad58: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27AD54u, 0x27AD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AD5Cu;
label_27ad5c:
    // 0x27ad5c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27AD5Cu;
    {
        const bool branch_taken_0x27ad5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ad5c) {
            ctx->pc = 0x27AD90u;
            goto label_27ad90;
        }
    }
    ctx->pc = 0x27AD64u;
    // 0x27ad64: 0xa0eb0be1  sb          $t3, 0xBE1($a3)
    ctx->pc = 0x27ad64u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3041), (uint8_t)GPR_U32(ctx, 11));
    // 0x27ad68: 0xffcaea02  sd          $t2, -0x15FE($fp)
    ctx->pc = 0x27ad68u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294961666), GPR_U64(ctx, 10));
    // 0x27ad6c: 0x1471820  add         $v1, $t2, $a3
    ctx->pc = 0x27ad6cu;
    {     int32_t rs_val = GPR_S32(ctx, 10);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
    // 0x27ad70: 0xa1dfff51  sb          $ra, -0xAF($t6)
    ctx->pc = 0x27ad70u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 4294967121), (uint8_t)GPR_U32(ctx, 31));
    // 0x27ad74: 0xfda24bca  sd          $v0, 0x4BCA($t5)
    ctx->pc = 0x27ad74u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 19402), GPR_U64(ctx, 2));
    // 0x27ad78: 0x270b6fb8  addiu       $t3, $t8, 0x6FB8
    ctx->pc = 0x27ad78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 24), 28600));
    // 0x27ad7c: 0x0  nop
    ctx->pc = 0x27ad7cu;
    // NOP
    // 0x27ad80: 0x65cd3e8e  daddiu      $t5, $t6, 0x3E8E
    ctx->pc = 0x27ad80u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)16014);
    // 0x27ad84: 0x980d2970  lwr         $t5, 0x2970($zero)
    ctx->pc = 0x27ad84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10608); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27ad88: 0x65cd3eca  daddiu      $t5, $t6, 0x3ECA
    ctx->pc = 0x27ad88u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 14) + (int64_t)(int32_t)16074);
    // 0x27ad8c: 0x0  nop
    ctx->pc = 0x27ad8cu;
    // NOP
label_27ad90:
    // 0x27ad90: 0xf88d6a7c  sqc2        $vf13, 0x6A7C($a0)
    ctx->pc = 0x27ad90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 27260), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x27ad94: 0xf88c6a1e  sqc2        $vf12, 0x6A1E($a0)
    ctx->pc = 0x27ad94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 27166), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x27ad98: 0xf88c6a1e  sqc2        $vf12, 0x6A1E($a0)
    ctx->pc = 0x27ad98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 27166), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x27ad9c: 0xf88c6a1e  sqc2        $vf12, 0x6A1E($a0)
    ctx->pc = 0x27ad9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 27166), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x27ada0: 0x140147b3  bne         $zero, $at, . + 4 + (0x47B3 << 2)
    ctx->pc = 0x27ADA0u;
    {
        const bool branch_taken_0x27ada0 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 1));
        ctx->pc = 0x27ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ADA0u;
        // 0x27ada4: 0xd420e7d2  ldc1        $f0, -0x182E($at) (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x35 at 0x27ADA4 raw=0xD420E7D2");
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ada0) {
            ctx->pc = 0x28CC70u;
            return;
        }
    }
    ctx->pc = 0x27ADA8u;
    // 0x27ada8: 0xf6884f12  sdc1        $f8, 0x4F12($s4)
    ctx->pc = 0x27ada8u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x27ADA8 raw=0xF6884F12");
    // 0x27adac: 0x5d2046fb  bgtzl       $t1, . + 4 + (0x46FB << 2)
    ctx->pc = 0x27ADACu;
    {
        const bool branch_taken_0x27adac = (GPR_S32(ctx, 9) > 0);
        if (branch_taken_0x27adac) {
            ctx->pc = 0x27ADB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27ADACu;
            // 0x27adb0: 0xf5684413  sdc1        $f8, 0x4413($t3) (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x3D at 0x27ADB0 raw=0xF5684413");
            ctx->in_delay_slot = false;
            ctx->pc = 0x28C99Cu;
            return;
        }
    }
    ctx->pc = 0x27ADB4u;
    // 0x27adb4: 0x742124d0  .word       0x742124D0                   # INVALID     $at, $at, 0x24D0 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27adb4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x27ADB4 raw=0x742124D0");
    // 0x27adb8: 0xf8896ade  sqc2        $vf9, 0x6ADE($a0)
    ctx->pc = 0x27adb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 27358), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x27adbc: 0xf88c6a1e  sqc2        $vf12, 0x6A1E($a0)
    ctx->pc = 0x27adbcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 27166), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x27adc0: 0xf88c6a1e  sqc2        $vf12, 0x6A1E($a0)
    ctx->pc = 0x27adc0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 27166), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x27adc4: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27adc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27adc8: 0x2484ada0  addiu       $a0, $a0, -0x5260
    ctx->pc = 0x27adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946208));
    // 0x27adcc: 0xc09e574  jal         func_2795D0
    ctx->pc = 0x27ADCCu;
    SET_GPR_U32(ctx, 31, 0x27ADD4u);
    ctx->pc = 0x27ADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ADCCu;
    // 0x27add0: 0xf88c6a1e  sqc2        $vf12, 0x6A1E($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 27166), _mm_castps_si128(ctx->vu0_vf[12]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2795D0u, 0x27ADCCu, 0x27ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADD4u;
label_27add4:
    // 0x27add4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27ADD4u;
    {
        const bool branch_taken_0x27add4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27add4) {
            ctx->pc = 0x27AE04u;
            goto label_27ae04;
        }
    }
    ctx->pc = 0x27ADDCu;
    // 0x27addc: 0xca56759  jal         func_2959D64
    ctx->pc = 0x27ADDCu;
    SET_GPR_U32(ctx, 31, 0x27ADE4u);
    ctx->pc = 0x27ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ADDCu;
    // 0x27ade0: 0xfe892262  sd          $t1, 0x2262($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 8802), GPR_U64(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2959D64u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2959D64u, 0x27ADDCu, 0x27ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ADE4u;
label_27ade4:
    // 0x27ade4: 0xa1f244f1  sb          $s2, 0x44F1($t7)
    ctx->pc = 0x27ade4u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 17649), (uint8_t)GPR_U32(ctx, 18));
    // 0x27ade8: 0xa214f471  sb          $s4, -0xB8F($s0)
    ctx->pc = 0x27ade8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294964337), (uint8_t)GPR_U32(ctx, 20));
    // 0x27adec: 0xfeb1bf8a  sd          $s1, -0x4076($s5)
    ctx->pc = 0x27adecu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294950794), GPR_U64(ctx, 17));
    // 0x27adf0: 0xa374dbc9  sb          $s4, -0x2437($k1)
    ctx->pc = 0x27adf0u;
    WRITE8(ADD32(GPR_U32(ctx, 27), 4294958025), (uint8_t)GPR_U32(ctx, 20));
    // 0x27adf4: 0x65e8e3dc  daddiu      $t0, $t7, -0x1C24
    ctx->pc = 0x27adf4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 15) + (int64_t)(int32_t)4294960092);
    // 0x27adf8: 0x980d2971  lwr         $t5, 0x2971($zero)
    ctx->pc = 0x27adf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10609); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27adfc: 0x65e8e398  daddiu      $t0, $t7, -0x1C68
    ctx->pc = 0x27adfcu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 15) + (int64_t)(int32_t)4294960024);
    // 0x27ae00: 0x0  nop
    ctx->pc = 0x27ae00u;
    // NOP
label_27ae04:
    // 0x27ae04: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x27AE04u;
    {
        const bool branch_taken_0x27ae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE04u;
        // 0x27ae08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae04) {
            ctx->pc = 0x27B064u;
            goto label_27b064;
        }
    }
    ctx->pc = 0x27AE0Cu;
    // 0x27ae0c: 0x0  nop
    ctx->pc = 0x27ae0cu;
    // NOP
label_27ae10:
    // 0x27ae10: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x27ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x27ae14: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x27ae14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x27ae18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27ae1c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x27ae1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27ae20: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x27ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x27ae24: 0x769004  sllv        $s2, $s6, $v1
    ctx->pc = 0x27ae24u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 22), GPR_U32(ctx, 3) & 0x1F));
    // 0x27ae28: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x27ae28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27ae2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27ae30: 0x921024  and         $v0, $a0, $s2
    ctx->pc = 0x27ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x27ae34: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x27AE34u;
    {
        const bool branch_taken_0x27ae34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AE34u;
        // 0x27ae38: 0x3c0201c3  lui         $v0, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ae34) {
            ctx->pc = 0x27AF18u;
            goto label_27af18;
        }
    }
    ctx->pc = 0x27AE3Cu;
    // 0x27ae3c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27ae40: 0x2463ae88  addiu       $v1, $v1, -0x5178
    ctx->pc = 0x27ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946440));
    // 0x27ae44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27ae48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27AE48u;
    {
        const bool branch_taken_0x27ae48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ae48) {
            ctx->pc = 0x27AE68u;
            goto label_27ae68;
        }
    }
    ctx->pc = 0x27AE50u;
    // 0x27ae50: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27ae50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27ae54: 0x2484ae9c  addiu       $a0, $a0, -0x5164
    ctx->pc = 0x27ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946460));
    // 0x27ae58: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27ae58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27ae5c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27ae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27ae60: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27AE60u;
    SET_GPR_U32(ctx, 31, 0x27AE68u);
    ctx->pc = 0x27AE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AE60u;
    // 0x27ae64: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27AE60u, 0x27AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE68u;
label_27ae68:
    // 0x27ae68: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27AE68u;
    {
        const bool branch_taken_0x27ae68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ae68) {
            ctx->pc = 0x27AE9Cu;
            goto label_27ae9c;
        }
    }
    ctx->pc = 0x27AE70u;
    // 0x27ae70: 0xfd389412  sd          $t8, -0x6BEE($t1)
    ctx->pc = 0x27ae70u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 4294939666), GPR_U64(ctx, 24));
    // 0x27ae74: 0xfc9dcb7a  sd          $sp, -0x3486($a0)
    ctx->pc = 0x27ae74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294953850), GPR_U64(ctx, 29));
    // 0x27ae78: 0xa2da9671  sb          $k0, -0x698F($s6)
    ctx->pc = 0x27ae78u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4294940273), (uint8_t)GPR_U32(ctx, 26));
    // 0x27ae7c: 0x16c2020  add         $a0, $t3, $t4
    ctx->pc = 0x27ae7cu;
    {     int32_t rs_val = GPR_S32(ctx, 11);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x27ae80: 0xff0f2852  sd          $t7, 0x2852($t8)
    ctx->pc = 0x27ae80u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 10322), GPR_U64(ctx, 15));
    // 0x27ae84: 0x8f95c3fd  lw          $s5, -0x3C03($gp)
    ctx->pc = 0x27ae84u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951933)));
    // 0x27ae88: 0x0  nop
    ctx->pc = 0x27ae88u;
    // NOP
    // 0x27ae8c: 0xa16ee37b  sb          $t6, -0x1C85($t3)
    ctx->pc = 0x27ae8cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4294959995), (uint8_t)GPR_U32(ctx, 14));
    // 0x27ae90: 0x980d29ca  lwr         $t5, 0x29CA($zero)
    ctx->pc = 0x27ae90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10698); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27ae94: 0xa16ee33b  sb          $t6, -0x1CC5($t3)
    ctx->pc = 0x27ae94u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4294959931), (uint8_t)GPR_U32(ctx, 14));
    // 0x27ae98: 0x0  nop
    ctx->pc = 0x27ae98u;
    // NOP
label_27ae9c:
    // 0x27ae9c: 0xf8ec5509  sqc2        $vf12, 0x5509($a3)
    ctx->pc = 0x27ae9cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 21769), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x27aea0: 0xf8ed1709  sqc2        $vf13, 0x1709($a3)
    ctx->pc = 0x27aea0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 5897), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x27aea4: 0xf8ed1709  sqc2        $vf13, 0x1709($a3)
    ctx->pc = 0x27aea4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 5897), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x27aea8: 0xf8ed1709  sqc2        $vf13, 0x1709($a3)
    ctx->pc = 0x27aea8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 5897), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x27aeac: 0xd4031ba5  ldc1        $f3, 0x1BA5($zero)
    ctx->pc = 0x27aeacu;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x27AEAC raw=0xD4031BA5");
    // 0x27aeb0: 0xd6891304  ldc1        $f9, 0x1304($s4)
    ctx->pc = 0x27aeb0u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x27AEB0 raw=0xD6891304");
    // 0x27aeb4: 0x76a13ba4  .word       0x76A13BA4                   # INVALID     $s5, $at, 0x3BA4 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27aeb4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x27AEB4 raw=0x76A13BA4");
    // 0x27aeb8: 0x77c13305  .word       0x77C13305                   # INVALID     $fp, $at, 0x3305 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27aeb8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x27AEB8 raw=0x77C13305");
    // 0x27aebc: 0xb441dba7  sdr         $at, -0x2459($v0)
    ctx->pc = 0x27aebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294957991); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 1); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27aec0: 0xf8e8d709  sqc2        $vf8, -0x28F7($a3)
    ctx->pc = 0x27aec0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 4294956809), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x27aec4: 0xf8ed1709  sqc2        $vf13, 0x1709($a3)
    ctx->pc = 0x27aec4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 5897), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x27aec8: 0xf8ed1709  sqc2        $vf13, 0x1709($a3)
    ctx->pc = 0x27aec8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 5897), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x27aecc: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27aeccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27aed0: 0x2484aeac  addiu       $a0, $a0, -0x5154
    ctx->pc = 0x27aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946476));
    // 0x27aed4: 0xc09e574  jal         func_2795D0
    ctx->pc = 0x27AED4u;
    SET_GPR_U32(ctx, 31, 0x27AEDCu);
    ctx->pc = 0x27AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AED4u;
    // 0x27aed8: 0xf8ed1709  sqc2        $vf13, 0x1709($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 5897), _mm_castps_si128(ctx->vu0_vf[13]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2795D0u, 0x27AED4u, 0x27AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEDCu;
label_27aedc:
    // 0x27aedc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27AEDCu;
    {
        const bool branch_taken_0x27aedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27aedc) {
            ctx->pc = 0x27AF0Cu;
            goto label_27af0c;
        }
    }
    ctx->pc = 0x27AEE4u;
    // 0x27aee4: 0x4bb020  add         $s6, $v0, $t3
    ctx->pc = 0x27aee4u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x27aee8: 0x8539e0b3  lh          $t9, -0x1F4D($t1)
    ctx->pc = 0x27aee8u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294959283)));
    // 0x27aeec: 0xcc5758b  jal         func_315D62C
    ctx->pc = 0x27AEECu;
    SET_GPR_U32(ctx, 31, 0x27AEF4u);
    ctx->pc = 0x27AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AEECu;
    // 0x27aef0: 0xc269179  jal         func_9A45E4 (Delay Slot)
    // JAL 0x9A45E4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x315D62Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315D62Cu, 0x27AEECu, 0x27AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEF4u;
label_27aef4:
    // 0x27aef4: 0xc56bd01  jal         func_15AF404
label_27aef8:
    if (ctx->pc == 0x27AEF8u) {
        ctx->pc = 0x27AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AEF4u;
        // 0x27aef8: 0x8d74db5d  lw          $s4, -0x24A3($t3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294957917)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AEFCu;
        goto label_27aefc;
    }
    ctx->pc = 0x27AEF4u;
    SET_GPR_U32(ctx, 31, 0x27AEFCu);
    ctx->pc = 0x27AEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AEF4u;
    // 0x27aef8: 0x8d74db5d  lw          $s4, -0x24A3($t3) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294957917)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AF404u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AF404u, 0x27AEF4u, 0x27AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEFCu;
label_27aefc:
    // 0x27aefc: 0xa16ee3b7  sb          $t6, -0x1C49($t3)
    ctx->pc = 0x27aefcu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4294960055), (uint8_t)GPR_U32(ctx, 14));
    // 0x27af00: 0x980d29cb  lwr         $t5, 0x29CB($zero)
    ctx->pc = 0x27af00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10699); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27af04: 0xa16ee3f7  sb          $t6, -0x1C09($t3)
    ctx->pc = 0x27af04u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4294960119), (uint8_t)GPR_U32(ctx, 14));
    // 0x27af08: 0x0  nop
    ctx->pc = 0x27af08u;
    // NOP
label_27af0c:
    // 0x27af0c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x27AF0Cu;
    {
        const bool branch_taken_0x27af0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF0Cu;
        // 0x27af10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af0c) {
            ctx->pc = 0x27B064u;
            goto label_27b064;
        }
    }
    ctx->pc = 0x27AF14u;
    // 0x27af14: 0x0  nop
    ctx->pc = 0x27af14u;
    // NOP
label_27af18:
    // 0x27af18: 0x8c4353e4  lw          $v1, 0x53E4($v0)
    ctx->pc = 0x27af18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21476)));
    // 0x27af1c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27AF1Cu;
    {
        const bool branch_taken_0x27af1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27af1c) {
            ctx->pc = 0x27AF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AF1Cu;
            // 0x27af20: 0x921025  or          $v0, $a0, $s2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AF38u;
            goto label_27af38;
        }
    }
    ctx->pc = 0x27AF24u;
    // 0x27af24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27af24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27af28: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x27AF28u;
    SET_GPR_U32(ctx, 31, 0x27AF30u);
    ctx->pc = 0x27AF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AF28u;
    // 0x27af2c: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x27AF28u, 0x27AF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF30u;
label_27af30:
    // 0x27af30: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27af30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27af34: 0x921025  or          $v0, $a0, $s2
    ctx->pc = 0x27af34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
label_27af38:
    // 0x27af38: 0x3c1201c3  lui         $s2, 0x1C3
    ctx->pc = 0x27af38u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)451 << 16));
    // 0x27af3c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x27af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x27af40: 0x264553fc  addiu       $a1, $s2, 0x53FC
    ctx->pc = 0x27af40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 21500));
    // 0x27af44: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x27af44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27af48: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x27af48u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27af4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27af50: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x27af50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x27af54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x27af54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27af58: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x27af58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27af5c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27af60: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27af60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x27af64: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x27af64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x27af68: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x27af68u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27af6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27af70: 0x1496001b  bne         $a0, $s6, . + 4 + (0x1B << 2)
    ctx->pc = 0x27AF70u;
    {
        const bool branch_taken_0x27af70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        ctx->pc = 0x27AF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF70u;
        // 0x27af74: 0xc21821  addu        $v1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af70) {
            ctx->pc = 0x27AFE0u;
            goto label_27afe0;
        }
    }
    ctx->pc = 0x27AF78u;
    // 0x27af78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27af78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27af7c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27AF7Cu;
    {
        const bool branch_taken_0x27af7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AF7Cu;
        // 0x27af80: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27af7c) {
            ctx->pc = 0x27AFD4u;
            goto label_27afd4;
        }
    }
    ctx->pc = 0x27AF84u;
    // 0x27af84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27af84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27af88: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x27AF88u;
    {
        const bool branch_taken_0x27af88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27af88) {
            ctx->pc = 0x27AF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AF88u;
            // 0x27af8c: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AFD8u;
            goto label_27afd8;
        }
    }
    ctx->pc = 0x27AF90u;
    // 0x27af90: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x27af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27af94: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x27af94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27af98: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x27af98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x27af9c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x27AF9Cu;
    {
        const bool branch_taken_0x27af9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27af9c) {
            ctx->pc = 0x27AFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AF9Cu;
            // 0x27afa0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AFD8u;
            goto label_27afd8;
        }
    }
    ctx->pc = 0x27AFA4u;
    // 0x27afa4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x27afa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27afa8:
    // 0x27afa8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27afac: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27AFACu;
    {
        const bool branch_taken_0x27afac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFACu;
        // 0x27afb0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afac) {
            ctx->pc = 0x27AFD4u;
            goto label_27afd4;
        }
    }
    ctx->pc = 0x27AFB4u;
    // 0x27afb4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27afb8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x27AFB8u;
    {
        const bool branch_taken_0x27afb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27afb8) {
            ctx->pc = 0x27AFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AFB8u;
            // 0x27afbc: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AFD8u;
            goto label_27afd8;
        }
    }
    ctx->pc = 0x27AFC0u;
    // 0x27afc0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x27afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27afc4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x27afc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x27afc8: 0x0  nop
    ctx->pc = 0x27afc8u;
    // NOP
    // 0x27afcc: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x27AFCCu;
    {
        const bool branch_taken_0x27afcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27afcc) {
            ctx->pc = 0x27AFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AFCCu;
            // 0x27afd0: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AFA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27afa8;
        }
    }
    ctx->pc = 0x27AFD4u;
label_27afd4:
    // 0x27afd4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x27afd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_27afd8:
    // 0x27afd8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x27AFD8u;
    {
        const bool branch_taken_0x27afd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AFD8u;
        // 0x27afdc: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27afd8) {
            ctx->pc = 0x27B060u;
            goto label_27b060;
        }
    }
    ctx->pc = 0x27AFE0u;
label_27afe0:
    // 0x27afe0: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x27afe0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x27afe4: 0x5482001f  bnel        $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x27AFE4u;
    {
        const bool branch_taken_0x27afe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x27afe4) {
            ctx->pc = 0x27AFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AFE4u;
            // 0x27afe8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B064u;
            goto label_27b064;
        }
    }
    ctx->pc = 0x27AFECu;
    // 0x27afec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27afecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27aff0: 0x50900009  beql        $a0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27AFF0u;
    {
        const bool branch_taken_0x27aff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x27aff0) {
            ctx->pc = 0x27AFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AFF0u;
            // 0x27aff4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27B018u;
            goto label_27b018;
        }
    }
    ctx->pc = 0x27AFF8u;
label_27aff8:
    // 0x27aff8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x27aff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27affc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b000: 0x0  nop
    ctx->pc = 0x27b000u;
    // NOP
    // 0x27b004: 0x0  nop
    ctx->pc = 0x27b004u;
    // NOP
    // 0x27b008: 0x0  nop
    ctx->pc = 0x27b008u;
    // NOP
    // 0x27b00c: 0x1450fffa  bne         $v0, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27B00Cu;
    {
        const bool branch_taken_0x27b00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x27B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B00Cu;
        // 0x27b010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b00c) {
            ctx->pc = 0x27AFF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27aff8;
        }
    }
    ctx->pc = 0x27B014u;
    // 0x27b014: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x27b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27b018:
    // 0x27b018: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27b018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b01c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x27b01cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x27b020: 0x8ee353ac  lw          $v1, 0x53AC($s7)
    ctx->pc = 0x27b020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21420)));
    // 0x27b024: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x27b024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x27b028: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x27b028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x27b02c: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x27b02cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27b030: 0x12300004  beq         $s1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27B030u;
    {
        const bool branch_taken_0x27b030 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x27B034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B030u;
        // 0x27b034: 0x264553fc  addiu       $a1, $s2, 0x53FC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 21500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b030) {
            ctx->pc = 0x27B044u;
            goto label_27b044;
        }
    }
    ctx->pc = 0x27B038u;
    // 0x27b038: 0xc09e920  jal         func_27A480
    ctx->pc = 0x27B038u;
    SET_GPR_U32(ctx, 31, 0x27B040u);
    ctx->pc = 0x27B03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B038u;
    // 0x27b03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A480u;
    goto label_27a480;
    ctx->pc = 0x27B040u;
label_27b040:
    // 0x27b040: 0x264553fc  addiu       $a1, $s2, 0x53FC
    ctx->pc = 0x27b040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 21500));
label_27b044:
    // 0x27b044: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x27b044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
    // 0x27b048: 0x8c43538c  lw          $v1, 0x538C($v0)
    ctx->pc = 0x27b048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21388)));
    // 0x27b04c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27b04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b050: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x27b050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27b054: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27b054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27b058: 0xc09e920  jal         func_27A480
    ctx->pc = 0x27B058u;
    SET_GPR_U32(ctx, 31, 0x27B060u);
    ctx->pc = 0x27B05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B058u;
    // 0x27b05c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A480u;
    goto label_27a480;
    ctx->pc = 0x27B060u;
label_27b060:
    // 0x27b060: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27b060u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27b064:
    // 0x27b064: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27b064u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27b068: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27b068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b06c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27b06cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27b070: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27b070u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b074: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x27b074u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27b078: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x27b078u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b07c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x27b07cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27b080: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27b080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b084: 0x3e00008  jr          $ra
    ctx->pc = 0x27B084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B084u;
        // 0x27b088: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B08Cu;
    // 0x27b08c: 0x0  nop
    ctx->pc = 0x27b08cu;
    // NOP
}
