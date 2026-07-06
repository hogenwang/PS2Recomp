#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E4118
// Address: 0x2e4118 - 0x2e44f0
void sub_002E4118_0x2e4118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4118_0x2e4118");
#endif

    switch (ctx->pc) {
        case 0x2e4180u: goto label_2e4180;
        case 0x2e419cu: goto label_2e419c;
        case 0x2e4210u: goto label_2e4210;
        case 0x2e423cu: goto label_2e423c;
        case 0x2e4258u: goto label_2e4258;
        case 0x2e42fcu: goto label_2e42fc;
        case 0x2e4310u: goto label_2e4310;
        case 0x2e432cu: goto label_2e432c;
        case 0x2e4344u: goto label_2e4344;
        case 0x2e4390u: goto label_2e4390;
        case 0x2e4408u: goto label_2e4408;
        case 0x2e4464u: goto label_2e4464;
        case 0x2e4474u: goto label_2e4474;
        case 0x2e4478u: goto label_2e4478;
        case 0x2e4488u: goto label_2e4488;
        case 0x2e44b4u: goto label_2e44b4;
        default: break;
    }

    ctx->pc = 0x2e4118u;

    // 0x2e4118: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2e4118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x2e411c: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x2e411cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x2e4120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e4120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4124: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x2e4124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x2e4128: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e4128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e412c: 0xffb50148  sd          $s5, 0x148($sp)
    ctx->pc = 0x2e412cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 21));
    // 0x2e4130: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2e4130u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4134: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x2e4134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x2e4138: 0xffb30138  sd          $s3, 0x138($sp)
    ctx->pc = 0x2e4138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 19));
    // 0x2e413c: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x2e413cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x2e4140: 0xffb60150  sd          $s6, 0x150($sp)
    ctx->pc = 0x2e4140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
    // 0x2e4144: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x2e4144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
    // 0x2e4148: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x2e4148u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2e414c: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x2e414cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2e4150: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x2e4150u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2e4154: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e4154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e4158: 0x246341a0  addiu       $v1, $v1, 0x41A0
    ctx->pc = 0x2e4158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16800));
    // 0x2e415c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4160: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E4160u;
    {
        const bool branch_taken_0x2e4160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4160) {
            ctx->pc = 0x2E4180u;
            goto label_2e4180;
        }
    }
    ctx->pc = 0x2E4168u;
    // 0x2e4168: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e4168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e416c: 0x248441b4  addiu       $a0, $a0, 0x41B4
    ctx->pc = 0x2e416cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16820));
    // 0x2e4170: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e4170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e4174: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e4174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e4178: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E4178u;
    SET_GPR_U32(ctx, 31, 0x2E4180u);
    ctx->pc = 0x2E417Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4178u;
            // 0x2e417c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4180u; }
        if (ctx->pc != 0x2E4180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4180u; }
        if (ctx->pc != 0x2E4180u) { return; }
    }
    ctx->pc = 0x2E4180u;
label_2e4180:
    // 0x2e4180: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E4180u;
    {
        const bool branch_taken_0x2e4180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4180) {
            ctx->pc = 0x2E41B4u;
            goto label_2e41b4;
        }
    }
    ctx->pc = 0x2E4188u;
    // 0x2e4188: 0xa2a821b9  sb          $t0, 0x21B9($s5)
    ctx->pc = 0x2e4188u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 8633), (uint8_t)GPR_U32(ctx, 8));
    // 0x2e418c: 0xa2705ba1  sb          $s0, 0x5BA1($s3)
    ctx->pc = 0x2e418cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 23457), (uint8_t)GPR_U32(ctx, 16));
    // 0x2e4190: 0xffb9ae7a  sd          $t9, -0x5186($sp)
    ctx->pc = 0x2e4190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4294946426), GPR_U64(ctx, 25));
    // 0x2e4194: 0xcc86f3c  jal         func_321BCF0
    ctx->pc = 0x2E4194u;
    SET_GPR_U32(ctx, 31, 0x2E419Cu);
    ctx->pc = 0x2E4198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4194u;
            // 0x2e4198: 0x84ef733b  lh          $t7, 0x733B($a3) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 29499)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x321BCF0u;
    {
        auto targetFn = runtime->lookupFunction(0x321BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E419Cu; }
        if (ctx->pc != 0x2E419Cu) { return; }
    }
    ctx->pc = 0x2E419Cu;
label_2e419c:
    // 0x2e419c: 0x270a0ad0  addiu       $t2, $t8, 0xAD0
    ctx->pc = 0x2e419cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), 2768));
    // 0x2e41a0: 0x0  nop
    ctx->pc = 0x2e41a0u;
    // NOP
    // 0x2e41a4: 0xaee63cfc  sw          $a2, 0x3CFC($s7)
    ctx->pc = 0x2e41a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 15612), GPR_U32(ctx, 6));
    // 0x2e41a8: 0xcb1ca130  lwc2        $28, -0x5ED0($t8)
    ctx->pc = 0x2e41a8u;
    // Unhandled opcode: 0x32
    // 0x2e41ac: 0xaee63e4c  sw          $a2, 0x3E4C($s7)
    ctx->pc = 0x2e41acu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 15948), GPR_U32(ctx, 6));
    // 0x2e41b0: 0x0  nop
    ctx->pc = 0x2e41b0u;
    // NOP
