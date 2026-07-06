#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FB230
// Address: 0x1fb230 - 0x1fb350
void sub_001FB230_0x1fb230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB230_0x1fb230");
#endif

    switch (ctx->pc) {
        case 0x1fb24cu: goto label_1fb24c;
        case 0x1fb270u: goto label_1fb270;
        case 0x1fb288u: goto label_1fb288;
        case 0x1fb294u: goto label_1fb294;
        case 0x1fb2d8u: goto label_1fb2d8;
        default: break;
    }

    ctx->pc = 0x1fb230u;

    // 0x1fb230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb238: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fb238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb23c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb240: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fb240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fb244: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1FB244u;
    SET_GPR_U32(ctx, 31, 0x1FB24Cu);
    ctx->pc = 0x1FB248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB244u;
            // 0x1fb248: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB24Cu; }
        if (ctx->pc != 0x1FB24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB24Cu; }
        if (ctx->pc != 0x1FB24Cu) { return; }
    }
    ctx->pc = 0x1FB24Cu;
label_1fb24c:
    // 0x1fb24c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB24Cu;
    {
        const bool branch_taken_0x1fb24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB24Cu;
            // 0x1fb250: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb24c) {
            ctx->pc = 0x1FB270u;
            goto label_1fb270;
        }
    }
    ctx->pc = 0x1FB254u;
    // 0x1fb254: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1fb254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1fb258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb25c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb264: 0x34a5011a  ori         $a1, $a1, 0x11A
    ctx->pc = 0x1fb264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)282);
    // 0x1fb268: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1FB268u;
    ctx->pc = 0x1FB26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB268u;
            // 0x1fb26c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1FB270u;
label_1fb270:
    // 0x1fb270: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x1fb270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1fb274: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fb274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fb278: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB278u;
    {
        const bool branch_taken_0x1fb278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fb278) {
            ctx->pc = 0x1FB27Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB278u;
            // 0x1fb27c: 0x262337f8  addiu       $v1, $s1, 0x37F8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 14328));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FB28Cu;
            goto label_1fb28c;
        }
    }
    ctx->pc = 0x1FB280u;
    // 0x1fb280: 0xc07e586  jal         func_1F9618
    ctx->pc = 0x1FB280u;
    SET_GPR_U32(ctx, 31, 0x1FB288u);
    ctx->pc = 0x1FB284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB280u;
            // 0x1fb284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9618u;
    if (runtime->hasFunction(0x1F9618u)) {
        auto targetFn = runtime->lookupFunction(0x1F9618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB288u; }
        if (ctx->pc != 0x1FB288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9618_0x1f9618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FB288u; }
        if (ctx->pc != 0x1FB288u) { return; }
    }
    ctx->pc = 0x1FB288u;
label_1fb288:
    // 0x1fb288: 0x262337f8  addiu       $v1, $s1, 0x37F8
    ctx->pc = 0x1fb288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 14328));
label_1fb28c:
    // 0x1fb28c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fb28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb290: 0x26243718  addiu       $a0, $s1, 0x3718
    ctx->pc = 0x1fb290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14104));
label_1fb294:
    // 0x1fb294: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x1fb294u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb298: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x1fb298u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fb29c: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x1fb29cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1fb2a0: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x1fb2a0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1fb2a4: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x1fb2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x1fb2a8: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x1fb2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x1fb2ac: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x1fb2acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x1fb2b0: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x1fb2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x1fb2b4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1fb2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1fb2b8: 0x0  nop
    ctx->pc = 0x1fb2b8u;
    // NOP
    // 0x1fb2bc: 0x0  nop
    ctx->pc = 0x1fb2bcu;
    // NOP
    // 0x1fb2c0: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FB2C0u;
    {
        const bool branch_taken_0x1fb2c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FB2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB2C0u;
            // 0x1fb2c4: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb2c0) {
            ctx->pc = 0x1FB294u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fb294;
        }
    }
    ctx->pc = 0x1FB2C8u;
    // 0x1fb2c8: 0x260c0008  addiu       $t4, $s0, 0x8
    ctx->pc = 0x1fb2c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1fb2cc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1fb2ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb2d0: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x1fb2d0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb2d4: 0x26090030  addiu       $t1, $s0, 0x30
    ctx->pc = 0x1fb2d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1fb2d8:
    // 0x1fb2d8: 0xdd23fff0  ld          $v1, -0x10($t1)
    ctx->pc = 0x1fb2d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 4294967280)));
    // 0x1fb2dc: 0xa3140  sll         $a2, $t2, 5
    ctx->pc = 0x1fb2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x1fb2e0: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1fb2e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fb2e4: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x1fb2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x1fb2e8: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x1fb2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1fb2ec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1fb2ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1fb2f0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1fb2f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1fb2f4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x1fb2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1fb2f8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1fb2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1fb2fc: 0x29480004  slti        $t0, $t2, 0x4
    ctx->pc = 0x1fb2fcu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1fb300: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1fb300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1fb304: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x1fb304u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fb308: 0xdd630000  ld          $v1, 0x0($t3)
    ctx->pc = 0x1fb308u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1fb30c: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x1fb30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x1fb310: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1fb310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fb314: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x1fb314u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x1fb318: 0xfd830000  sd          $v1, 0x0($t4)
    ctx->pc = 0x1fb318u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x1fb31c: 0xdd240000  ld          $a0, 0x0($t1)
    ctx->pc = 0x1fb31cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb320: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x1fb320u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x1fb324: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x1fb324u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1fb328: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x1fb328u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fb32c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1fb32cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1fb330: 0x1500ffe9  bnez        $t0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1FB330u;
    {
        const bool branch_taken_0x1fb330 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB330u;
            // 0x1fb334: 0xfe020010  sd          $v0, 0x10($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb330) {
            ctx->pc = 0x1FB2D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fb2d8;
        }
    }
    ctx->pc = 0x1FB338u;
    // 0x1fb338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb33c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fb33cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb344: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb348: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FB348u;
            // 0x1fb34c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FB350u;
    ctx->pc = 0x1fb350u;
}
