#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00257678
// Address: 0x257678 - 0x257ab0
void sub_00257678_0x257678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257678_0x257678");
#endif

    switch (ctx->pc) {
        case 0x257720u: goto label_257720;
        case 0x257760u: goto label_257760;
        case 0x25777cu: goto label_25777c;
        case 0x2577b8u: goto label_2577b8;
        case 0x2577d0u: goto label_2577d0;
        case 0x2577d8u: goto label_2577d8;
        case 0x257804u: goto label_257804;
        case 0x257820u: goto label_257820;
        case 0x257830u: goto label_257830;
        case 0x257840u: goto label_257840;
        case 0x257850u: goto label_257850;
        case 0x257874u: goto label_257874;
        case 0x2578a0u: goto label_2578a0;
        case 0x257960u: goto label_257960;
        case 0x257a08u: goto label_257a08;
        case 0x257a1cu: goto label_257a1c;
        case 0x257a34u: goto label_257a34;
        case 0x257a58u: goto label_257a58;
        case 0x257a6cu: goto label_257a6c;
        default: break;
    }

    ctx->pc = 0x257678u;

    // 0x257678: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x257678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x25767c: 0xffbe0160  sd          $fp, 0x160($sp)
    ctx->pc = 0x25767cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 30));
    // 0x257680: 0xffb70150  sd          $s7, 0x150($sp)
    ctx->pc = 0x257680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 23));
    // 0x257684: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x257684u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257688: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x257688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x25768c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x25768cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257690: 0xffb50130  sd          $s5, 0x130($sp)
    ctx->pc = 0x257690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 21));
    // 0x257694: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x257694u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257698: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x257698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x25769c: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x25769cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576a0: 0xffb30110  sd          $s3, 0x110($sp)
    ctx->pc = 0x2576a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 19));
    // 0x2576a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2576a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576a8: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x2576a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x2576ac: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x2576acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x2576b0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2576b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576b4: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x2576b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x2576b8: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x2576b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2576bc: 0xffb100f0  sd          $s1, 0xF0($sp)
    ctx->pc = 0x2576bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 17));
    // 0x2576c0: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x2576c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576c4: 0xde430058  ld          $v1, 0x58($s2)
    ctx->pc = 0x2576c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2576c8: 0xde440050  ld          $a0, 0x50($s2)
    ctx->pc = 0x2576c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2576cc: 0xde470048  ld          $a3, 0x48($s2)
    ctx->pc = 0x2576ccu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2576d0: 0xde420060  ld          $v0, 0x60($s2)
    ctx->pc = 0x2576d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x2576d4: 0x87202f  dsubu       $a0, $a0, $a3
    ctx->pc = 0x2576d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 7));
    // 0x2576d8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2576d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2576dc: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x2576dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x2576e0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2576e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2576e4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2576e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2576e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2576e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2576ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2576ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2576f0: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x2576f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2576f4: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x2576f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2576f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2576f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2576fc: 0x83980b  movn        $s3, $a0, $v1
    ctx->pc = 0x2576fcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
    // 0x257700: 0x92860001  lbu         $a2, 0x1($s4)
    ctx->pc = 0x257700u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x257704: 0x113102a  slt         $v0, $t0, $s3
    ctx->pc = 0x257704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x257708: 0x102980b  movn        $s3, $t0, $v0
    ctx->pc = 0x257708u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 8));
    // 0x25770c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25770cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257710: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257710u;
    {
        const bool branch_taken_0x257710 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x257714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257710u;
            // 0x257714: 0xafa500d4  sw          $a1, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257710) {
            ctx->pc = 0x257728u;
            goto label_257728;
        }
    }
    ctx->pc = 0x257718u;
    // 0x257718: 0xc094006  jal         func_250018
    ctx->pc = 0x257718u;
    SET_GPR_U32(ctx, 31, 0x257720u);
    ctx->pc = 0x250018u;
    if (runtime->hasFunction(0x250018u)) {
        auto targetFn = runtime->lookupFunction(0x250018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257720u; }
        if (ctx->pc != 0x257720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00250018_0x250018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257720u; }
        if (ctx->pc != 0x257720u) { return; }
    }
    ctx->pc = 0x257720u;
