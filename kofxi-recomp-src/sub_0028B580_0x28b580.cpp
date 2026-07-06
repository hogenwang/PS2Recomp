#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B580
// Address: 0x28b580 - 0x28b760
void sub_0028B580_0x28b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B580_0x28b580");
#endif

    switch (ctx->pc) {
        case 0x28b5d4u: goto label_28b5d4;
        case 0x28b638u: goto label_28b638;
        case 0x28b67cu: goto label_28b67c;
        case 0x28b688u: goto label_28b688;
        case 0x28b694u: goto label_28b694;
        case 0x28b6b8u: goto label_28b6b8;
        case 0x28b6e8u: goto label_28b6e8;
        default: break;
    }

    ctx->pc = 0x28b580u;

    // 0x28b580: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28b584: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x28b584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x28b588: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x28b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x28b58c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x28b58cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b590: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x28b590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x28b594: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28b594u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b598: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28b598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28b59c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28b59cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b5a0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x28b5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x28b5a4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x28b5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28b5a8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x28b5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x28b5ac: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x28b5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x28b5b0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x28b5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x28b5b4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x28b5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x28b5b8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x28b5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x28b5bc: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B5BCu;
    {
        const bool branch_taken_0x28b5bc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B5BCu;
            // 0x28b5c0: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5bc) {
            ctx->pc = 0x28B5CCu;
            goto label_28b5cc;
        }
    }
    ctx->pc = 0x28B5C4u;
    // 0x28b5c4: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x28B5C4u;
    {
        const bool branch_taken_0x28b5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B5C4u;
            // 0x28b5c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5c4) {
            ctx->pc = 0x28B72Cu;
            goto label_28b72c;
        }
    }
    ctx->pc = 0x28B5CCu;
label_28b5cc:
    // 0x28b5cc: 0xc0a19ca  jal         func_286728
    ctx->pc = 0x28B5CCu;
    SET_GPR_U32(ctx, 31, 0x28B5D4u);
    ctx->pc = 0x28B5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B5CCu;
            // 0x28b5d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286728u;
    if (runtime->hasFunction(0x286728u)) {
        auto targetFn = runtime->lookupFunction(0x286728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B5D4u; }
        if (ctx->pc != 0x28B5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286728_0x286728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B5D4u; }
        if (ctx->pc != 0x28B5D4u) { return; }
    }
    ctx->pc = 0x28B5D4u;
label_28b5d4:
    // 0x28b5d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28b5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b5d8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x28b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x28b5dc: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B5DCu;
    {
        const bool branch_taken_0x28b5dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B5DCu;
            // 0x28b5e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5dc) {
            ctx->pc = 0x28B5F4u;
            goto label_28b5f4;
        }
    }
    ctx->pc = 0x28B5E4u;
    // 0x28b5e4: 0xa21014  dsllv       $v0, $v0, $a1
    ctx->pc = 0x28b5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x28b5e8: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x28b5e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x28b5ec: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x28B5ECu;
    {
        const bool branch_taken_0x28b5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B5ECu;
            // 0x28b5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5ec) {
            ctx->pc = 0x28B72Cu;
            goto label_28b72c;
        }
    }
    ctx->pc = 0x28B5F4u;
label_28b5f4:
    // 0x28b5f4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x28b5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x28b5f8: 0x256182b  sltu        $v1, $s2, $s6
    ctx->pc = 0x28b5f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x28b5fc: 0x256102f  dsubu       $v0, $s2, $s6
    ctx->pc = 0x28b5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) - GPR_U64(ctx, 22));
    // 0x28b600: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x28b600u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28b604: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B604u;
    {
        const bool branch_taken_0x28b604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B604u;
            // 0x28b608: 0x43900a  movz        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b604) {
            ctx->pc = 0x28B624u;
            goto label_28b624;
        }
    }
    ctx->pc = 0x28B60Cu;
    // 0x28b60c: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x28b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28b610: 0xb21814  dsllv       $v1, $s2, $a1
    ctx->pc = 0x28b610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x28b614: 0x541016  dsrlv       $v0, $s4, $v0
    ctx->pc = 0x28b614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x28b618: 0xb6b014  dsllv       $s6, $s6, $a1
    ctx->pc = 0x28b618u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x28b61c: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x28b61cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28b620: 0xb4a014  dsllv       $s4, $s4, $a1
    ctx->pc = 0x28b620u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (GPR_U32(ctx, 5) & 0x3F));
