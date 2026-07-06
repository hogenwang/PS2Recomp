#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F780
// Address: 0x19f780 - 0x19fd20
void sub_0019F780_0x19f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F780_0x19f780");
#endif

    switch (ctx->pc) {
        case 0x19f85cu: goto label_19f85c;
        case 0x19f86cu: goto label_19f86c;
        case 0x19f874u: goto label_19f874;
        case 0x19f888u: goto label_19f888;
        case 0x19f8a8u: goto label_19f8a8;
        case 0x19f8b0u: goto label_19f8b0;
        case 0x19f8c4u: goto label_19f8c4;
        case 0x19f8d4u: goto label_19f8d4;
        case 0x19f8dcu: goto label_19f8dc;
        case 0x19f8f0u: goto label_19f8f0;
        case 0x19f900u: goto label_19f900;
        case 0x19f908u: goto label_19f908;
        case 0x19f91cu: goto label_19f91c;
        case 0x19f92cu: goto label_19f92c;
        case 0x19f934u: goto label_19f934;
        case 0x19f9ecu: goto label_19f9ec;
        case 0x19fa2cu: goto label_19fa2c;
        case 0x19fa3cu: goto label_19fa3c;
        case 0x19fa44u: goto label_19fa44;
        case 0x19fa58u: goto label_19fa58;
        case 0x19fa78u: goto label_19fa78;
        case 0x19fa80u: goto label_19fa80;
        case 0x19fa94u: goto label_19fa94;
        case 0x19faa4u: goto label_19faa4;
        case 0x19faacu: goto label_19faac;
        case 0x19fac0u: goto label_19fac0;
        case 0x19fad0u: goto label_19fad0;
        case 0x19fad8u: goto label_19fad8;
        case 0x19faecu: goto label_19faec;
        case 0x19fafcu: goto label_19fafc;
        case 0x19fb04u: goto label_19fb04;
        case 0x19fbf0u: goto label_19fbf0;
        case 0x19fc00u: goto label_19fc00;
        case 0x19fc08u: goto label_19fc08;
        case 0x19fc1cu: goto label_19fc1c;
        case 0x19fc3cu: goto label_19fc3c;
        case 0x19fc44u: goto label_19fc44;
        case 0x19fc58u: goto label_19fc58;
        case 0x19fc68u: goto label_19fc68;
        case 0x19fc70u: goto label_19fc70;
        case 0x19fc84u: goto label_19fc84;
        case 0x19fc94u: goto label_19fc94;
        case 0x19fc9cu: goto label_19fc9c;
        case 0x19fcb0u: goto label_19fcb0;
        case 0x19fcc0u: goto label_19fcc0;
        case 0x19fcc8u: goto label_19fcc8;
        default: break;
    }

    ctx->pc = 0x19f780u;

    // 0x19f780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19f784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19f788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f78c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f790: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x19f790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x19f794: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19f794u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19f798: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F798u;
    {
        const bool branch_taken_0x19f798 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19f798) {
            ctx->pc = 0x19F7A8u;
            goto label_19f7a8;
        }
    }
    ctx->pc = 0x19F7A0u;
    // 0x19f7a0: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x19F7A0u;
    {
        const bool branch_taken_0x19f7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7A0u;
            // 0x19f7a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7a0) {
            ctx->pc = 0x19FD04u;
            goto label_19fd04;
        }
    }
    ctx->pc = 0x19F7A8u;
label_19f7a8:
    // 0x19f7a8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x19f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x19f7ac: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19f7b0: 0x90469780  lbu         $a2, -0x6880($v0)
    ctx->pc = 0x19f7b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x19f7b4: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F7B4u;
    {
        const bool branch_taken_0x19f7b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19f7b4) {
            ctx->pc = 0x19F7C8u;
            goto label_19f7c8;
        }
    }
    ctx->pc = 0x19F7BCu;
    // 0x19f7bc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x19f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x19f7c0: 0x54c2006d  bnel        $a2, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x19F7C0u;
    {
        const bool branch_taken_0x19f7c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f7c0) {
            ctx->pc = 0x19F7C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7C0u;
            // 0x19f7c4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19F978u;
            goto label_19f978;
        }
    }
    ctx->pc = 0x19F7C8u;
label_19f7c8:
    // 0x19f7c8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19f7cc: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x19f7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x19f7d0: 0x9044db10  lbu         $a0, -0x24F0($v0)
    ctx->pc = 0x19f7d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957840)));
    // 0x19f7d4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x19f7d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x19f7d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f7dc: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x19f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x19f7e0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x19f7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x19f7e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F7E4u;
    {
        const bool branch_taken_0x19f7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f7e4) {
            ctx->pc = 0x19F7F4u;
            goto label_19f7f4;
        }
    }
    ctx->pc = 0x19F7ECu;
    // 0x19f7ec: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x19F7ECu;
    {
        const bool branch_taken_0x19f7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7ECu;
            // 0x19f7f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7ec) {
            ctx->pc = 0x19FD04u;
            goto label_19fd04;
        }
    }
    ctx->pc = 0x19F7F4u;
label_19f7f4:
    // 0x19f7f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19f7f8: 0x8042d9f8  lb          $v0, -0x2608($v0)
    ctx->pc = 0x19f7f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957560)));
    // 0x19f7fc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F7FCu;
    {
        const bool branch_taken_0x19f7fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19F800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7FCu;
            // 0x19f800: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7fc) {
            ctx->pc = 0x19F80Cu;
            goto label_19f80c;
        }
    }
    ctx->pc = 0x19F804u;
    // 0x19f804: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x19f804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x19f808: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x19f808u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