label_257720:
    // 0x257720: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x257720u;
    {
        const bool branch_taken_0x257720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257720u;
            // 0x257724: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257720) {
            ctx->pc = 0x25772Cu;
            goto label_25772c;
        }
    }
    ctx->pc = 0x257728u;
label_257728:
    // 0x257728: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x257728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25772c:
    // 0x25772c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x25772Cu;
    {
        const bool branch_taken_0x25772c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x257730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25772Cu;
            // 0x257730: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25772c) {
            ctx->pc = 0x257768u;
            goto label_257768;
        }
    }
    ctx->pc = 0x257734u;
    // 0x257734: 0x8c6212b0  lw          $v0, 0x12B0($v1)
    ctx->pc = 0x257734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x257738: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x257738u;
    {
        const bool branch_taken_0x257738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25773Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257738u;
            // 0x25773c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257738) {
            ctx->pc = 0x257744u;
            goto label_257744;
        }
    }
    ctx->pc = 0x257740u;
    // 0x257740: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x257740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_257744:
    // 0x257744: 0xa7a40028  sh          $a0, 0x28($sp)
    ctx->pc = 0x257744u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x257748: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x257748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25774c: 0x8fa80180  lw          $t0, 0x180($sp)
    ctx->pc = 0x25774cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x257750: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x257750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257754: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x257754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257758: 0xc0956c6  jal         func_255B18
    ctx->pc = 0x257758u;
    SET_GPR_U32(ctx, 31, 0x257760u);
    ctx->pc = 0x25775Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257758u;
            // 0x25775c: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B18u;
    if (runtime->hasFunction(0x255B18u)) {
        auto targetFn = runtime->lookupFunction(0x255B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257760u; }
        if (ctx->pc != 0x257760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00255B18_0x255b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257760u; }
        if (ctx->pc != 0x257760u) { return; }
    }
    ctx->pc = 0x257760u;
label_257760:
    // 0x257760: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x257760u;
    {
        const bool branch_taken_0x257760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257760u;
            // 0x257764: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257760) {
            ctx->pc = 0x257770u;
            goto label_257770;
        }
    }
    ctx->pc = 0x257768u;
label_257768:
    // 0x257768: 0xa7a00028  sh          $zero, 0x28($sp)
    ctx->pc = 0x257768u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x25776c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25776cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_257770:
    // 0x257770: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x257770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257774: 0xc095b06  jal         func_256C18
    ctx->pc = 0x257774u;
    SET_GPR_U32(ctx, 31, 0x25777Cu);
    ctx->pc = 0x257778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257774u;
            // 0x257778: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256C18u;
    if (runtime->hasFunction(0x256C18u)) {
        auto targetFn = runtime->lookupFunction(0x256C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25777Cu; }
        if (ctx->pc != 0x25777Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00256C18_0x256c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25777Cu; }
        if (ctx->pc != 0x25777Cu) { return; }
    }
    ctx->pc = 0x25777Cu;
label_25777c:
    // 0x25777c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25777cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257780: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x257780u;
    {
        const bool branch_taken_0x257780 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x257780) {
            ctx->pc = 0x2577FCu;
            goto label_2577fc;
        }
    }
    ctx->pc = 0x257788u;
    // 0x257788: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x257788u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x25778c: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x25778cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257790: 0x26631308  addiu       $v1, $s3, 0x1308
    ctx->pc = 0x257790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4872));
    // 0x257794: 0xdc620200  ld          $v0, 0x200($v1)
    ctx->pc = 0x257794u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 512)));
    // 0x257798: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x257798u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x25779c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25779Cu;
    {
        const bool branch_taken_0x25779c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2577A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25779Cu;
            // 0x2577a0: 0xfc620200  sd          $v0, 0x200($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 512), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25779c) {
            ctx->pc = 0x2577BCu;
            goto label_2577bc;
        }
    }
    ctx->pc = 0x2577A4u;
    // 0x2577a4: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x2577a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2577a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2577A8u;
    {
        const bool branch_taken_0x2577a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2577a8) {
            ctx->pc = 0x2577ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2577A8u;
            // 0x2577ac: 0xae11008c  sw          $s1, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2577BCu;
            goto label_2577bc;
        }
    }
    ctx->pc = 0x2577B0u;
    // 0x2577b0: 0xc08a996  jal         func_22A658
    ctx->pc = 0x2577B0u;
    SET_GPR_U32(ctx, 31, 0x2577B8u);
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2577B8u; }
        if (ctx->pc != 0x2577B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2577B8u; }
        if (ctx->pc != 0x2577B8u) { return; }
    }
    ctx->pc = 0x2577B8u;