label_2e41b4:
    // 0x2e41b4: 0xf873898f  sqc2        $vf19, -0x7671($v1)
    ctx->pc = 0x2e41b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294936975), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x2e41b8: 0xce13e92d  pref        0x13, -0x16D3($s0)
    ctx->pc = 0x2e41b8u;
    // PREF instruction (ignored)
    // 0x2e41bc: 0xcc73e9af  pref        0x13, -0x1651($v1)
    ctx->pc = 0x2e41bcu;
    // PREF instruction (ignored)
    // 0x2e41c0: 0x14f39692  bne         $a3, $s3, . + 4 + (-0x696E << 2)
    ctx->pc = 0x2E41C0u;
    {
        const bool branch_taken_0x2e41c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 19));
        ctx->pc = 0x2E41C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E41C0u;
            // 0x2e41c4: 0xf00309ed  scd         $v1, 0x9ED($zero) (Delay Slot)
        // Unhandled opcode: 0x3C
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41c0) {
            ctx->pc = 0x2C9C0Cu;
            return;
        }
    }
    ctx->pc = 0x2E41C8u;
    // 0x2e41c8: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e41c8u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e41cc: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e41ccu;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e41d0: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e41d0u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e41d4: 0x145796d2  bne         $v0, $s7, . + 4 + (-0x692E << 2)
    ctx->pc = 0x2E41D4u;
    {
        const bool branch_taken_0x2e41d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x2E41D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E41D4u;
            // 0x2e41d8: 0x10f396b2  beq         $a3, $s3, . + 4 + (-0x694E << 2) (Delay Slot)
        // Likely branch instruction at 0x2E41D8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41d4) {
            ctx->pc = 0x2C9D20u;
            return;
        }
    }
    ctx->pc = 0x2E41DCu;
    // 0x2e41dc: 0xf873898f  sqc2        $vf19, -0x7671($v1)
    ctx->pc = 0x2e41dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294936975), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x2e41e0: 0xec73c9af  .word       0xEC73C9AF                   # INVALID     $v1, $s3, -0x3651 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e41e0u;
    // Unhandled opcode: 0x3B
    // 0x2e41e4: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e41e4u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e41e8: 0x14f39692  bne         $a3, $s3, . + 4 + (-0x696E << 2)
    ctx->pc = 0x2E41E8u;
    {
        const bool branch_taken_0x2e41e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 19));
        ctx->pc = 0x2E41ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E41E8u;
            // 0x2e41ec: 0xf00309ed  scd         $v1, 0x9ED($zero) (Delay Slot)
        // Unhandled opcode: 0x3C
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41e8) {
            ctx->pc = 0x2C9C34u;
            return;
        }
    }
    ctx->pc = 0x2E41F0u;
    // 0x2e41f0: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e41f0u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e41f4: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e41f4u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e41f8: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e41f8u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e41fc: 0x145796d2  bne         $v0, $s7, . + 4 + (-0x692E << 2)
    ctx->pc = 0x2E41FCu;
    {
        const bool branch_taken_0x2e41fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x2E4200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E41FCu;
            // 0x2e4200: 0x10f396b2  beq         $a3, $s3, . + 4 + (-0x694E << 2) (Delay Slot)
        // Likely branch instruction at 0x2E4200 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41fc) {
            ctx->pc = 0x2C9D48u;
            return;
        }
    }
    ctx->pc = 0x2E4204u;
    // 0x2e4204: 0xf8b74de8  sqc2        $vf23, 0x4DE8($a1)
    ctx->pc = 0x2e4204u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 19944), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e4208: 0xc04485c  jal         func_112170
    ctx->pc = 0x2E4208u;
    SET_GPR_U32(ctx, 31, 0x2E4210u);
    ctx->pc = 0x2E420Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4208u;
            // 0x2e420c: 0xf833894d  sqc2        $vf19, -0x76B3($at) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 1), 4294936909), _mm_castps_si128(ctx->vu0_vf[19]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (runtime->hasFunction(0x112170u)) {
        auto targetFn = runtime->lookupFunction(0x112170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4210u; }
        if (ctx->pc != 0x2E4210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00112170_0x112170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4210u; }
        if (ctx->pc != 0x2E4210u) { return; }
    }
    ctx->pc = 0x2E4210u;
label_2e4210:
    // 0x2e4210: 0xf0b71be8  scd         $s7, 0x1BE8($a1)
    ctx->pc = 0x2e4210u;
    // Unhandled opcode: 0x3C
    // 0x2e4214: 0xf037c9e7  scd         $s7, -0x3619($at)
    ctx->pc = 0x2e4214u;
    // Unhandled opcode: 0x3C
    // 0x2e4218: 0x1af39672  .word       0x1AF39672                   # blez        $s7, . + 4 + (-0x698E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E4218u;
    {
        const bool branch_taken_0x2e4218 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2E421Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4218u;
            // 0x2e421c: 0xf8b719e8  sqc2        $vf23, 0x19E8($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 6632), _mm_castps_si128(ctx->vu0_vf[23]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4218) {
            ctx->pc = 0x2C9BE4u;
            return;
        }
    }
    ctx->pc = 0x2E4220u;
    // 0x2e4220: 0xfef3c972  sd          $s3, -0x368E($s7)
    ctx->pc = 0x2e4220u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 4294953330), GPR_U64(ctx, 19));
    // 0x2e4224: 0xf81509ee  sqc2        $vf21, 0x9EE($zero)
    ctx->pc = 0x2e4224u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2542), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x2e4228: 0xfe12498d  sd          $s2, 0x498D($s0)
    ctx->pc = 0x2e4228u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 18829), GPR_U64(ctx, 18));
    // 0x2e422c: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e422cu;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e4230: 0xecb76ce8  .word       0xECB76CE8                   # INVALID     $a1, $s7, 0x6CE8 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e4230u;
    // Unhandled opcode: 0x3B
    // 0x2e4234: 0xc0449ee  jal         func_1127B8
    ctx->pc = 0x2E4234u;
    SET_GPR_U32(ctx, 31, 0x2E423Cu);
    ctx->pc = 0x2E4238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4234u;
            // 0x2e4238: 0xd813892d  lqc2        $vf19, -0x76D3($zero) (Delay Slot)
        ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 0), 4294936877)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1127B8u;
    if (runtime->hasFunction(0x1127B8u)) {
        auto targetFn = runtime->lookupFunction(0x1127B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E423Cu; }
        if (ctx->pc != 0x2E423Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001127B8_0x1127b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E423Cu; }
        if (ctx->pc != 0x2E423Cu) { return; }
    }
    ctx->pc = 0x2E423Cu;