label_28b624:
    // 0x28b624: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28b624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28b628: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x28b628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x28b62c: 0x16a83e  dsrl32      $s5, $s6, 0
    ctx->pc = 0x28b62cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x28b630: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28B630u;
    {
        const bool branch_taken_0x28b630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B630u;
            // 0x28b634: 0x2c2f024  and         $fp, $s6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b630) {
            ctx->pc = 0x28B658u;
            goto label_28b658;
        }
    }
    ctx->pc = 0x28B638u;
label_28b638:
    // 0x28b638: 0x2842824  and         $a1, $s4, $a0
    ctx->pc = 0x28b638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 4));
    // 0x28b63c: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x28b63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x28b640: 0x2642024  and         $a0, $s3, $a0
    ctx->pc = 0x28b640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
    // 0x28b644: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x28b644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x28b648: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x28b648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x28b64c: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x28b64cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28b650: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x28b650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x28b654: 0x5a03c  dsll32      $s4, $a1, 0
    ctx->pc = 0x28b654u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) << (32 + 0));
label_28b658:
    // 0x28b658: 0x12103e  dsrl32      $v0, $s2, 0
    ctx->pc = 0x28b658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x28b65c: 0x14550005  bne         $v0, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B65Cu;
    {
        const bool branch_taken_0x28b65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x28B660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B65Cu;
            // 0x28b660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b65c) {
            ctx->pc = 0x28B674u;
            goto label_28b674;
        }
    }
    ctx->pc = 0x28B664u;
    // 0x28b664: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x28b664u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x28b668: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x28b668u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x28b66c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28B66Cu;
    {
        const bool branch_taken_0x28b66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B66Cu;
            // 0x28b670: 0x2617ffff  addiu       $s7, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b66c) {
            ctx->pc = 0x28B688u;
            goto label_28b688;
        }
    }
    ctx->pc = 0x28B674u;
label_28b674:
    // 0x28b674: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x28B674u;
    SET_GPR_U32(ctx, 31, 0x28B67Cu);
    ctx->pc = 0x28B678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B674u;
            // 0x28b678: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (runtime->hasFunction(0x1215E8u)) {
        auto targetFn = runtime->lookupFunction(0x1215E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B67Cu; }
        if (ctx->pc != 0x28B67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001215E8_0x1215e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B67Cu; }
        if (ctx->pc != 0x28B67Cu) { return; }
    }
    ctx->pc = 0x28B67Cu;
label_28b67c:
    // 0x28b67c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28b67cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b680: 0x2617ffff  addiu       $s7, $s0, -0x1
    ctx->pc = 0x28b680u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x28b684: 0x0  nop
    ctx->pc = 0x28b684u;
    // NOP
label_28b688:
    // 0x28b688: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28b688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b68c: 0xc048082  jal         func_120208
    ctx->pc = 0x28B68Cu;
    SET_GPR_U32(ctx, 31, 0x28B694u);
    ctx->pc = 0x28B690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B68Cu;
            // 0x28b690: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B694u; }
        if (ctx->pc != 0x28B694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B694u; }
        if (ctx->pc != 0x28B694u) { return; }
    }
    ctx->pc = 0x28B694u;
label_28b694:
    // 0x28b694: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28b694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b698: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28b698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28b69c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28b69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28b6a0: 0x251802f  dsubu       $s0, $s2, $s1
    ctx->pc = 0x28b6a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) - GPR_U64(ctx, 17));
    // 0x28b6a4: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x28b6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x28b6a8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28B6A8u;
    {
        const bool branch_taken_0x28b6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B6A8u;
            // 0x28b6ac: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b6a8) {
            ctx->pc = 0x28B6DCu;
            goto label_28b6dc;
        }
    }
    ctx->pc = 0x28B6B0u;
    // 0x28b6b0: 0xc048082  jal         func_120208
    ctx->pc = 0x28B6B0u;
    SET_GPR_U32(ctx, 31, 0x28B6B8u);
    ctx->pc = 0x28B6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B6B0u;
            // 0x28b6b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B6B8u; }
        if (ctx->pc != 0x28B6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B6B8u; }
        if (ctx->pc != 0x28B6B8u) { return; }
    }
    ctx->pc = 0x28B6B8u;