label_2577b8:
    // 0x2577b8: 0xae11008c  sw          $s1, 0x8C($s0)
    ctx->pc = 0x2577b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 17));
label_2577bc:
    // 0x2577bc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2577bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2577c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2577c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2577c4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2577c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2577c8: 0xc095eac  jal         func_257AB0
    ctx->pc = 0x2577C8u;
    SET_GPR_U32(ctx, 31, 0x2577D0u);
    ctx->pc = 0x2577CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2577C8u;
            // 0x2577cc: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257AB0u;
    if (runtime->hasFunction(0x257AB0u)) {
        auto targetFn = runtime->lookupFunction(0x257AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2577D0u; }
        if (ctx->pc != 0x2577D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00257AB0_0x257ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2577D0u; }
        if (ctx->pc != 0x2577D0u) { return; }
    }
    ctx->pc = 0x2577D0u;
label_2577d0:
    // 0x2577d0: 0x144000ab  bnez        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x2577D0u;
    {
        const bool branch_taken_0x2577d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2577D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2577D0u;
            // 0x2577d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2577d0) {
            ctx->pc = 0x257A80u;
            goto label_257a80;
        }
    }
    ctx->pc = 0x2577D8u;
label_2577d8:
    // 0x2577d8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2577d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2577dc: 0x24421308  addiu       $v0, $v0, 0x1308
    ctx->pc = 0x2577dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
    // 0x2577e0: 0xdc4300b8  ld          $v1, 0xB8($v0)
    ctx->pc = 0x2577e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x2577e4: 0xdc440090  ld          $a0, 0x90($v0)
    ctx->pc = 0x2577e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2577e8: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x2577e8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x2577ec: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x2577ecu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x2577f0: 0xfc4300b8  sd          $v1, 0xB8($v0)
    ctx->pc = 0x2577f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 184), GPR_U64(ctx, 3));
    // 0x2577f4: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2577F4u;
    {
        const bool branch_taken_0x2577f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2577F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2577F4u;
            // 0x2577f8: 0xfc440090  sd          $a0, 0x90($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 144), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2577f4) {
            ctx->pc = 0x257A7Cu;
            goto label_257a7c;
        }
    }
    ctx->pc = 0x2577FCu;
label_2577fc:
    // 0x2577fc: 0xc098552  jal         func_261548
    ctx->pc = 0x2577FCu;
    SET_GPR_U32(ctx, 31, 0x257804u);
    ctx->pc = 0x257800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2577FCu;
            // 0x257800: 0x240400a8  addiu       $a0, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257804u; }
        if (ctx->pc != 0x257804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257804u; }
        if (ctx->pc != 0x257804u) { return; }
    }
    ctx->pc = 0x257804u;
label_257804:
    // 0x257804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x257804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257808: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x257808u;
    {
        const bool branch_taken_0x257808 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x257808) {
            ctx->pc = 0x25780Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x257808u;
            // 0x25780c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x257828u;
            goto label_257828;
        }
    }
    ctx->pc = 0x257810u;
    // 0x257810: 0x1220009b  beqz        $s1, . + 4 + (0x9B << 2)
    ctx->pc = 0x257810u;
    {
        const bool branch_taken_0x257810 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x257814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257810u;
            // 0x257814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257810) {
            ctx->pc = 0x257A80u;
            goto label_257a80;
        }
    }
    ctx->pc = 0x257818u;
    // 0x257818: 0xc08a996  jal         func_22A658
    ctx->pc = 0x257818u;
    SET_GPR_U32(ctx, 31, 0x257820u);
    ctx->pc = 0x25781Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257818u;
            // 0x25781c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257820u; }
        if (ctx->pc != 0x257820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257820u; }
        if (ctx->pc != 0x257820u) { return; }
    }
    ctx->pc = 0x257820u;