label_2e423c:
    // 0x2e423c: 0xd813898d  lqc2        $vf19, -0x7673($zero)
    ctx->pc = 0x2e423cu;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 0), 4294936973)));
    // 0x2e4240: 0xf0dd8985  scd         $sp, -0x767B($a2)
    ctx->pc = 0x2e4240u;
    // Unhandled opcode: 0x3C
    // 0x2e4244: 0x1af39672  .word       0x1AF39672                   # blez        $s7, . + 4 + (-0x698E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E4244u;
    {
        const bool branch_taken_0x2e4244 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2E4248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4244u;
            // 0x2e4248: 0xe0b74fe8  sc          $s7, 0x4FE8($a1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 5), 20456); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 23)); SET_GPR_S32(ctx, 23, 1); } else { SET_GPR_S32(ctx, 23, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4244) {
            ctx->pc = 0x2C9C10u;
            return;
        }
    }
    ctx->pc = 0x2E424Cu;
    // 0x2e424c: 0xecb76de8  .word       0xECB76DE8                   # INVALID     $a1, $s7, 0x6DE8 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e424cu;
    // Unhandled opcode: 0x3B
    // 0x2e4250: 0xc0b83a0  jal         func_2E0E80
    ctx->pc = 0x2E4250u;
    SET_GPR_U32(ctx, 31, 0x2E4258u);
    ctx->pc = 0x2E4254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4250u;
            // 0x2e4254: 0xd813894d  lqc2        $vf19, -0x76B3($zero) (Delay Slot)
        ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 0), 4294936909)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E80u;
    if (runtime->hasFunction(0x2E0E80u)) {
        auto targetFn = runtime->lookupFunction(0x2E0E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4258u; }
        if (ctx->pc != 0x2E4258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0E80_0x2e0e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4258u; }
        if (ctx->pc != 0x2E4258u) { return; }
    }
    ctx->pc = 0x2E4258u;