label_28b6b8:
    // 0x28b6b8: 0x14203e  dsrl32      $a0, $s4, 0
    ctx->pc = 0x28b6b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x28b6bc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x28b6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x28b6c0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x28b6c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x28b6c4: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x28b6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x28b6c8: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x28b6c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x28b6cc: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x28b6ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x28b6d0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x28b6d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28b6d4: 0x5460ffec  bnel        $v1, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x28B6D4u;
    {
        const bool branch_taken_0x28b6d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b6d4) {
            ctx->pc = 0x28B6D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28B6D4u;
            // 0x28b6d8: 0x6673ffff  daddiu      $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)4294967295);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28B688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28b688;
        }
    }
    ctx->pc = 0x28B6DCu;
label_28b6dc:
    // 0x28b6dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28b6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b6e0: 0xc048082  jal         func_120208
    ctx->pc = 0x28B6E0u;
    SET_GPR_U32(ctx, 31, 0x28B6E8u);
    ctx->pc = 0x28B6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B6E0u;
            // 0x28b6e4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (runtime->hasFunction(0x120208u)) {
        auto targetFn = runtime->lookupFunction(0x120208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B6E8u; }
        if (ctx->pc != 0x28B6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120208_0x120208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B6E8u; }
        if (ctx->pc != 0x28B6E8u) { return; }
    }
    ctx->pc = 0x28B6E8u;
label_28b6e8:
    // 0x28b6e8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x28b6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28b6ec: 0x2803e  dsrl32      $s0, $v0, 0
    ctx->pc = 0x28b6ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x28b6f0: 0x283102b  sltu        $v0, $s4, $v1
    ctx->pc = 0x28b6f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28b6f4: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x28b6f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x28b6f8: 0x222882d  daddu       $s1, $s1, $v0
    ctx->pc = 0x28b6f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x28b6fc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x28b6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x28b700: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x28b700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x28b704: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x28b704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x28b708: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B708u;
    {
        const bool branch_taken_0x28b708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B708u;
            // 0x28b70c: 0x283a02f  dsubu       $s4, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b708) {
            ctx->pc = 0x28B718u;
            goto label_28b718;
        }
    }
    ctx->pc = 0x28B710u;
    // 0x28b710: 0x256902d  daddu       $s2, $s2, $s6
    ctx->pc = 0x28b710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 22));
    // 0x28b714: 0x6673ffff  daddiu      $s3, $s3, -0x1
    ctx->pc = 0x28b714u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)4294967295);
label_28b718:
    // 0x28b718: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x28b718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b71c: 0x1600ffc6  bnez        $s0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x28B71Cu;
    {
        const bool branch_taken_0x28b71c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B71Cu;
            // 0x28b720: 0x251902f  dsubu       $s2, $s2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) - GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b71c) {
            ctx->pc = 0x28B638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28b638;
        }
    }
    ctx->pc = 0x28B724u;
    // 0x28b724: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x28b724u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b728: 0x731025  or          $v0, $v1, $s3
    ctx->pc = 0x28b728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
label_28b72c:
    // 0x28b72c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x28b72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28b730: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x28b730u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28b734: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x28b734u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28b738: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x28b738u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28b73c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x28b73cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28b740: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x28b740u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b744: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x28b744u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b748: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x28b748u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b74c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x28b74cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b750: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28b750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b754: 0x3e00008  jr          $ra
    ctx->pc = 0x28B754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B754u;
            // 0x28b758: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B75Cu;
    // 0x28b75c: 0x0  nop
    ctx->pc = 0x28b75cu;
    // NOP
    ctx->pc = 0x28b760u;
}