label_19f80c:
    // 0x19f80c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x19f80cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x19f810: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F810u;
    {
        const bool branch_taken_0x19f810 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f810) {
            ctx->pc = 0x19F814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19F810u;
            // 0x19f814: 0x2c610008  sltiu       $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x19F820u;
            goto label_19f820;
        }
    }
    ctx->pc = 0x19F818u;
    // 0x19f818: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19f818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19f81c: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x19f81cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_19f820:
    // 0x19f820: 0x5020004e  beql        $at, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x19F820u;
    {
        const bool branch_taken_0x19f820 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f820) {
            ctx->pc = 0x19F824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19F820u;
            // 0x19f824: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19F95Cu;
            goto label_19f95c;
        }
    }
    ctx->pc = 0x19F828u;
    // 0x19f828: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19f828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f82c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x19f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x19f830: 0x2463f350  addiu       $v1, $v1, -0xCB0
    ctx->pc = 0x19f830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964048));
    // 0x19f834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f838: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19f838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f83c: 0x400008  jr          $v0
    ctx->pc = 0x19F83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F844u: goto label_19f844;
            case 0x19F854u: goto label_19f854;
            case 0x19F880u: goto label_19f880;
            case 0x19F8BCu: goto label_19f8bc;
            case 0x19F8E8u: goto label_19f8e8;
            case 0x19F914u: goto label_19f914;
            case 0x19F940u: goto label_19f940;
            case 0x19F958u: goto label_19f958;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F844u;
label_19f844:
    // 0x19f844: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x19f844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19f848: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19f848u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19f84c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x19F84Cu;
    {
        const bool branch_taken_0x19f84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F84Cu;
            // 0x19f850: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f84c) {
            ctx->pc = 0x19F958u;
            goto label_19f958;
        }
    }
    ctx->pc = 0x19F854u;
label_19f854:
    // 0x19f854: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19F854u;
    SET_GPR_U32(ctx, 31, 0x19F85Cu);
    ctx->pc = 0x19F858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F854u;
            // 0x19f858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F85Cu; }
        if (ctx->pc != 0x19F85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F85Cu; }
        if (ctx->pc != 0x19F85Cu) { return; }
    }
    ctx->pc = 0x19F85Cu;
label_19f85c:
    // 0x19f85c: 0x3c033ff8  lui         $v1, 0x3FF8
    ctx->pc = 0x19f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16376 << 16));
    // 0x19f860: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f864: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19F864u;
    SET_GPR_U32(ctx, 31, 0x19F86Cu);
    ctx->pc = 0x19F868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F864u;
            // 0x19f868: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F86Cu; }
        if (ctx->pc != 0x19F86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F86Cu; }
        if (ctx->pc != 0x19F86Cu) { return; }
    }
    ctx->pc = 0x19F86Cu;
label_19f86c:
    // 0x19f86c: 0xc048bde  jal         func_122F78
    ctx->pc = 0x19F86Cu;
    SET_GPR_U32(ctx, 31, 0x19F874u);
    ctx->pc = 0x19F870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F86Cu;
            // 0x19f870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F874u; }
        if (ctx->pc != 0x19F874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F874u; }
        if (ctx->pc != 0x19F874u) { return; }
    }
    ctx->pc = 0x19F874u;
label_19f874:
    // 0x19f874: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19f874u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19f878: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x19F878u;
    {
        const bool branch_taken_0x19f878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F878u;
            // 0x19f87c: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f878) {
            ctx->pc = 0x19F958u;
            goto label_19f958;
        }
    }
    ctx->pc = 0x19F880u;
label_19f880:
    // 0x19f880: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19F880u;
    SET_GPR_U32(ctx, 31, 0x19F888u);
    ctx->pc = 0x19F884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F880u;
            // 0x19f884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F888u; }
        if (ctx->pc != 0x19F888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F888u; }
        if (ctx->pc != 0x19F888u) { return; }
    }
    ctx->pc = 0x19F888u;
label_19f888:
    // 0x19f888: 0x3c043ff3  lui         $a0, 0x3FF3
    ctx->pc = 0x19f888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16371 << 16));
    // 0x19f88c: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x19f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x19f890: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x19f890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x19f894: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x19f894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x19f898: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x19f898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19f89c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8a0: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19F8A0u;
    SET_GPR_U32(ctx, 31, 0x19F8A8u);
    ctx->pc = 0x19F8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8A0u;
            // 0x19f8a4: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8A8u; }
        if (ctx->pc != 0x19F8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8A8u; }
        if (ctx->pc != 0x19F8A8u) { return; }
    }
    ctx->pc = 0x19F8A8u;
label_19f8a8:
    // 0x19f8a8: 0xc048bde  jal         func_122F78
    ctx->pc = 0x19F8A8u;
    SET_GPR_U32(ctx, 31, 0x19F8B0u);
    ctx->pc = 0x19F8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8A8u;
            // 0x19f8ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8B0u; }
        if (ctx->pc != 0x19F8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8B0u; }
        if (ctx->pc != 0x19F8B0u) { return; }
    }
    ctx->pc = 0x19F8B0u;
label_19f8b0:
    // 0x19f8b0: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19f8b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19f8b4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x19F8B4u;
    {
        const bool branch_taken_0x19f8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8B4u;
            // 0x19f8b8: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8b4) {
            ctx->pc = 0x19F958u;
            goto label_19f958;
        }
    }
    ctx->pc = 0x19F8BCu;
label_19f8bc:
    // 0x19f8bc: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19F8BCu;
    SET_GPR_U32(ctx, 31, 0x19F8C4u);
    ctx->pc = 0x19F8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8BCu;
            // 0x19f8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8C4u; }
        if (ctx->pc != 0x19F8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8C4u; }
        if (ctx->pc != 0x19F8C4u) { return; }
    }
    ctx->pc = 0x19F8C4u;
label_19f8c4:
    // 0x19f8c4: 0x3c033fec  lui         $v1, 0x3FEC
    ctx->pc = 0x19f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16364 << 16));
    // 0x19f8c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8cc: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19F8CCu;
    SET_GPR_U32(ctx, 31, 0x19F8D4u);
    ctx->pc = 0x19F8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8CCu;
            // 0x19f8d0: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8D4u; }
        if (ctx->pc != 0x19F8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8D4u; }
        if (ctx->pc != 0x19F8D4u) { return; }
    }
    ctx->pc = 0x19F8D4u;