label_2e4258:
    // 0x2e4258: 0xf8b70fe8  sqc2        $vf23, 0xFE8($a1)
    ctx->pc = 0x2e4258u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 4072), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e425c: 0xe0b74ee8  sc          $s7, 0x4EE8($a1)
    ctx->pc = 0x2e425cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 20200); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 23)); SET_GPR_S32(ctx, 23, 1); } else { SET_GPR_S32(ctx, 23, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4260: 0xec374d29  .word       0xEC374D29                   # INVALID     $at, $s7, 0x4D29 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e4260u;
    // Unhandled opcode: 0x3B
    // 0x2e4264: 0xe4370b29  swc1        $f23, 0xB29($at)
    ctx->pc = 0x2e4264u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 2857), bits); }
    // 0x2e4268: 0xf005094d  scd         $a1, 0x94D($zero)
    ctx->pc = 0x2e4268u;
    // Unhandled opcode: 0x3C
    // 0x2e426c: 0xe033892d  sc          $s3, -0x76D3($at)
    ctx->pc = 0x2e426cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294936877); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 19)); SET_GPR_S32(ctx, 19, 1); } else { SET_GPR_S32(ctx, 19, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4270: 0xe80509ad  swc2        $5, 0x9AD($zero)
    ctx->pc = 0x2e4270u;
    // Unhandled opcode: 0x3A
    // 0x2e4274: 0xe092098f  sc          $s2, 0x98F($a0)
    ctx->pc = 0x2e4274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2447); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 18)); SET_GPR_S32(ctx, 18, 1); } else { SET_GPR_S32(ctx, 18, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4278: 0xf0d70b49  scd         $s7, 0xB49($a2)
    ctx->pc = 0x2e4278u;
    // Unhandled opcode: 0x3C
    // 0x2e427c: 0x141596f2  bne         $zero, $s5, . + 4 + (-0x690E << 2)
    ctx->pc = 0x2E427Cu;
    {
        const bool branch_taken_0x2e427c = (GPR_U64(ctx, 0) != GPR_U64(ctx, 21));
        ctx->pc = 0x2E4280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E427Cu;
            // 0x2e4280: 0xe80309ad  swc2        $3, 0x9AD($zero) (Delay Slot)
        // Unhandled opcode: 0x3A
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e427c) {
            ctx->pc = 0x2C9E48u;
            return;
        }
    }
    ctx->pc = 0x2E4284u;
    // 0x2e4284: 0xfa33c9ed  sqc2        $vf19, -0x3613($s1)
    ctx->pc = 0x2e4284u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294953453), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x2e4288: 0xfcb74be8  sd          $s7, 0x4BE8($a1)
    ctx->pc = 0x2e4288u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 19432), GPR_U64(ctx, 23));
    // 0x2e428c: 0xea774b8c  swc2        $23, 0x4B8C($s3)
    ctx->pc = 0x2e428cu;
    // Unhandled opcode: 0x3A
    // 0x2e4290: 0xb8770bad  swr         $s7, 0xBAD($v1)
    ctx->pc = 0x2e4290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 2989); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e4294: 0xf8574aa8  sqc2        $vf23, 0x4AA8($v0)
    ctx->pc = 0x2e4294u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 19112), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e4298: 0x14bd96f1  bne         $a1, $sp, . + 4 + (-0x690F << 2)
    ctx->pc = 0x2E4298u;
    {
        const bool branch_taken_0x2e4298 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 29));
        ctx->pc = 0x2E429Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4298u;
            // 0x2e429c: 0xf0b74de8  scd         $s7, 0x4DE8($a1) (Delay Slot)
        // Unhandled opcode: 0x3C
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4298) {
            ctx->pc = 0x2C9E60u;
            return;
        }
    }
    ctx->pc = 0x2E42A0u;
    // 0x2e42a0: 0xb8170bad  swr         $s7, 0xBAD($zero)
    ctx->pc = 0x2e42a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 2989); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e42a4: 0xfc774ba9  sd          $s7, 0x4BA9($v1)
    ctx->pc = 0x2e42a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 19369), GPR_U64(ctx, 23));
    // 0x2e42a8: 0xf09409e9  scd         $s4, 0x9E9($a0)
    ctx->pc = 0x2e42a8u;
    // Unhandled opcode: 0x3C
    // 0x2e42ac: 0xf8f38992  sqc2        $vf19, -0x766E($a3)
    ctx->pc = 0x2e42acu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 4294936978), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x2e42b0: 0xecf3e9b2  .word       0xECF3E9B2                   # INVALID     $a3, $s3, -0x164E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e42b0u;
    // Unhandled opcode: 0x3B
    // 0x2e42b4: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e42b4u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e42b8: 0x14f39692  bne         $a3, $s3, . + 4 + (-0x696E << 2)
    ctx->pc = 0x2E42B8u;
    {
        const bool branch_taken_0x2e42b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 19));
        ctx->pc = 0x2E42BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E42B8u;
            // 0x2e42bc: 0xf00309ed  scd         $v1, 0x9ED($zero) (Delay Slot)
        // Unhandled opcode: 0x3C
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42b8) {
            ctx->pc = 0x2C9D04u;
            return;
        }
    }
    ctx->pc = 0x2E42C0u;
    // 0x2e42c0: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e42c0u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e42c4: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e42c4u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e42c8: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e42c8u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e42cc: 0x145796d2  bne         $v0, $s7, . + 4 + (-0x692E << 2)
    ctx->pc = 0x2E42CCu;
    {
        const bool branch_taken_0x2e42cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x2E42D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E42CCu;
            // 0x2e42d0: 0x10f396b2  beq         $a3, $s3, . + 4 + (-0x694E << 2) (Delay Slot)
        // Likely branch instruction at 0x2E42D0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42cc) {
            ctx->pc = 0x2C9E18u;
            return;
        }
    }
    ctx->pc = 0x2E42D4u;
    // 0x2e42d4: 0xfcb759e8  sd          $s7, 0x59E8($a1)
    ctx->pc = 0x2e42d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 23016), GPR_U64(ctx, 23));
    // 0x2e42d8: 0xf0b74de8  scd         $s7, 0x4DE8($a1)
    ctx->pc = 0x2e42d8u;
    // Unhandled opcode: 0x3C
    // 0x2e42dc: 0xea77598c  swc2        $23, 0x598C($s3)
    ctx->pc = 0x2e42dcu;
    // Unhandled opcode: 0x3A
    // 0x2e42e0: 0x1af39672  .word       0x1AF39672                   # blez        $s7, . + 4 + (-0x698E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E42E0u;
    {
        const bool branch_taken_0x2e42e0 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2E42E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E42E0u;
            // 0x2e42e4: 0xba7719ed  swr         $s7, 0x19ED($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 6637); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e42e0) {
            ctx->pc = 0x2C9CACu;
            return;
        }
    }
    ctx->pc = 0x2E42E8u;
    // 0x2e42e8: 0xecb76ce8  .word       0xECB76CE8                   # INVALID     $a1, $s7, 0x6CE8 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e42e8u;
    // Unhandled opcode: 0x3B
    // 0x2e42ec: 0xba1719ed  swr         $s7, 0x19ED($s0)
    ctx->pc = 0x2e42ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 6637); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 23); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2e42f0: 0xfe7759e9  sd          $s7, 0x59E9($s3)
    ctx->pc = 0x2e42f0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 23017), GPR_U64(ctx, 23));
    // 0x2e42f4: 0xc0449ee  jal         func_1127B8
    ctx->pc = 0x2E42F4u;
    SET_GPR_U32(ctx, 31, 0x2E42FCu);
    ctx->pc = 0x2E42F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E42F4u;
            // 0x2e42f8: 0xf8b74fe8  sqc2        $vf23, 0x4FE8($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 20456), _mm_castps_si128(ctx->vu0_vf[23]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1127B8u;
    if (runtime->hasFunction(0x1127B8u)) {
        auto targetFn = runtime->lookupFunction(0x1127B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E42FCu; }
        if (ctx->pc != 0x2E42FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001127B8_0x1127b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E42FCu; }
        if (ctx->pc != 0x2E42FCu) { return; }
    }
    ctx->pc = 0x2E42FCu;