label_257820:
    // 0x257820: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x257820u;
    {
        const bool branch_taken_0x257820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257820u;
            // 0x257824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257820) {
            ctx->pc = 0x257A80u;
            goto label_257a80;
        }
    }
    ctx->pc = 0x257828u;
label_257828:
    // 0x257828: 0xc048c96  jal         func_123258
    ctx->pc = 0x257828u;
    SET_GPR_U32(ctx, 31, 0x257830u);
    ctx->pc = 0x25782Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257828u;
            // 0x25782c: 0x240500a8  addiu       $a1, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257830u; }
        if (ctx->pc != 0x257830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257830u; }
        if (ctx->pc != 0x257830u) { return; }
    }
    ctx->pc = 0x257830u;
label_257830:
    // 0x257830: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x257830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257834: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x257834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x257838: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x257838u;
    SET_GPR_U32(ctx, 31, 0x257840u);
    ctx->pc = 0x25783Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257838u;
            // 0x25783c: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257840u; }
        if (ctx->pc != 0x257840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257840u; }
        if (ctx->pc != 0x257840u) { return; }
    }
    ctx->pc = 0x257840u;
label_257840:
    // 0x257840: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x257840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257844: 0x26050058  addiu       $a1, $s0, 0x58
    ctx->pc = 0x257844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x257848: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x257848u;
    SET_GPR_U32(ctx, 31, 0x257850u);
    ctx->pc = 0x25784Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257848u;
            // 0x25784c: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257850u; }
        if (ctx->pc != 0x257850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257850u; }
        if (ctx->pc != 0x257850u) { return; }
    }
    ctx->pc = 0x257850u;
label_257850:
    // 0x257850: 0xae11008c  sw          $s1, 0x8C($s0)
    ctx->pc = 0x257850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 17));
    // 0x257854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x257854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257858: 0xa600008a  sh          $zero, 0x8A($s0)
    ctx->pc = 0x257858u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 138), (uint16_t)GPR_U32(ctx, 0));
    // 0x25785c: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x25785cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x257860: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x257860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257864: 0x8bc20007  lwl         $v0, 0x7($fp)
    ctx->pc = 0x257864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x257868: 0x9bc20004  lwr         $v0, 0x4($fp)
    ctx->pc = 0x257868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x25786c: 0xc0969c2  jal         func_25A708
    ctx->pc = 0x25786Cu;
    SET_GPR_U32(ctx, 31, 0x257874u);
    ctx->pc = 0x257870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25786Cu;
            // 0x257870: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A708u;
    if (runtime->hasFunction(0x25A708u)) {
        auto targetFn = runtime->lookupFunction(0x25A708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257874u; }
        if (ctx->pc != 0x257874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A708_0x25a708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257874u; }
        if (ctx->pc != 0x257874u) { return; }
    }
    ctx->pc = 0x257874u;
label_257874:
    // 0x257874: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x257874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x257878: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x257878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x25787c: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x25787cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x257880: 0xa6030090  sh          $v1, 0x90($s0)
    ctx->pc = 0x257880u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x257884: 0x96c20012  lhu         $v0, 0x12($s6)
    ctx->pc = 0x257884u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x257888: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x257888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x25788c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25788Cu;
    {
        const bool branch_taken_0x25788c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25788Cu;
            // 0x257890: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25788c) {
            ctx->pc = 0x257898u;
            goto label_257898;
        }
    }
    ctx->pc = 0x257894u;
    // 0x257894: 0x8ec40014  lw          $a0, 0x14($s6)
    ctx->pc = 0x257894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_257898:
    // 0x257898: 0xc0968ca  jal         func_25A328
    ctx->pc = 0x257898u;
    SET_GPR_U32(ctx, 31, 0x2578A0u);
    ctx->pc = 0x25789Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257898u;
            // 0x25789c: 0x9205003d  lbu         $a1, 0x3D($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25A328u;
    if (runtime->hasFunction(0x25A328u)) {
        auto targetFn = runtime->lookupFunction(0x25A328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2578A0u; }
        if (ctx->pc != 0x2578A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025A328_0x25a328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2578A0u; }
        if (ctx->pc != 0x2578A0u) { return; }
    }
    ctx->pc = 0x2578A0u;