label_19f8d4:
    // 0x19f8d4: 0xc048bde  jal         func_122F78
    ctx->pc = 0x19F8D4u;
    SET_GPR_U32(ctx, 31, 0x19F8DCu);
    ctx->pc = 0x19F8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8D4u;
            // 0x19f8d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8DCu; }
        if (ctx->pc != 0x19F8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8DCu; }
        if (ctx->pc != 0x19F8DCu) { return; }
    }
    ctx->pc = 0x19F8DCu;
label_19f8dc:
    // 0x19f8dc: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19f8dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19f8e0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19F8E0u;
    {
        const bool branch_taken_0x19f8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8E0u;
            // 0x19f8e4: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f8e0) {
            ctx->pc = 0x19F958u;
            goto label_19f958;
        }
    }
    ctx->pc = 0x19F8E8u;
label_19f8e8:
    // 0x19f8e8: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19F8E8u;
    SET_GPR_U32(ctx, 31, 0x19F8F0u);
    ctx->pc = 0x19F8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8E8u;
            // 0x19f8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8F0u; }
        if (ctx->pc != 0x19F8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F8F0u; }
        if (ctx->pc != 0x19F8F0u) { return; }
    }
    ctx->pc = 0x19F8F0u;
label_19f8f0:
    // 0x19f8f0: 0x3c033fe8  lui         $v1, 0x3FE8
    ctx->pc = 0x19f8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16360 << 16));
    // 0x19f8f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f8f8: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19F8F8u;
    SET_GPR_U32(ctx, 31, 0x19F900u);
    ctx->pc = 0x19F8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F8F8u;
            // 0x19f8fc: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F900u; }
        if (ctx->pc != 0x19F900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F900u; }
        if (ctx->pc != 0x19F900u) { return; }
    }
    ctx->pc = 0x19F900u;
label_19f900:
    // 0x19f900: 0xc048bde  jal         func_122F78
    ctx->pc = 0x19F900u;
    SET_GPR_U32(ctx, 31, 0x19F908u);
    ctx->pc = 0x19F904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F900u;
            // 0x19f904: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F908u; }
        if (ctx->pc != 0x19F908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F908u; }
        if (ctx->pc != 0x19F908u) { return; }
    }
    ctx->pc = 0x19F908u;
label_19f908:
    // 0x19f908: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19f908u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19f90c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19F90Cu;
    {
        const bool branch_taken_0x19f90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F90Cu;
            // 0x19f910: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f90c) {
            ctx->pc = 0x19F958u;
            goto label_19f958;
        }
    }
    ctx->pc = 0x19F914u;
label_19f914:
    // 0x19f914: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19F914u;
    SET_GPR_U32(ctx, 31, 0x19F91Cu);
    ctx->pc = 0x19F918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F914u;
            // 0x19f918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F91Cu; }
        if (ctx->pc != 0x19F91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F91Cu; }
        if (ctx->pc != 0x19F91Cu) { return; }
    }
    ctx->pc = 0x19F91Cu;
label_19f91c:
    // 0x19f91c: 0x3c033fe4  lui         $v1, 0x3FE4
    ctx->pc = 0x19f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16356 << 16));
    // 0x19f920: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f924: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19F924u;
    SET_GPR_U32(ctx, 31, 0x19F92Cu);
    ctx->pc = 0x19F928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F924u;
            // 0x19f928: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F92Cu; }
        if (ctx->pc != 0x19F92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F92Cu; }
        if (ctx->pc != 0x19F92Cu) { return; }
    }
    ctx->pc = 0x19F92Cu;
label_19f92c:
    // 0x19f92c: 0xc048bde  jal         func_122F78
    ctx->pc = 0x19F92Cu;
    SET_GPR_U32(ctx, 31, 0x19F934u);
    ctx->pc = 0x19F930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F92Cu;
            // 0x19f930: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F934u; }
        if (ctx->pc != 0x19F934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F934u; }
        if (ctx->pc != 0x19F934u) { return; }
    }
    ctx->pc = 0x19F934u;
label_19f934:
    // 0x19f934: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19f934u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19f938: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19F938u;
    {
        const bool branch_taken_0x19f938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F938u;
            // 0x19f93c: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f938) {
            ctx->pc = 0x19F958u;
            goto label_19f958;
        }
    }
    ctx->pc = 0x19F940u;
label_19f940:
    // 0x19f940: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F940u;
    {
        const bool branch_taken_0x19f940 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x19F944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F940u;
            // 0x19f944: 0x101043  sra         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f940) {
            ctx->pc = 0x19F950u;
            goto label_19f950;
        }
    }
    ctx->pc = 0x19F948u;
    // 0x19f948: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x19f948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19f94c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19f94cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19f950:
    // 0x19f950: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19f950u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19f954: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x19f954u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_19f958:
    // 0x19f958: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x19f958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_19f95c:
    // 0x19f95c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19f95cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19f960: 0x44200e8  bltzl       $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x19F960u;
    {
        const bool branch_taken_0x19f960 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19f960) {
            ctx->pc = 0x19F964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19F960u;
            // 0x19f964: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19FD04u;
            goto label_19fd04;
        }
    }
    ctx->pc = 0x19F968u;
    // 0x19f968: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x19f968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19f96c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19f96cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f970: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x19F970u;
    {
        const bool branch_taken_0x19f970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f970) {
            ctx->pc = 0x19FD04u;
            goto label_19fd04;
        }
    }
    ctx->pc = 0x19F978u;