label_2e42fc:
    // 0x2e42fc: 0xf8f5c9af  sqc2        $vf21, -0x3651($a3)
    ctx->pc = 0x2e42fcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 4294953391), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x2e4300: 0xe0b74fe8  sc          $s7, 0x4FE8($a1)
    ctx->pc = 0x2e4300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 20456); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 23)); SET_GPR_S32(ctx, 23, 1); } else { SET_GPR_S32(ctx, 23, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4304: 0xecb76de8  .word       0xECB76DE8                   # INVALID     $a1, $s7, 0x6DE8 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e4304u;
    // Unhandled opcode: 0x3B
    // 0x2e4308: 0xc0b83a0  jal         func_2E0E80
    ctx->pc = 0x2E4308u;
    SET_GPR_U32(ctx, 31, 0x2E4310u);
    ctx->pc = 0x2E430Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4308u;
            // 0x2e430c: 0xd813894d  lqc2        $vf19, -0x76B3($zero) (Delay Slot)
        ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 0), 4294936909)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0E80u;
    if (runtime->hasFunction(0x2E0E80u)) {
        auto targetFn = runtime->lookupFunction(0x2E0E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4310u; }
        if (ctx->pc != 0x2E4310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0E80_0x2e0e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4310u; }
        if (ctx->pc != 0x2E4310u) { return; }
    }
    ctx->pc = 0x2E4310u;
label_2e4310:
    // 0x2e4310: 0xf8b70fe8  sqc2        $vf23, 0xFE8($a1)
    ctx->pc = 0x2e4310u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 4072), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e4314: 0xe0b74ee8  sc          $s7, 0x4EE8($a1)
    ctx->pc = 0x2e4314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 20200); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 23)); SET_GPR_S32(ctx, 23, 1); } else { SET_GPR_S32(ctx, 23, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4318: 0xec374c29  .word       0xEC374C29                   # INVALID     $at, $s7, 0x4C29 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e4318u;
    // Unhandled opcode: 0x3B
    // 0x2e431c: 0xe4370b29  swc1        $f23, 0xB29($at)
    ctx->pc = 0x2e431cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 2857), bits); }
    // 0x2e4320: 0xf005096d  scd         $a1, 0x96D($zero)
    ctx->pc = 0x2e4320u;
    // Unhandled opcode: 0x3C
    // 0x2e4324: 0xe033892d  sc          $s3, -0x76D3($at)
    ctx->pc = 0x2e4324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294936877); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 19)); SET_GPR_S32(ctx, 19, 1); } else { SET_GPR_S32(ctx, 19, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4328: 0xec0509ad  .word       0xEC0509AD                   # INVALID     $zero, $a1, 0x9AD # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e4328u;
    // Unhandled opcode: 0x3B
label_2e432c:
    // 0x2e432c: 0xe092098f  sc          $s2, 0x98F($a0)
    ctx->pc = 0x2e432cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 2447); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 18)); SET_GPR_S32(ctx, 18, 1); } else { SET_GPR_S32(ctx, 18, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4330: 0xf0d70b69  scd         $s7, 0xB69($a2)
    ctx->pc = 0x2e4330u;
    // Unhandled opcode: 0x3C
    // 0x2e4334: 0x141596f2  bne         $zero, $s5, . + 4 + (-0x690E << 2)
    ctx->pc = 0x2E4334u;
    {
        const bool branch_taken_0x2e4334 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 21));
        ctx->pc = 0x2E4338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4334u;
            // 0x2e4338: 0xec0309ad  .word       0xEC0309AD                   # INVALID     $zero, $v1, 0x9AD # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Unhandled opcode: 0x3B
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4334) {
            ctx->pc = 0x2C9F00u;
            return;
        }
    }
    ctx->pc = 0x2E433Cu;
    // 0x2e433c: 0xc044900  jal         func_112400
    ctx->pc = 0x2E433Cu;
    SET_GPR_U32(ctx, 31, 0x2E4344u);
    ctx->pc = 0x2E4340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E433Cu;
            // 0x2e4340: 0xf0b74de8  scd         $s7, 0x4DE8($a1) (Delay Slot)
        // Unhandled opcode: 0x3C
        ctx->in_delay_slot = false;
    ctx->pc = 0x112400u;
    if (runtime->hasFunction(0x112400u)) {
        auto targetFn = runtime->lookupFunction(0x112400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4344u; }
        if (ctx->pc != 0x2E4344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00112400_0x112400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4344u; }
        if (ctx->pc != 0x2E4344u) { return; }
    }
    ctx->pc = 0x2E4344u;