label_2578a0:
    // 0x2578a0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2578a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2578a4: 0xfe130028  sd          $s3, 0x28($s0)
    ctx->pc = 0x2578a4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 19));
    // 0x2578a8: 0xa6020092  sh          $v0, 0x92($s0)
    ctx->pc = 0x2578a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x2578ac: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2578acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2578b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2578b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2578b4: 0x8c4412b0  lw          $a0, 0x12B0($v0)
    ctx->pc = 0x2578b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4784)));
    // 0x2578b8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2578B8u;
    {
        const bool branch_taken_0x2578b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2578BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2578B8u;
            // 0x2578bc: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578b8) {
            ctx->pc = 0x2578DCu;
            goto label_2578dc;
        }
    }
    ctx->pc = 0x2578C0u;
    // 0x2578c0: 0x97a30028  lhu         $v1, 0x28($sp)
    ctx->pc = 0x2578c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2578c4: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x2578c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2578c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2578C8u;
    {
        const bool branch_taken_0x2578c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2578CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2578C8u;
            // 0x2578cc: 0x30630060  andi        $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578c8) {
            ctx->pc = 0x2578E4u;
            goto label_2578e4;
        }
    }
    ctx->pc = 0x2578D0u;
    // 0x2578d0: 0x9602008a  lhu         $v0, 0x8A($s0)
    ctx->pc = 0x2578d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 138)));
    // 0x2578d4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2578d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2578d8: 0xa602008a  sh          $v0, 0x8A($s0)
    ctx->pc = 0x2578d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 138), (uint16_t)GPR_U32(ctx, 2));
label_2578dc:
    // 0x2578dc: 0x97a30028  lhu         $v1, 0x28($sp)
    ctx->pc = 0x2578dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2578e0: 0x30630060  andi        $v1, $v1, 0x60
    ctx->pc = 0x2578e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)96);
label_2578e4:
    // 0x2578e4: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2578e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2578e8: 0x14620038  bne         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2578E8u;
    {
        const bool branch_taken_0x2578e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2578ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2578E8u;
            // 0x2578ec: 0xde020090  ld          $v0, 0x90($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2578e8) {
            ctx->pc = 0x2579CCu;
            goto label_2579cc;
        }
    }
    ctx->pc = 0x2578F0u;
    // 0x2578f0: 0x93a300b7  lbu         $v1, 0xB7($sp)
    ctx->pc = 0x2578f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 183)));
    // 0x2578f4: 0x2404ff0f  addiu       $a0, $zero, -0xF1
    ctx->pc = 0x2578f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x2578f8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2578f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2578fc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2578fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x257900: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x257900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x257904: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x257904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x257908: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x257908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x25790c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x25790cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x257910: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x257910u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x257914: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x257914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x257918: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x257918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x25791c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x25791cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x257920: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x257920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257924: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x257924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x257928: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x257928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x25792c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25792cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x257930: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x257930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x257934: 0x2cc3000e  sltiu       $v1, $a2, 0xE
    ctx->pc = 0x257934u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x257938: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x257938u;
    {
        const bool branch_taken_0x257938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25793Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257938u;
            // 0x25793c: 0xfe020090  sd          $v0, 0x90($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257938) {
            ctx->pc = 0x2579F0u;
            goto label_2579f0;
        }
    }
    ctx->pc = 0x257940u;
    // 0x257940: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x257940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x257944: 0xde430050  ld          $v1, 0x50($s2)
    ctx->pc = 0x257944u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x257948: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x257948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x25794c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x25794cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x257950: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x257950u;
    {
        const bool branch_taken_0x257950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257950u;
            // 0x257954: 0x3c13003a  lui         $s3, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257950) {
            ctx->pc = 0x2579F0u;
            goto label_2579f0;
        }
    }
    ctx->pc = 0x257958u;
    // 0x257958: 0xde040090  ld          $a0, 0x90($s0)
    ctx->pc = 0x257958u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x25795c: 0x0  nop
    ctx->pc = 0x25795cu;
    // NOP