label_19f978:
    // 0x19f978: 0x54c20017  bnel        $a2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x19F978u;
    {
        const bool branch_taken_0x19f978 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f978) {
            ctx->pc = 0x19F97Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19F978u;
            // 0x19f97c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19F9D8u;
            goto label_19f9d8;
        }
    }
    ctx->pc = 0x19F980u;
    // 0x19f980: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x19f980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x19f984: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x19f984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x19f988: 0x90429720  lbu         $v0, -0x68E0($v0)
    ctx->pc = 0x19f988u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x19f98c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x19f98cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x19f990: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x19f990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x19f994: 0x546200db  bnel        $v1, $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x19F994u;
    {
        const bool branch_taken_0x19f994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f994) {
            ctx->pc = 0x19F998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19F994u;
            // 0x19f998: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19FD04u;
            goto label_19fd04;
        }
    }
    ctx->pc = 0x19F99Cu;
    // 0x19f99c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x19f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x19f9a0: 0x8c42bef0  lw          $v0, -0x4110($v0)
    ctx->pc = 0x19f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950640)));
    // 0x19f9a4: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19F9A4u;
    {
        const bool branch_taken_0x19f9a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19f9a4) {
            ctx->pc = 0x19F9CCu;
            goto label_19f9cc;
        }
    }
    ctx->pc = 0x19F9ACu;
    // 0x19f9ac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19f9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19f9b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19f9b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19f9b4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F9B4u;
    {
        const bool branch_taken_0x19f9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F9B4u;
            // 0x19f9b8: 0x202001a  div         $zero, $s0, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9b4) {
            ctx->pc = 0x19F9C0u;
            goto label_19f9c0;
        }
    }
    ctx->pc = 0x19F9BCu;
    // 0x19f9bc: 0x1cd  break       0, 7
    ctx->pc = 0x19f9bcu;
    runtime->handleBreak(rdram, ctx);
label_19f9c0:
    // 0x19f9c0: 0x1012  mflo        $v0
    ctx->pc = 0x19f9c0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x19f9c4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19f9c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19f9c8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x19f9c8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_19f9cc:
    // 0x19f9cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19f9ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9d0: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x19F9D0u;
    {
        const bool branch_taken_0x19f9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f9d0) {
            ctx->pc = 0x19FD04u;
            goto label_19fd04;
        }
    }
    ctx->pc = 0x19F9D8u;
label_19f9d8:
    // 0x19f9d8: 0x14c2005b  bne         $a2, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x19F9D8u;
    {
        const bool branch_taken_0x19f9d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x19f9d8) {
            ctx->pc = 0x19FB48u;
            goto label_19fb48;
        }
    }
    ctx->pc = 0x19F9E0u;
    // 0x19f9e0: 0x5263c  dsll32      $a0, $a1, 24
    ctx->pc = 0x19f9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 24));
    // 0x19f9e4: 0xc0d0bdc  jal         func_342F70
    ctx->pc = 0x19F9E4u;
    SET_GPR_U32(ctx, 31, 0x19F9ECu);
    ctx->pc = 0x19F9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F9E4u;
            // 0x19f9e8: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x342F70u;
    if (runtime->hasFunction(0x342F70u)) {
        auto targetFn = runtime->lookupFunction(0x342F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9ECu; }
        if (ctx->pc != 0x19F9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342F70_0x342f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9ECu; }
        if (ctx->pc != 0x19F9ECu) { return; }
    }
    ctx->pc = 0x19F9ECu;
label_19f9ec:
    // 0x19f9ec: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x19f9ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x19f9f0: 0x5020004e  beql        $at, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x19F9F0u;
    {
        const bool branch_taken_0x19f9f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f9f0) {
            ctx->pc = 0x19F9F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19F9F0u;
            // 0x19f9f4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19FB2Cu;
            goto label_19fb2c;
        }
    }
    ctx->pc = 0x19F9F8u;
    // 0x19f9f8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x19f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x19f9fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19fa00: 0x2463f330  addiu       $v1, $v1, -0xCD0
    ctx->pc = 0x19fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964016));
    // 0x19fa04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19fa08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19fa0c: 0x400008  jr          $v0
    ctx->pc = 0x19FA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FA14u: goto label_19fa14;
            case 0x19FA24u: goto label_19fa24;
            case 0x19FA50u: goto label_19fa50;
            case 0x19FA8Cu: goto label_19fa8c;
            case 0x19FAB8u: goto label_19fab8;
            case 0x19FAE4u: goto label_19fae4;
            case 0x19FB10u: goto label_19fb10;
            case 0x19FB28u: goto label_19fb28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FA14u;
label_19fa14:
    // 0x19fa14: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x19fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19fa18: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19fa18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19fa1c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x19FA1Cu;
    {
        const bool branch_taken_0x19fa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA1Cu;
            // 0x19fa20: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa1c) {
            ctx->pc = 0x19FB28u;
            goto label_19fb28;
        }
    }
    ctx->pc = 0x19FA24u;
label_19fa24:
    // 0x19fa24: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19FA24u;
    SET_GPR_U32(ctx, 31, 0x19FA2Cu);
    ctx->pc = 0x19FA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA24u;
            // 0x19fa28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA2Cu; }
        if (ctx->pc != 0x19FA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA2Cu; }
        if (ctx->pc != 0x19FA2Cu) { return; }
    }
    ctx->pc = 0x19FA2Cu;
label_19fa2c:
    // 0x19fa2c: 0x3c033ff8  lui         $v1, 0x3FF8
    ctx->pc = 0x19fa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16376 << 16));
    // 0x19fa30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa34: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19FA34u;
    SET_GPR_U32(ctx, 31, 0x19FA3Cu);
    ctx->pc = 0x19FA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA34u;
            // 0x19fa38: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA3Cu; }
        if (ctx->pc != 0x19FA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA3Cu; }
        if (ctx->pc != 0x19FA3Cu) { return; }
    }
    ctx->pc = 0x19FA3Cu;