label_2e4344:
    // 0x2e4344: 0xf097898d  scd         $s7, -0x7673($a0)
    ctx->pc = 0x2e4344u;
    // Unhandled opcode: 0x3C
    // 0x2e4348: 0x1af396b2  .word       0x1AF396B2                   # blez        $s7, . + 4 + (-0x694E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E4348u;
    {
        const bool branch_taken_0x2e4348 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2E434Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4348u;
            // 0x2e434c: 0xf87509ed  sqc2        $vf21, 0x9ED($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 2541), _mm_castps_si128(ctx->vu0_vf[21]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4348) {
            ctx->pc = 0x2C9E14u;
            return;
        }
    }
    ctx->pc = 0x2E4350u;
    // 0x2e4350: 0x1af39672  .word       0x1AF39672                   # blez        $s7, . + 4 + (-0x698E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E4350u;
    {
        const bool branch_taken_0x2e4350 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x2E4354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4350u;
            // 0x2e4354: 0xf81709ed  sqc2        $vf23, 0x9ED($zero) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4350) {
            ctx->pc = 0x2C9D1Cu;
            return;
        }
    }
    ctx->pc = 0x2E4358u;
    // 0x2e4358: 0xf8b71de8  sqc2        $vf23, 0x1DE8($a1)
    ctx->pc = 0x2e4358u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 7656), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e435c: 0x38f080d2  xori        $s0, $a3, 0x80D2
    ctx->pc = 0x2e435cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32978);
    // 0x2e4360: 0x1cf196d2  .word       0x1CF196D2                   # bgtz        $a3, . + 4 + (-0x692E << 2) # 00110000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E4360u;
    {
        const bool branch_taken_0x2e4360 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2E4364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4360u;
            // 0x2e4364: 0xe81f9fcd  swc2        $31, -0x6033($zero) (Delay Slot)
        // Unhandled opcode: 0x3A
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4360) {
            ctx->pc = 0x2C9EACu;
            return;
        }
    }
    ctx->pc = 0x2E4368u;
    // 0x2e4368: 0xecb77ae8  .word       0xECB77AE8                   # INVALID     $a1, $s7, 0x7AE8 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e4368u;
    // Unhandled opcode: 0x3B
    // 0x2e436c: 0x981081dd  lwr         $s0, -0x7E23($zero)
    ctx->pc = 0x2e436cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294935005); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x2e4370: 0xe81f9ccd  swc2        $31, -0x6333($zero)
    ctx->pc = 0x2e4370u;
    // Unhandled opcode: 0x3A
    // 0x2e4374: 0xf8b719e8  sqc2        $vf23, 0x19E8($a1)
    ctx->pc = 0x2e4374u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 6632), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e4378: 0x181080cd  .word       0x181080CD                   # blez        $zero, . + 4 + (-0x7F33 << 2) # 00100000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E4378u;
    {
        const bool branch_taken_0x2e4378 = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x2E437Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4378u;
            // 0x2e437c: 0xe81f9dcd  swc2        $31, -0x6233($zero) (Delay Slot)
        // Unhandled opcode: 0x3A
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4378) {
            ctx->pc = 0x2C46B0u;
            return;
        }
    }
    ctx->pc = 0x2E4380u;
    // 0x2e4380: 0xfa1099cd  sqc2        $vf16, -0x6633($s0)
    ctx->pc = 0x2e4380u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294941133), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2e4384: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e4384u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e4388: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E4388u;
    SET_GPR_U32(ctx, 31, 0x2E4390u);
    ctx->pc = 0x2E438Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4388u;
            // 0x2e438c: 0xf81709ed  sqc2        $vf23, 0x9ED($zero) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4390u; }
        if (ctx->pc != 0x2E4390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4390u; }
        if (ctx->pc != 0x2E4390u) { return; }
    }
    ctx->pc = 0x2E4390u;
label_2e4390:
    // 0x2e4390: 0xe81f89ad  swc2        $31, -0x7653($zero)
    ctx->pc = 0x2e4390u;
    // Unhandled opcode: 0x3A
    // 0x2e4394: 0xe81fc9e9  swc2        $31, -0x3617($zero)
    ctx->pc = 0x2e4394u;
    // Unhandled opcode: 0x3A
    // 0x2e4398: 0xf6374de9  sdc1        $f23, 0x4DE9($s1)
    ctx->pc = 0x2e4398u;
    // Unhandled opcode: 0x3D
    // 0x2e439c: 0xfa33c9ed  sqc2        $vf19, -0x3613($s1)
    ctx->pc = 0x2e439cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294953453), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x2e43a0: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e43a0u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e43a4: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e43a4u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e43a8: 0xfa7fc92d  sqc2        $vf31, -0x36D3($s3)
    ctx->pc = 0x2e43a8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 4294953261), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e43ac: 0xfa5fc94d  sqc2        $vf31, -0x36B3($s2)
    ctx->pc = 0x2e43acu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 4294953293), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e43b0: 0xf8dfddeb  sqc2        $vf31, -0x2215($a2)
    ctx->pc = 0x2e43b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 4294958571), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e43b4: 0xf89fc9e1  sqc2        $vf31, -0x361F($a0)
    ctx->pc = 0x2e43b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 4294953441), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e43b8: 0xf81f88ad  sqc2        $vf31, -0x7753($zero)
    ctx->pc = 0x2e43b8u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 4294936749), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e43bc: 0xf8bfa9ed  sqc2        $vf31, -0x5613($a1)
    ctx->pc = 0x2e43bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 4294945261), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e43c0: 0xd812c98d  lqc2        $vf18, -0x3673($zero)
    ctx->pc = 0x2e43c0u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 0), 4294953357)));
    // 0x2e43c4: 0xfa3fc96d  sqc2        $vf31, -0x3693($s1)
    ctx->pc = 0x2e43c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294953325), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e43c8: 0xf89fc9e1  sqc2        $vf31, -0x361F($a0)
    ctx->pc = 0x2e43c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 4294953441), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e43cc: 0xf81f88ad  sqc2        $vf31, -0x7753($zero)
    ctx->pc = 0x2e43ccu;
    WRITE128(ADD32(GPR_U32(ctx, 0), 4294936749), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e43d0: 0xf2b70bc9  scd         $s7, 0xBC9($s5)
    ctx->pc = 0x2e43d0u;
    // Unhandled opcode: 0x3C
    // 0x2e43d4: 0x149596f0  bne         $a0, $s5, . + 4 + (-0x6910 << 2)
    ctx->pc = 0x2E43D4u;
    {
        const bool branch_taken_0x2e43d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x2E43D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E43D4u;
            // 0x2e43d8: 0xe80309ad  swc2        $3, 0x9AD($zero) (Delay Slot)
        // Unhandled opcode: 0x3A
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43d4) {
            ctx->pc = 0x2C9F98u;
            return;
        }
    }
    ctx->pc = 0x2E43DCu;
    // 0x2e43dc: 0x38f080d2  xori        $s0, $a3, 0x80D2
    ctx->pc = 0x2e43dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32978);
    // 0x2e43e0: 0x1cf196d2  .word       0x1CF196D2                   # bgtz        $a3, . + 4 + (-0x692E << 2) # 00110000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E43E0u;
    {
        const bool branch_taken_0x2e43e0 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2E43E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E43E0u;
            // 0x2e43e4: 0xe81f9fcd  swc2        $31, -0x6033($zero) (Delay Slot)
        // Unhandled opcode: 0x3A
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43e0) {
            ctx->pc = 0x2C9F2Cu;
            return;
        }
    }
    ctx->pc = 0x2E43E8u;
    // 0x2e43e8: 0xf8b719e8  sqc2        $vf23, 0x19E8($a1)
    ctx->pc = 0x2e43e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 6632), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e43ec: 0x981081dd  lwr         $s0, -0x7E23($zero)
    ctx->pc = 0x2e43ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294935005); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x2e43f0: 0xe81f9ccd  swc2        $31, -0x6333($zero)
    ctx->pc = 0x2e43f0u;
    // Unhandled opcode: 0x3A
    // 0x2e43f4: 0xfa1099cd  sqc2        $vf16, -0x6633($s0)
    ctx->pc = 0x2e43f4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294941133), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2e43f8: 0x181080cd  .word       0x181080CD                   # blez        $zero, . + 4 + (-0x7F33 << 2) # 00100000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E43F8u;
    {
        const bool branch_taken_0x2e43f8 = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x2E43FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E43F8u;
            // 0x2e43fc: 0xe81f9dcd  swc2        $31, -0x6233($zero) (Delay Slot)
        // Unhandled opcode: 0x3A
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e43f8) {
            ctx->pc = 0x2C4730u;
            return;
        }
    }
    ctx->pc = 0x2E4400u;
    // 0x2e4400: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E4400u;
    SET_GPR_U32(ctx, 31, 0x2E4408u);
    ctx->pc = 0x2E4404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4400u;
            // 0x2e4404: 0xf81709ed  sqc2        $vf23, 0x9ED($zero) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4408u; }
        if (ctx->pc != 0x2E4408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4408u; }
        if (ctx->pc != 0x2E4408u) { return; }
    }
    ctx->pc = 0x2E4408u;