label_257960:
    // 0x257960: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x257960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x257964: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x257964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x257968: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x257968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x25796c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x25796cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x257970: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x257970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x257974: 0x4103e  dsrl32      $v0, $a0, 0
    ctx->pc = 0x257974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x257978: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x257978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25797c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x25797cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x257980: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x257980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x257984: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x257984u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x257988: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x257988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x25798c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x25798cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x257990: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x257990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x257994: 0x4183e  dsrl32      $v1, $a0, 0
    ctx->pc = 0x257994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x257998: 0xfe040090  sd          $a0, 0x90($s0)
    ctx->pc = 0x257998u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 4));
    // 0x25799c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25799cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2579a0: 0x3064000f  andi        $a0, $v1, 0xF
    ctx->pc = 0x2579a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2579a4: 0x2c82000e  sltiu       $v0, $a0, 0xE
    ctx->pc = 0x2579a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x2579a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2579A8u;
    {
        const bool branch_taken_0x2579a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2579ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2579A8u;
            // 0x2579ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2579a8) {
            ctx->pc = 0x2579F4u;
            goto label_2579f4;
        }
    }
    ctx->pc = 0x2579B0u;
    // 0x2579b0: 0xde430050  ld          $v1, 0x50($s2)
    ctx->pc = 0x2579b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2579b4: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2579b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2579b8: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x2579b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2579bc: 0x5460ffe8  bnel        $v1, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2579BCu;
    {
        const bool branch_taken_0x2579bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2579bc) {
            ctx->pc = 0x2579C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2579BCu;
            // 0x2579c0: 0xde040090  ld          $a0, 0x90($s0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x257960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_257960;
        }
    }
    ctx->pc = 0x2579C4u;
    // 0x2579c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2579C4u;
    {
        const bool branch_taken_0x2579c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2579C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2579C4u;
            // 0x2579c8: 0x8fa200d4  lw          $v0, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2579c4) {
            ctx->pc = 0x2579F8u;
            goto label_2579f8;
        }
    }
    ctx->pc = 0x2579CCu;
label_2579cc:
    // 0x2579cc: 0x3403f000  ori         $v1, $zero, 0xF000
    ctx->pc = 0x2579ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x2579d0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x2579d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x2579d4: 0x3404f000  ori         $a0, $zero, 0xF000
    ctx->pc = 0x2579d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x2579d8: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x2579d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x2579dc: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x2579dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
    // 0x2579e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2579e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2579e4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2579e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2579e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2579E8u;
    {
        const bool branch_taken_0x2579e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2579ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2579E8u;
            // 0x2579ec: 0xfe020090  sd          $v0, 0x90($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2579e8) {
            ctx->pc = 0x2579F4u;
            goto label_2579f4;
        }
    }
    ctx->pc = 0x2579F0u;
label_2579f0:
    // 0x2579f0: 0x3c13003a  lui         $s3, 0x3A
    ctx->pc = 0x2579f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)58 << 16));
label_2579f4:
    // 0x2579f4: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x2579f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_2579f8:
    // 0x2579f8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2579f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2579fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2579fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a00: 0xc095eac  jal         func_257AB0
    ctx->pc = 0x257A00u;
    SET_GPR_U32(ctx, 31, 0x257A08u);
    ctx->pc = 0x257A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257A00u;
            // 0x257a04: 0xae020098  sw          $v0, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257AB0u;
    if (runtime->hasFunction(0x257AB0u)) {
        auto targetFn = runtime->lookupFunction(0x257AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A08u; }
        if (ctx->pc != 0x257A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00257AB0_0x257ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A08u; }
        if (ctx->pc != 0x257A08u) { return; }
    }
    ctx->pc = 0x257A08u;
label_257a08:
    // 0x257a08: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x257A08u;
    {
        const bool branch_taken_0x257a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257a08) {
            ctx->pc = 0x257A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x257A08u;
            // 0x257a0c: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x257A24u;
            goto label_257a24;
        }
    }
    ctx->pc = 0x257A10u;
    // 0x257a10: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x257a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x257a14: 0xc095846  jal         func_256118
    ctx->pc = 0x257A14u;
    SET_GPR_U32(ctx, 31, 0x257A1Cu);
    ctx->pc = 0x257A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257A14u;
            // 0x257a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256118u;
    if (runtime->hasFunction(0x256118u)) {
        auto targetFn = runtime->lookupFunction(0x256118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A1Cu; }
        if (ctx->pc != 0x257A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00256118_0x256118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A1Cu; }
        if (ctx->pc != 0x257A1Cu) { return; }
    }
    ctx->pc = 0x257A1Cu;