label_19fa3c:
    // 0x19fa3c: 0xc048bde  jal         func_122F78
    ctx->pc = 0x19FA3Cu;
    SET_GPR_U32(ctx, 31, 0x19FA44u);
    ctx->pc = 0x19FA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA3Cu;
            // 0x19fa40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA44u; }
        if (ctx->pc != 0x19FA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA44u; }
        if (ctx->pc != 0x19FA44u) { return; }
    }
    ctx->pc = 0x19FA44u;
label_19fa44:
    // 0x19fa44: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19fa44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19fa48: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x19FA48u;
    {
        const bool branch_taken_0x19fa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA48u;
            // 0x19fa4c: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa48) {
            ctx->pc = 0x19FB28u;
            goto label_19fb28;
        }
    }
    ctx->pc = 0x19FA50u;
label_19fa50:
    // 0x19fa50: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19FA50u;
    SET_GPR_U32(ctx, 31, 0x19FA58u);
    ctx->pc = 0x19FA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA50u;
            // 0x19fa54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA58u; }
        if (ctx->pc != 0x19FA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA58u; }
        if (ctx->pc != 0x19FA58u) { return; }
    }
    ctx->pc = 0x19FA58u;
label_19fa58:
    // 0x19fa58: 0x3c043ff3  lui         $a0, 0x3FF3
    ctx->pc = 0x19fa58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16371 << 16));
    // 0x19fa5c: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x19fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x19fa60: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x19fa60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x19fa64: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x19fa64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x19fa68: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x19fa68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19fa6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fa6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa70: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19FA70u;
    SET_GPR_U32(ctx, 31, 0x19FA78u);
    ctx->pc = 0x19FA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA70u;
            // 0x19fa74: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA78u; }
        if (ctx->pc != 0x19FA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA78u; }
        if (ctx->pc != 0x19FA78u) { return; }
    }
    ctx->pc = 0x19FA78u;
label_19fa78:
    // 0x19fa78: 0xc048bde  jal         func_122F78
    ctx->pc = 0x19FA78u;
    SET_GPR_U32(ctx, 31, 0x19FA80u);
    ctx->pc = 0x19FA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA78u;
            // 0x19fa7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA80u; }
        if (ctx->pc != 0x19FA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA80u; }
        if (ctx->pc != 0x19FA80u) { return; }
    }
    ctx->pc = 0x19FA80u;
label_19fa80:
    // 0x19fa80: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19fa80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19fa84: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x19FA84u;
    {
        const bool branch_taken_0x19fa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA84u;
            // 0x19fa88: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa84) {
            ctx->pc = 0x19FB28u;
            goto label_19fb28;
        }
    }
    ctx->pc = 0x19FA8Cu;
label_19fa8c:
    // 0x19fa8c: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19FA8Cu;
    SET_GPR_U32(ctx, 31, 0x19FA94u);
    ctx->pc = 0x19FA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA8Cu;
            // 0x19fa90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA94u; }
        if (ctx->pc != 0x19FA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FA94u; }
        if (ctx->pc != 0x19FA94u) { return; }
    }
    ctx->pc = 0x19FA94u;
label_19fa94:
    // 0x19fa94: 0x3c033fec  lui         $v1, 0x3FEC
    ctx->pc = 0x19fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16364 << 16));
    // 0x19fa98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa9c: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19FA9Cu;
    SET_GPR_U32(ctx, 31, 0x19FAA4u);
    ctx->pc = 0x19FAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FA9Cu;
            // 0x19faa0: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAA4u; }
        if (ctx->pc != 0x19FAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAA4u; }
        if (ctx->pc != 0x19FAA4u) { return; }
    }
    ctx->pc = 0x19FAA4u;
label_19faa4:
    // 0x19faa4: 0xc048bde  jal         func_122F78
    ctx->pc = 0x19FAA4u;
    SET_GPR_U32(ctx, 31, 0x19FAACu);
    ctx->pc = 0x19FAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAA4u;
            // 0x19faa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAACu; }
        if (ctx->pc != 0x19FAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAACu; }
        if (ctx->pc != 0x19FAACu) { return; }
    }
    ctx->pc = 0x19FAACu;
label_19faac:
    // 0x19faac: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19faacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19fab0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19FAB0u;
    {
        const bool branch_taken_0x19fab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAB0u;
            // 0x19fab4: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fab0) {
            ctx->pc = 0x19FB28u;
            goto label_19fb28;
        }
    }
    ctx->pc = 0x19FAB8u;
label_19fab8:
    // 0x19fab8: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19FAB8u;
    SET_GPR_U32(ctx, 31, 0x19FAC0u);
    ctx->pc = 0x19FABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAB8u;
            // 0x19fabc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAC0u; }
        if (ctx->pc != 0x19FAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAC0u; }
        if (ctx->pc != 0x19FAC0u) { return; }
    }
    ctx->pc = 0x19FAC0u;
label_19fac0:
    // 0x19fac0: 0x3c033fe8  lui         $v1, 0x3FE8
    ctx->pc = 0x19fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16360 << 16));
    // 0x19fac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fac8: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19FAC8u;
    SET_GPR_U32(ctx, 31, 0x19FAD0u);
    ctx->pc = 0x19FACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAC8u;
            // 0x19facc: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAD0u; }
        if (ctx->pc != 0x19FAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAD0u; }
        if (ctx->pc != 0x19FAD0u) { return; }
    }
    ctx->pc = 0x19FAD0u;
label_19fad0:
    // 0x19fad0: 0xc048bde  jal         func_122F78
    ctx->pc = 0x19FAD0u;
    SET_GPR_U32(ctx, 31, 0x19FAD8u);
    ctx->pc = 0x19FAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAD0u;
            // 0x19fad4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAD8u; }
        if (ctx->pc != 0x19FAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAD8u; }
        if (ctx->pc != 0x19FAD8u) { return; }
    }
    ctx->pc = 0x19FAD8u;
label_19fad8:
    // 0x19fad8: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19fad8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19fadc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19FADCu;
    {
        const bool branch_taken_0x19fadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FADCu;
            // 0x19fae0: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fadc) {
            ctx->pc = 0x19FB28u;
            goto label_19fb28;
        }
    }
    ctx->pc = 0x19FAE4u;