label_2e4408:
    // 0x2e4408: 0xe81f89ad  swc2        $31, -0x7653($zero)
    ctx->pc = 0x2e4408u;
    // Unhandled opcode: 0x3A
    // 0x2e440c: 0xe81fc9e9  swc2        $31, -0x3617($zero)
    ctx->pc = 0x2e440cu;
    // Unhandled opcode: 0x3A
    // 0x2e4410: 0xe2374de9  sc          $s7, 0x4DE9($s1)
    ctx->pc = 0x2e4410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19945); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 23)); SET_GPR_S32(ctx, 23, 1); } else { SET_GPR_S32(ctx, 23, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e4414: 0xfa33c9ed  sqc2        $vf19, -0x3613($s1)
    ctx->pc = 0x2e4414u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294953453), _mm_castps_si128(ctx->vu0_vf[19]));
    // 0x2e4418: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e4418u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e441c: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e441cu;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e4420: 0xfa7fc92d  sqc2        $vf31, -0x36D3($s3)
    ctx->pc = 0x2e4420u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 4294953261), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e4424: 0xfa5fc94d  sqc2        $vf31, -0x36B3($s2)
    ctx->pc = 0x2e4424u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 4294953293), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e4428: 0xf8dfddeb  sqc2        $vf31, -0x2215($a2)
    ctx->pc = 0x2e4428u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 4294958571), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e442c: 0xf89fc9e1  sqc2        $vf31, -0x361F($a0)
    ctx->pc = 0x2e442cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 4294953441), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e4430: 0xf81f88ad  sqc2        $vf31, -0x7753($zero)
    ctx->pc = 0x2e4430u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 4294936749), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e4434: 0xf8bfa9ed  sqc2        $vf31, -0x5613($a1)
    ctx->pc = 0x2e4434u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 4294945261), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e4438: 0xf892c98f  sqc2        $vf18, -0x3671($a0)
    ctx->pc = 0x2e4438u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 4294953359), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x2e443c: 0xfa3fc96d  sqc2        $vf31, -0x3693($s1)
    ctx->pc = 0x2e443cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 4294953325), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e4440: 0xf89fc9e1  sqc2        $vf31, -0x361F($a0)
    ctx->pc = 0x2e4440u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 4294953441), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e4444: 0xf81f88ad  sqc2        $vf31, -0x7753($zero)
    ctx->pc = 0x2e4444u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 4294936749), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2e4448: 0xf2b70bc9  scd         $s7, 0xBC9($s5)
    ctx->pc = 0x2e4448u;
    // Unhandled opcode: 0x3C
    // 0x2e444c: 0x149596f0  bne         $a0, $s5, . + 4 + (-0x6910 << 2)
    ctx->pc = 0x2E444Cu;
    {
        const bool branch_taken_0x2e444c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x2E4450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E444Cu;
            // 0x2e4450: 0xe80309ad  swc2        $3, 0x9AD($zero) (Delay Slot)
        // Unhandled opcode: 0x3A
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e444c) {
            ctx->pc = 0x2CA010u;
            return;
        }
    }
    ctx->pc = 0x2E4454u;
    // 0x2e4454: 0xf077c9ed  scd         $s7, -0x3613($v1)
    ctx->pc = 0x2e4454u;
    // Unhandled opcode: 0x3C
    // 0x2e4458: 0xf81709ed  sqc2        $vf23, 0x9ED($zero)
    ctx->pc = 0x2e4458u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 2541), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x2e445c: 0xc044900  jal         func_112400
    ctx->pc = 0x2E445Cu;
    SET_GPR_U32(ctx, 31, 0x2E4464u);
    ctx->pc = 0x2E4460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E445Cu;
            // 0x2e4460: 0xf0b74de8  scd         $s7, 0x4DE8($a1) (Delay Slot)
        // Unhandled opcode: 0x3C
        ctx->in_delay_slot = false;
    ctx->pc = 0x112400u;
    if (runtime->hasFunction(0x112400u)) {
        auto targetFn = runtime->lookupFunction(0x112400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4464u; }
        if (ctx->pc != 0x2E4464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00112400_0x112400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4464u; }
        if (ctx->pc != 0x2E4464u) { return; }
    }
    ctx->pc = 0x2E4464u;
