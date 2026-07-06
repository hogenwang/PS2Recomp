#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC718
// Address: 0x1dc718 - 0x1dc838
void sub_001DC718_0x1dc718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC718_0x1dc718");
#endif

    switch (ctx->pc) {
        case 0x1dc770u: goto label_1dc770;
        case 0x1dc788u: goto label_1dc788;
        case 0x1dc7f4u: goto label_1dc7f4;
        case 0x1dc80cu: goto label_1dc80c;
        default: break;
    }

    ctx->pc = 0x1dc718u;

    // 0x1dc718: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1dc718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc71c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1dc71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc720: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x1dc720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1dc724: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc728: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x1dc728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x1dc72c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc730: 0x28840000  slti        $a0, $a0, 0x0
    ctx->pc = 0x1dc730u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dc734: 0x3812  mflo        $a3
    ctx->pc = 0x1dc734u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x1dc738: 0x1810  mfhi        $v1
    ctx->pc = 0x1dc738u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1dc73c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1dc73cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1dc740: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1dc740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dc744: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1dc744u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1dc748: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DC748u;
    {
        const bool branch_taken_0x1dc748 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC748u;
            // 0x1dc74c: 0x671825  or          $v1, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc748) {
            ctx->pc = 0x1DC768u;
            goto label_1dc768;
        }
    }
    ctx->pc = 0x1DC750u;
    // 0x1dc750: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1dc750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1dc754: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1dc754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1dc758: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1dc758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1dc75c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DC75Cu;
    {
        const bool branch_taken_0x1dc75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC75Cu;
            // 0x1dc760: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc75c) {
            ctx->pc = 0x1DC778u;
            goto label_1dc778;
        }
    }
    ctx->pc = 0x1DC764u;
    // 0x1dc764: 0x0  nop
    ctx->pc = 0x1dc764u;
    // NOP
label_1dc768:
    // 0x1dc768: 0xc04818c  jal         func_120630
    ctx->pc = 0x1DC768u;
    SET_GPR_U32(ctx, 31, 0x1DC770u);
    ctx->pc = 0x1DC76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC768u;
            // 0x1dc76c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (runtime->hasFunction(0x120630u)) {
        auto targetFn = runtime->lookupFunction(0x120630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC770u; }
        if (ctx->pc != 0x1DC770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120630_0x120630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC770u; }
        if (ctx->pc != 0x1DC770u) { return; }
    }
    ctx->pc = 0x1DC770u;
label_1dc770:
    // 0x1dc770: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1dc770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dc774: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1dc774u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1dc778:
    // 0x1dc778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc77c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC77Cu;
            // 0x1dc780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC784u;
    // 0x1dc784: 0x0  nop
    ctx->pc = 0x1dc784u;
    // NOP
label_1dc788:
    // 0x1dc788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dc788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dc78c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc790: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dc790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dc794: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC794u;
    {
        const bool branch_taken_0x1dc794 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC794u;
            // 0x1dc798: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc794) {
            ctx->pc = 0x1DC7B8u;
            goto label_1dc7b8;
        }
    }
    ctx->pc = 0x1DC79Cu;
    // 0x1dc79c: 0x851826  xor         $v1, $a0, $a1
    ctx->pc = 0x1dc79cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x1dc7a0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1dc7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1dc7a4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1dc7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1dc7a8: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x1dc7a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dc7ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1dc7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1dc7b0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1DC7B0u;
    {
        const bool branch_taken_0x1dc7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC7B0u;
            // 0x1dc7b4: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc7b0) {
            ctx->pc = 0x1DC824u;
            goto label_1dc824;
        }
    }
    ctx->pc = 0x1DC7B8u;
label_1dc7b8:
    // 0x1dc7b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1dc7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc7bc: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC7BCu;
    {
        const bool branch_taken_0x1dc7bc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1DC7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC7BCu;
            // 0x1dc7c0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc7bc) {
            ctx->pc = 0x1DC7CCu;
            goto label_1dc7cc;
        }
    }
    ctx->pc = 0x1DC7C4u;
    // 0x1dc7c4: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1dc7c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dc7c8: 0x4202f  dsubu       $a0, $zero, $a0
    ctx->pc = 0x1dc7c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
label_1dc7cc:
    // 0x1dc7cc: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC7CCu;
    {
        const bool branch_taken_0x1dc7cc = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1dc7cc) {
            ctx->pc = 0x1DC7DCu;
            goto label_1dc7dc;
        }
    }
    ctx->pc = 0x1DC7D4u;
    // 0x1dc7d4: 0x118823  negu        $s1, $s1
    ctx->pc = 0x1dc7d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1dc7d8: 0x5282f  dsubu       $a1, $zero, $a1
    ctx->pc = 0x1dc7d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
label_1dc7dc:
    // 0x1dc7dc: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC7DCu;
    {
        const bool branch_taken_0x1dc7dc = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1dc7dc) {
            ctx->pc = 0x1DC7ECu;
            goto label_1dc7ec;
        }
    }
    ctx->pc = 0x1DC7E4u;
    // 0x1dc7e4: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x1dc7e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x1dc7e8: 0x118823  negu        $s1, $s1
    ctx->pc = 0x1dc7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_1dc7ec:
    // 0x1dc7ec: 0xc048082  jal         func_120208
    ctx->pc = 0x1DC7ECu;
    SET_GPR_U32(ctx, 31, 0x1DC7F4u);
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC7F4u; }
        if (ctx->pc != 0x1DC7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC7F4u; }
        if (ctx->pc != 0x1DC7F4u) { return; }
    }
    ctx->pc = 0x1DC7F4u;
label_1dc7f4:
    // 0x1dc7f4: 0x1027fe  dsrl32      $a0, $s0, 31
    ctx->pc = 0x1dc7f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (32 + 31));
    // 0x1dc7f8: 0x204202d  daddu       $a0, $s0, $a0
    ctx->pc = 0x1dc7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1dc7fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dc7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc800: 0x4207b  dsra        $a0, $a0, 1
    ctx->pc = 0x1dc800u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 1);
    // 0x1dc804: 0xc04818c  jal         func_120630
    ctx->pc = 0x1DC804u;
    SET_GPR_U32(ctx, 31, 0x1DC80Cu);
    ctx->pc = 0x1DC808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC804u;
            // 0x1dc808: 0x44202d  daddu       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (runtime->hasFunction(0x120630u)) {
        auto targetFn = runtime->lookupFunction(0x120630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC80Cu; }
        if (ctx->pc != 0x1DC80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120630_0x120630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC80Cu; }
        if (ctx->pc != 0x1DC80Cu) { return; }
    }
    ctx->pc = 0x1DC80Cu;
label_1dc80c:
    // 0x1dc80c: 0x2a240000  slti        $a0, $s1, 0x0
    ctx->pc = 0x1dc80cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1dc810: 0x2182f  dsubu       $v1, $zero, $v0
    ctx->pc = 0x1dc810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x1dc814: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1dc814u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1dc818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dc818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc81c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1dc81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1dc820: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1dc820u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1dc824:
    // 0x1dc824: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc828: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dc828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc82c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dc82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc830: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC830u;
            // 0x1dc834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC838u;
    ctx->pc = 0x1dc838u;
}