label_19fae4:
    // 0x19fae4: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19FAE4u;
    SET_GPR_U32(ctx, 31, 0x19FAECu);
    ctx->pc = 0x19FAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAE4u;
            // 0x19fae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAECu; }
        if (ctx->pc != 0x19FAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAECu; }
        if (ctx->pc != 0x19FAECu) { return; }
    }
    ctx->pc = 0x19FAECu;
label_19faec:
    // 0x19faec: 0x3c033fe4  lui         $v1, 0x3FE4
    ctx->pc = 0x19faecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16356 << 16));
    // 0x19faf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19faf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19faf4: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19FAF4u;
    SET_GPR_U32(ctx, 31, 0x19FAFCu);
    ctx->pc = 0x19FAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAF4u;
            // 0x19faf8: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAFCu; }
        if (ctx->pc != 0x19FAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FAFCu; }
        if (ctx->pc != 0x19FAFCu) { return; }
    }
    ctx->pc = 0x19FAFCu;
label_19fafc:
    // 0x19fafc: 0xc048bde  jal         func_122F78
    ctx->pc = 0x19FAFCu;
    SET_GPR_U32(ctx, 31, 0x19FB04u);
    ctx->pc = 0x19FB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FAFCu;
            // 0x19fb00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB04u; }
        if (ctx->pc != 0x19FB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FB04u; }
        if (ctx->pc != 0x19FB04u) { return; }
    }
    ctx->pc = 0x19FB04u;
label_19fb04:
    // 0x19fb04: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19fb04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19fb08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19FB08u;
    {
        const bool branch_taken_0x19fb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB08u;
            // 0x19fb0c: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb08) {
            ctx->pc = 0x19FB28u;
            goto label_19fb28;
        }
    }
    ctx->pc = 0x19FB10u;
label_19fb10:
    // 0x19fb10: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FB10u;
    {
        const bool branch_taken_0x19fb10 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x19FB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB10u;
            // 0x19fb14: 0x101043  sra         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb10) {
            ctx->pc = 0x19FB20u;
            goto label_19fb20;
        }
    }
    ctx->pc = 0x19FB18u;
    // 0x19fb18: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x19fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19fb1c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19fb1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19fb20:
    // 0x19fb20: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19fb20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19fb24: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x19fb24u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_19fb28:
    // 0x19fb28: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x19fb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_19fb2c:
    // 0x19fb2c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19fb2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19fb30: 0x4420074  bltzl       $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x19FB30u;
    {
        const bool branch_taken_0x19fb30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19fb30) {
            ctx->pc = 0x19FB34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB30u;
            // 0x19fb34: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19FD04u;
            goto label_19fd04;
        }
    }
    ctx->pc = 0x19FB38u;
    // 0x19fb38: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x19fb38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19fb3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19fb3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb40: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x19FB40u;
    {
        const bool branch_taken_0x19fb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fb40) {
            ctx->pc = 0x19FD04u;
            goto label_19fd04;
        }
    }
    ctx->pc = 0x19FB48u;
label_19fb48:
    // 0x19fb48: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x19fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x19fb4c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x19fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x19fb50: 0x8c429478  lw          $v0, -0x6B88($v0)
    ctx->pc = 0x19fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939768)));
    // 0x19fb54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19fb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19fb58: 0x5440006a  bnel        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x19FB58u;
    {
        const bool branch_taken_0x19fb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb58) {
            ctx->pc = 0x19FB5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB58u;
            // 0x19fb5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19FD04u;
            goto label_19fd04;
        }
    }
    ctx->pc = 0x19FB60u;
    // 0x19fb60: 0x24c2fffa  addiu       $v0, $a2, -0x6
    ctx->pc = 0x19fb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967290));
    // 0x19fb64: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x19fb64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x19fb68: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FB68u;
    {
        const bool branch_taken_0x19fb68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fb68) {
            ctx->pc = 0x19FB7Cu;
            goto label_19fb7c;
        }
    }
    ctx->pc = 0x19FB70u;
    // 0x19fb70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19fb70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb74: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x19FB74u;
    {
        const bool branch_taken_0x19fb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fb74) {
            ctx->pc = 0x19FD04u;
            goto label_19fd04;
        }
    }
    ctx->pc = 0x19FB7Cu;
label_19fb7c:
    // 0x19fb7c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19fb80: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x19fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19fb84: 0x9442dab0  lhu         $v0, -0x2550($v0)
    ctx->pc = 0x19fb84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x19fb88: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x19fb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x19fb8c: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FB8Cu;
    {
        const bool branch_taken_0x19fb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19fb8c) {
            ctx->pc = 0x19FB90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB8Cu;
            // 0x19fb90: 0x51e3c  dsll32      $v1, $a1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19FB9Cu;
            goto label_19fb9c;
        }
    }
    ctx->pc = 0x19FB94u;
    // 0x19fb94: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x19FB94u;
    {
        const bool branch_taken_0x19fb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FB94u;
            // 0x19fb98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb94) {
            ctx->pc = 0x19FD04u;
            goto label_19fd04;
        }
    }
    ctx->pc = 0x19FB9Cu;