label_257a1c:
    // 0x257a1c: 0x1000ff6e  b           . + 4 + (-0x92 << 2)
    ctx->pc = 0x257A1Cu;
    {
        const bool branch_taken_0x257a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257a1c) {
            ctx->pc = 0x2577D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2577d8;
        }
    }
    ctx->pc = 0x257A24u;
label_257a24:
    // 0x257a24: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x257A24u;
    {
        const bool branch_taken_0x257a24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x257a24) {
            ctx->pc = 0x257A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x257A24u;
            // 0x257a28: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x257A38u;
            goto label_257a38;
        }
    }
    ctx->pc = 0x257A2Cu;
    // 0x257a2c: 0xc08a996  jal         func_22A658
    ctx->pc = 0x257A2Cu;
    SET_GPR_U32(ctx, 31, 0x257A34u);
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A34u; }
        if (ctx->pc != 0x257A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A34u; }
        if (ctx->pc != 0x257A34u) { return; }
    }
    ctx->pc = 0x257A34u;
label_257a34:
    // 0x257a34: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x257a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_257a38:
    // 0x257a38: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x257A38u;
    {
        const bool branch_taken_0x257a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x257a38) {
            ctx->pc = 0x257A64u;
            goto label_257a64;
        }
    }
    ctx->pc = 0x257A40u;
    // 0x257a40: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x257a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x257a44: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x257a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x257a48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x257A48u;
    {
        const bool branch_taken_0x257a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257A48u;
            // 0x257a4c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a48) {
            ctx->pc = 0x257A60u;
            goto label_257a60;
        }
    }
    ctx->pc = 0x257A50u;
    // 0x257a50: 0xc090c4c  jal         func_243130
    ctx->pc = 0x257A50u;
    SET_GPR_U32(ctx, 31, 0x257A58u);
    ctx->pc = 0x243130u;
    if (runtime->hasFunction(0x243130u)) {
        auto targetFn = runtime->lookupFunction(0x243130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A58u; }
        if (ctx->pc != 0x257A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243130_0x243130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A58u; }
        if (ctx->pc != 0x257A58u) { return; }
    }
    ctx->pc = 0x257A58u;
label_257a58:
    // 0x257a58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x257A58u;
    {
        const bool branch_taken_0x257a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257a58) {
            ctx->pc = 0x257A64u;
            goto label_257a64;
        }
    }
    ctx->pc = 0x257A60u;
label_257a60:
    // 0x257a60: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x257a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_257a64:
    // 0x257a64: 0xc098560  jal         func_261580
    ctx->pc = 0x257A64u;
    SET_GPR_U32(ctx, 31, 0x257A6Cu);
    ctx->pc = 0x257A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257A64u;
            // 0x257a68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A6Cu; }
        if (ctx->pc != 0x257A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A6Cu; }
        if (ctx->pc != 0x257A6Cu) { return; }
    }
    ctx->pc = 0x257A6Cu;
label_257a6c:
    // 0x257a6c: 0x26631308  addiu       $v1, $s3, 0x1308
    ctx->pc = 0x257a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4872));
    // 0x257a70: 0xdc620208  ld          $v0, 0x208($v1)
    ctx->pc = 0x257a70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 520)));
    // 0x257a74: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x257a74u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x257a78: 0xfc620208  sd          $v0, 0x208($v1)
    ctx->pc = 0x257a78u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 520), GPR_U64(ctx, 2));
label_257a7c:
    // 0x257a7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_257a80:
    // 0x257a80: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x257a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x257a84: 0xdfbe0160  ld          $fp, 0x160($sp)
    ctx->pc = 0x257a84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x257a88: 0xdfb70150  ld          $s7, 0x150($sp)
    ctx->pc = 0x257a88u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x257a8c: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x257a8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x257a90: 0xdfb50130  ld          $s5, 0x130($sp)
    ctx->pc = 0x257a90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x257a94: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x257a94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x257a98: 0xdfb30110  ld          $s3, 0x110($sp)
    ctx->pc = 0x257a98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x257a9c: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x257a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x257aa0: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x257aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x257aa4: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x257aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x257aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x257AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257AA8u;
            // 0x257aac: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257AB0u;
    ctx->pc = 0x257ab0u;
}