label_2e4464:
    // 0x2e4464: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E4464u;
    {
        const bool branch_taken_0x2e4464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4464) {
            ctx->pc = 0x2E4494u;
            goto label_2e4494;
        }
    }
    ctx->pc = 0x2E446Cu;
    // 0x2e446c: 0xcd6593b  jal         func_35964EC
    ctx->pc = 0x2E446Cu;
    SET_GPR_U32(ctx, 31, 0x2E4474u);
    ctx->pc = 0x2E4470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E446Cu;
            // 0x2e4470: 0xc44793a  jal         func_111E4E8 (Delay Slot)
        // JAL 0x111E4E8 - Handled by branch logic
        ctx->in_delay_slot = false;
    ctx->pc = 0x35964ECu;
    {
        auto targetFn = runtime->lookupFunction(0x35964ECu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4474u; }
        if (ctx->pc != 0x2E4474u) { return; }
    }
    ctx->pc = 0x2E4474u;
label_2e4474:
    // 0x2e4474: 0x8d8265d5  lw          $v0, 0x65D5($t4)
    ctx->pc = 0x2e4474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26069)));
label_2e4478:
    // 0x2e4478: 0xff9377fa  sd          $s3, 0x77FA($gp)
    ctx->pc = 0x2e4478u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 30714), GPR_U64(ctx, 19));
    // 0x2e447c: 0x1b18020  add         $s0, $t5, $s1
    ctx->pc = 0x2e447cu;
    {     int32_t rs_val = GPR_S32(ctx, 13);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
    // 0x2e4480: 0xc1b3d95  jal         func_6CF654
    ctx->pc = 0x2E4480u;
    SET_GPR_U32(ctx, 31, 0x2E4488u);
    ctx->pc = 0x2E4484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E4480u;
            // 0x2e4484: 0xaee63ccf  sw          $a2, 0x3CCF($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 15567), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x6CF654u;
    {
        auto targetFn = runtime->lookupFunction(0x6CF654u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E4488u; }
        if (ctx->pc != 0x2E4488u) { return; }
    }
    ctx->pc = 0x2E4488u;
label_2e4488:
    // 0x2e4488: 0xcb1ca131  lwc2        $28, -0x5ECF($t8)
    ctx->pc = 0x2e4488u;
    // Unhandled opcode: 0x32
    // 0x2e448c: 0xaee63e7f  sw          $a2, 0x3E7F($s7)
    ctx->pc = 0x2e448cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 15999), GPR_U32(ctx, 6));
    // 0x2e4490: 0x0  nop
    ctx->pc = 0x2e4490u;
    // NOP
label_2e4494:
    // 0x2e4494: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e4494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e4498: 0x24424484  addiu       $v0, $v0, 0x4484
    ctx->pc = 0x2e4498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17540));
    // 0x2e449c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e449cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e44a0: 0x24844464  addiu       $a0, $a0, 0x4464
    ctx->pc = 0x2e44a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17508));
    // 0x2e44a4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e44a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e44a8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e44a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e44ac: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E44ACu;
    SET_GPR_U32(ctx, 31, 0x2E44B4u);
    ctx->pc = 0x2E44B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E44ACu;
            // 0x2e44b0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E44B4u; }
        if (ctx->pc != 0x2E44B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E44B4u; }
        if (ctx->pc != 0x2E44B4u) { return; }
    }
    ctx->pc = 0x2E44B4u;
label_2e44b4:
    // 0x2e44b4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2e44b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e44b8: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x2e44b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2e44bc: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x2e44bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2e44c0: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x2e44c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2e44c4: 0xdfb30138  ld          $s3, 0x138($sp)
    ctx->pc = 0x2e44c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2e44c8: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x2e44c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2e44cc: 0xdfb50148  ld          $s5, 0x148($sp)
    ctx->pc = 0x2e44ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2e44d0: 0xdfb60150  ld          $s6, 0x150($sp)
    ctx->pc = 0x2e44d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2e44d4: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x2e44d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2e44d8: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x2e44d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e44dc: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x2e44dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e44e0: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x2e44e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e44e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E44E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E44E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E44E4u;
            // 0x2e44e8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E44ECu;
    // 0x2e44ec: 0x0  nop
    ctx->pc = 0x2e44ecu;
    // NOP
    ctx->pc = 0x2e44f0u;
}