label_19fb9c:
    // 0x19fb9c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x19fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x19fba0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x19fba0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x19fba4: 0x2442b275  addiu       $v0, $v0, -0x4D8B
    ctx->pc = 0x19fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947445));
    // 0x19fba8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19fbac: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19fbacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19fbb0: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x19fbb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x19fbb4: 0x5020004e  beql        $at, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x19FBB4u;
    {
        const bool branch_taken_0x19fbb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fbb4) {
            ctx->pc = 0x19FBB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBB4u;
            // 0x19fbb8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19FCF0u;
            goto label_19fcf0;
        }
    }
    ctx->pc = 0x19FBBCu;
    // 0x19fbbc: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x19fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x19fbc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19fbc4: 0x2463f310  addiu       $v1, $v1, -0xCF0
    ctx->pc = 0x19fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963984));
    // 0x19fbc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19fbcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19fbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19fbd0: 0x400008  jr          $v0
    ctx->pc = 0x19FBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19FBD8u: goto label_19fbd8;
            case 0x19FBE8u: goto label_19fbe8;
            case 0x19FC14u: goto label_19fc14;
            case 0x19FC50u: goto label_19fc50;
            case 0x19FC7Cu: goto label_19fc7c;
            case 0x19FCA8u: goto label_19fca8;
            case 0x19FCD4u: goto label_19fcd4;
            case 0x19FCECu: goto label_19fcec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FBD8u;
label_19fbd8:
    // 0x19fbd8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x19fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19fbdc: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19fbdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19fbe0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x19FBE0u;
    {
        const bool branch_taken_0x19fbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBE0u;
            // 0x19fbe4: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fbe0) {
            ctx->pc = 0x19FCECu;
            goto label_19fcec;
        }
    }
    ctx->pc = 0x19FBE8u;
label_19fbe8:
    // 0x19fbe8: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19FBE8u;
    SET_GPR_U32(ctx, 31, 0x19FBF0u);
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBF0u; }
        if (ctx->pc != 0x19FBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FBF0u; }
        if (ctx->pc != 0x19FBF0u) { return; }
    }
    ctx->pc = 0x19FBF0u;
label_19fbf0:
    // 0x19fbf0: 0x3c033ff8  lui         $v1, 0x3FF8
    ctx->pc = 0x19fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16376 << 16));
    // 0x19fbf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fbf8: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19FBF8u;
    SET_GPR_U32(ctx, 31, 0x19FC00u);
    ctx->pc = 0x19FBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FBF8u;
            // 0x19fbfc: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC00u; }
        if (ctx->pc != 0x19FC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC00u; }
        if (ctx->pc != 0x19FC00u) { return; }
    }
    ctx->pc = 0x19FC00u;
label_19fc00:
    // 0x19fc00: 0xc048bde  jal         func_122F78
    ctx->pc = 0x19FC00u;
    SET_GPR_U32(ctx, 31, 0x19FC08u);
    ctx->pc = 0x19FC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC00u;
            // 0x19fc04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC08u; }
        if (ctx->pc != 0x19FC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC08u; }
        if (ctx->pc != 0x19FC08u) { return; }
    }
    ctx->pc = 0x19FC08u;
label_19fc08:
    // 0x19fc08: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19fc08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19fc0c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x19FC0Cu;
    {
        const bool branch_taken_0x19fc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC0Cu;
            // 0x19fc10: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc0c) {
            ctx->pc = 0x19FCECu;
            goto label_19fcec;
        }
    }
    ctx->pc = 0x19FC14u;
label_19fc14:
    // 0x19fc14: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19FC14u;
    SET_GPR_U32(ctx, 31, 0x19FC1Cu);
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC1Cu; }
        if (ctx->pc != 0x19FC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC1Cu; }
        if (ctx->pc != 0x19FC1Cu) { return; }
    }
    ctx->pc = 0x19FC1Cu;
label_19fc1c:
    // 0x19fc1c: 0x3c043ff3  lui         $a0, 0x3FF3
    ctx->pc = 0x19fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16371 << 16));
    // 0x19fc20: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x19fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x19fc24: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x19fc24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x19fc28: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x19fc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x19fc2c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x19fc2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x19fc30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc34: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19FC34u;
    SET_GPR_U32(ctx, 31, 0x19FC3Cu);
    ctx->pc = 0x19FC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC34u;
            // 0x19fc38: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC3Cu; }
        if (ctx->pc != 0x19FC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC3Cu; }
        if (ctx->pc != 0x19FC3Cu) { return; }
    }
    ctx->pc = 0x19FC3Cu;
label_19fc3c:
    // 0x19fc3c: 0xc048bde  jal         func_122F78
    ctx->pc = 0x19FC3Cu;
    SET_GPR_U32(ctx, 31, 0x19FC44u);
    ctx->pc = 0x19FC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC3Cu;
            // 0x19fc40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC44u; }
        if (ctx->pc != 0x19FC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC44u; }
        if (ctx->pc != 0x19FC44u) { return; }
    }
    ctx->pc = 0x19FC44u;
label_19fc44:
    // 0x19fc44: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19fc44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19fc48: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x19FC48u;
    {
        const bool branch_taken_0x19fc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC48u;
            // 0x19fc4c: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc48) {
            ctx->pc = 0x19FCECu;
            goto label_19fcec;
        }
    }
    ctx->pc = 0x19FC50u;
label_19fc50:
    // 0x19fc50: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19FC50u;
    SET_GPR_U32(ctx, 31, 0x19FC58u);
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC58u; }
        if (ctx->pc != 0x19FC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC58u; }
        if (ctx->pc != 0x19FC58u) { return; }
    }
    ctx->pc = 0x19FC58u;
label_19fc58:
    // 0x19fc58: 0x3c033fec  lui         $v1, 0x3FEC
    ctx->pc = 0x19fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16364 << 16));
    // 0x19fc5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc60: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19FC60u;
    SET_GPR_U32(ctx, 31, 0x19FC68u);
    ctx->pc = 0x19FC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC60u;
            // 0x19fc64: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC68u; }
        if (ctx->pc != 0x19FC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC68u; }
        if (ctx->pc != 0x19FC68u) { return; }
    }
    ctx->pc = 0x19FC68u;
label_19fc68:
    // 0x19fc68: 0xc048bde  jal         func_122F78
    ctx->pc = 0x19FC68u;
    SET_GPR_U32(ctx, 31, 0x19FC70u);
    ctx->pc = 0x19FC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC68u;
            // 0x19fc6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC70u; }
        if (ctx->pc != 0x19FC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC70u; }
        if (ctx->pc != 0x19FC70u) { return; }
    }
    ctx->pc = 0x19FC70u;
label_19fc70:
    // 0x19fc70: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19fc70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19fc74: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19FC74u;
    {
        const bool branch_taken_0x19fc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC74u;
            // 0x19fc78: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc74) {
            ctx->pc = 0x19FCECu;
            goto label_19fcec;
        }
    }
    ctx->pc = 0x19FC7Cu;
label_19fc7c:
    // 0x19fc7c: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19FC7Cu;
    SET_GPR_U32(ctx, 31, 0x19FC84u);
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC84u; }
        if (ctx->pc != 0x19FC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC84u; }
        if (ctx->pc != 0x19FC84u) { return; }
    }
    ctx->pc = 0x19FC84u;
label_19fc84:
    // 0x19fc84: 0x3c033fe8  lui         $v1, 0x3FE8
    ctx->pc = 0x19fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16360 << 16));
    // 0x19fc88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fc8c: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19FC8Cu;
    SET_GPR_U32(ctx, 31, 0x19FC94u);
    ctx->pc = 0x19FC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC8Cu;
            // 0x19fc90: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC94u; }
        if (ctx->pc != 0x19FC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC94u; }
        if (ctx->pc != 0x19FC94u) { return; }
    }
    ctx->pc = 0x19FC94u;
label_19fc94:
    // 0x19fc94: 0xc048bde  jal         func_122F78
    ctx->pc = 0x19FC94u;
    SET_GPR_U32(ctx, 31, 0x19FC9Cu);
    ctx->pc = 0x19FC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FC94u;
            // 0x19fc98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC9Cu; }
        if (ctx->pc != 0x19FC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FC9Cu; }
        if (ctx->pc != 0x19FC9Cu) { return; }
    }
    ctx->pc = 0x19FC9Cu;
label_19fc9c:
    // 0x19fc9c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19fc9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19fca0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19FCA0u;
    {
        const bool branch_taken_0x19fca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCA0u;
            // 0x19fca4: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fca0) {
            ctx->pc = 0x19FCECu;
            goto label_19fcec;
        }
    }
    ctx->pc = 0x19FCA8u;
label_19fca8:
    // 0x19fca8: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x19FCA8u;
    SET_GPR_U32(ctx, 31, 0x19FCB0u);
    ctx->pc = 0x122EC8u;
    if (runtime->hasFunction(0x122EC8u)) {
        auto targetFn = runtime->lookupFunction(0x122EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCB0u; }
        if (ctx->pc != 0x19FCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122EC8_0x122ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCB0u; }
        if (ctx->pc != 0x19FCB0u) { return; }
    }
    ctx->pc = 0x19FCB0u;
label_19fcb0:
    // 0x19fcb0: 0x3c033fe4  lui         $v1, 0x3FE4
    ctx->pc = 0x19fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16356 << 16));
    // 0x19fcb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19fcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fcb8: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x19FCB8u;
    SET_GPR_U32(ctx, 31, 0x19FCC0u);
    ctx->pc = 0x19FCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCB8u;
            // 0x19fcbc: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (runtime->hasFunction(0x1229D8u)) {
        auto targetFn = runtime->lookupFunction(0x1229D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCC0u; }
        if (ctx->pc != 0x19FCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001229D8_0x1229d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCC0u; }
        if (ctx->pc != 0x19FCC0u) { return; }
    }
    ctx->pc = 0x19FCC0u;
label_19fcc0:
    // 0x19fcc0: 0xc048bde  jal         func_122F78
    ctx->pc = 0x19FCC0u;
    SET_GPR_U32(ctx, 31, 0x19FCC8u);
    ctx->pc = 0x19FCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCC0u;
            // 0x19fcc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (runtime->hasFunction(0x122F78u)) {
        auto targetFn = runtime->lookupFunction(0x122F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCC8u; }
        if (ctx->pc != 0x19FCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122F78_0x122f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19FCC8u; }
        if (ctx->pc != 0x19FCC8u) { return; }
    }
    ctx->pc = 0x19FCC8u;
label_19fcc8:
    // 0x19fcc8: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19fcc8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19fccc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19FCCCu;
    {
        const bool branch_taken_0x19fccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCCCu;
            // 0x19fcd0: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fccc) {
            ctx->pc = 0x19FCECu;
            goto label_19fcec;
        }
    }
    ctx->pc = 0x19FCD4u;
label_19fcd4:
    // 0x19fcd4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FCD4u;
    {
        const bool branch_taken_0x19fcd4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x19FCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCD4u;
            // 0x19fcd8: 0x101043  sra         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcd4) {
            ctx->pc = 0x19FCE4u;
            goto label_19fce4;
        }
    }
    ctx->pc = 0x19FCDCu;
    // 0x19fcdc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x19fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19fce0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19fce0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_19fce4:
    // 0x19fce4: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x19fce4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19fce8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x19fce8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_19fcec:
    // 0x19fcec: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x19fcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_19fcf0:
    // 0x19fcf0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19fcf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19fcf4: 0x4420003  bltzl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FCF4u;
    {
        const bool branch_taken_0x19fcf4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19fcf4) {
            ctx->pc = 0x19FCF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19FCF4u;
            // 0x19fcf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19FD04u;
            goto label_19fd04;
        }
    }
    ctx->pc = 0x19FCFCu;
    // 0x19fcfc: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x19fcfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19fd00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19fd00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fd04:
    // 0x19fd04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19fd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fd08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19fd08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x19FD0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19FD0Cu;
            // 0x19fd10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19FD14u;
    // 0x19fd14: 0x0  nop
    ctx->pc = 0x19fd14u;
    // NOP
    // 0x19fd18: 0x0  nop
    ctx->pc = 0x19fd18u;
    // NOP
    // 0x19fd1c: 0x0  nop
    ctx->pc = 0x19fd1cu;
    // NOP
    ctx->pc = 0x19fd20u;
}
