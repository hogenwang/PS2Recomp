#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00229588
// Address: 0x229588 - 0x2297f0
void sub_00229588_0x229588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229588_0x229588");
#endif

    switch (ctx->pc) {
        case 0x2295d8u: goto label_2295d8;
        case 0x2295f0u: goto label_2295f0;
        case 0x229638u: goto label_229638;
        case 0x2296d0u: goto label_2296d0;
        case 0x229744u: goto label_229744;
        case 0x229760u: goto label_229760;
        default: break;
    }

    ctx->pc = 0x229588u;

    // 0x229588: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x229588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x22958c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x229590: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x229590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x229594: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x229594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229598: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x229598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22959c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x22959cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2295a0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2295a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2295a4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2295a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2295a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2295a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295ac: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2295acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2295b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2295b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295b4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2295b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2295b8: 0x3c16003a  lui         $s6, 0x3A
    ctx->pc = 0x2295b8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)58 << 16));
    // 0x2295bc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2295bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2295c0: 0x3c1501c1  lui         $s5, 0x1C1
    ctx->pc = 0x2295c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)449 << 16));
    // 0x2295c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2295c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2295c8: 0x3c1301c1  lui         $s3, 0x1C1
    ctx->pc = 0x2295c8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)449 << 16));
    // 0x2295cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2295ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2295d0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2295D0u;
    SET_GPR_U32(ctx, 31, 0x2295D8u);
    ctx->pc = 0x2295D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2295D0u;
            // 0x2295d4: 0x3c1701c1  lui         $s7, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2295D8u; }
        if (ctx->pc != 0x2295D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2295D8u; }
        if (ctx->pc != 0x2295D8u) { return; }
    }
    ctx->pc = 0x2295D8u;
label_2295d8:
    // 0x2295d8: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x2295d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295dc: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x2295dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x2295e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2295e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295e4: 0x2484a750  addiu       $a0, $a0, -0x58B0
    ctx->pc = 0x2295e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944592));
    // 0x2295e8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2295E8u;
    SET_GPR_U32(ctx, 31, 0x2295F0u);
    ctx->pc = 0x2295ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2295E8u;
            // 0x2295ec: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2295F0u; }
        if (ctx->pc != 0x2295F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2295F0u; }
        if (ctx->pc != 0x2295F0u) { return; }
    }
    ctx->pc = 0x2295F0u;
label_2295f0:
    // 0x2295f0: 0x3c1401c1  lui         $s4, 0x1C1
    ctx->pc = 0x2295f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)449 << 16));
    // 0x2295f4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2295f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2295f8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2295f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2295fc: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2295fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x229600: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x229600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x229604: 0x24030fff  addiu       $v1, $zero, 0xFFF
    ctx->pc = 0x229604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x229608: 0xac40a744  sw          $zero, -0x58BC($v0)
    ctx->pc = 0x229608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944580), GPR_U32(ctx, 0));
    // 0x22960c: 0xaec4f9e0  sw          $a0, -0x620($s6)
    ctx->pc = 0x22960cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294965728), GPR_U32(ctx, 4));
    // 0x229610: 0x2324021  addu        $t0, $s1, $s2
    ctx->pc = 0x229610u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x229614: 0xaca0a768  sw          $zero, -0x5898($a1)
    ctx->pc = 0x229614u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294944616), GPR_U32(ctx, 0));
    // 0x229618: 0x3c0b01c1  lui         $t3, 0x1C1
    ctx->pc = 0x229618u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)449 << 16));
    // 0x22961c: 0xaea6a724  sw          $a2, -0x58DC($s5)
    ctx->pc = 0x22961cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294944548), GPR_U32(ctx, 6));
    // 0x229620: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x229620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229624: 0xaee3a72c  sw          $v1, -0x58D4($s7)
    ctx->pc = 0x229624u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294944556), GPR_U32(ctx, 3));
    // 0x229628: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x229628u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22962c: 0xae60a728  sw          $zero, -0x58D8($s3)
    ctx->pc = 0x22962cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294944552), GPR_U32(ctx, 0));
    // 0x229630: 0x24091000  addiu       $t1, $zero, 0x1000
    ctx->pc = 0x229630u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x229634: 0x0  nop
    ctx->pc = 0x229634u;
    // NOP
label_229638:
    // 0x229638: 0x8ce2a728  lw          $v0, -0x58D8($a3)
    ctx->pc = 0x229638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294944552)));
    // 0x22963c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22963cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x229640: 0x4a1814  dsllv       $v1, $t2, $v0
    ctx->pc = 0x229640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x229644: 0xace2a728  sw          $v0, -0x58D8($a3)
    ctx->pc = 0x229644u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294944552), GPR_U32(ctx, 2));
    // 0x229648: 0x0  nop
    ctx->pc = 0x229648u;
    // NOP
    // 0x22964c: 0x1469fffa  bne         $v1, $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22964Cu;
    {
        const bool branch_taken_0x22964c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        if (branch_taken_0x22964c) {
            ctx->pc = 0x229638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_229638;
        }
    }
    ctx->pc = 0x229654u;
    // 0x229654: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x229654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x229658: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x229658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x22965c: 0x8c44a778  lw          $a0, -0x5888($v0)
    ctx->pc = 0x22965cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944632)));
    // 0x229660: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x229660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x229664: 0xac68a71c  sw          $t0, -0x58E4($v1)
    ctx->pc = 0x229664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944540), GPR_U32(ctx, 8));
    // 0x229668: 0xac51a718  sw          $s1, -0x58E8($v0)
    ctx->pc = 0x229668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944536), GPR_U32(ctx, 17));
    // 0x22966c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22966Cu;
    {
        const bool branch_taken_0x22966c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x229670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22966Cu;
            // 0x229670: 0xae91a720  sw          $s1, -0x58E0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294944544), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22966c) {
            ctx->pc = 0x22967Cu;
            goto label_22967c;
        }
    }
    ctx->pc = 0x229674u;
    // 0x229674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229678: 0xad62a77c  sw          $v0, -0x5884($t3)
    ctx->pc = 0x229678u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294944636), GPR_U32(ctx, 2));
label_22967c:
    // 0x22967c: 0x8d62a77c  lw          $v0, -0x5884($t3)
    ctx->pc = 0x22967cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294944636)));
    // 0x229680: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229680u;
    {
        const bool branch_taken_0x229680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229680u;
            // 0x229684: 0x3c0301c1  lui         $v1, 0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229680) {
            ctx->pc = 0x229690u;
            goto label_229690;
        }
    }
    ctx->pc = 0x229688u;
    // 0x229688: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22968c: 0xac62a76c  sw          $v0, -0x5894($v1)
    ctx->pc = 0x22968cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944620), GPR_U32(ctx, 2));
label_229690:
    // 0x229690: 0x8ea6a724  lw          $a2, -0x58DC($s5)
    ctx->pc = 0x229690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294944548)));
    // 0x229694: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x229694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x229698: 0x8e70a728  lw          $s0, -0x58D8($s3)
    ctx->pc = 0x229698u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944552)));
    // 0x22969c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22969cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296a0: 0x61882  srl         $v1, $a2, 2
    ctx->pc = 0x2296a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x2296a4: 0xac51a748  sw          $s1, -0x58B8($v0)
    ctx->pc = 0x2296a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944584), GPR_U32(ctx, 17));
    // 0x2296a8: 0x2128006  srlv        $s0, $s2, $s0
    ctx->pc = 0x2296a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
    // 0x2296ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2296acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296b0: 0x203001b  divu        $zero, $s0, $v1
    ctx->pc = 0x2296b0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x2296b4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2296B4u;
    {
        const bool branch_taken_0x2296b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2296b4) {
            ctx->pc = 0x2296B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2296B4u;
            // 0x2296b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2296BCu;
            goto label_2296bc;
        }
    }
    ctx->pc = 0x2296BCu;
label_2296bc:
    // 0x2296bc: 0x8012  mflo        $s0
    ctx->pc = 0x2296bcu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2296c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2296c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2296c4: 0x2060018  mult        $zero, $s0, $a2
    ctx->pc = 0x2296c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2296c8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2296C8u;
    SET_GPR_U32(ctx, 31, 0x2296D0u);
    ctx->pc = 0x2296CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2296C8u;
            // 0x2296cc: 0x3012  mflo        $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ctx->lo);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2296D0u; }
        if (ctx->pc != 0x2296D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2296D0u; }
        if (ctx->pc != 0x2296D0u) { return; }
    }
    ctx->pc = 0x2296D0u;
label_2296d0:
    // 0x2296d0: 0x8ea3a724  lw          $v1, -0x58DC($s5)
    ctx->pc = 0x2296d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294944548)));
    // 0x2296d4: 0x8e84a720  lw          $a0, -0x58E0($s4)
    ctx->pc = 0x2296d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294944544)));
    // 0x2296d8: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x2296d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2296dc: 0x8ee2a72c  lw          $v0, -0x58D4($s7)
    ctx->pc = 0x2296dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294944556)));
    // 0x2296e0: 0x8e67a728  lw          $a3, -0x58D8($s3)
    ctx->pc = 0x2296e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294944552)));
    // 0x2296e4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2296e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2296e8: 0x22827  nor         $a1, $zero, $v0
    ctx->pc = 0x2296e8u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2296ec: 0x8fc6f9e0  lw          $a2, -0x620($fp)
    ctx->pc = 0x2296ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294965728)));
    // 0x2296f0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2296f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2296f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2296f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2296f8: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x2296f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x2296fc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2296fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x229700: 0xac70a74c  sw          $s0, -0x58B4($v1)
    ctx->pc = 0x229700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944588), GPR_U32(ctx, 16));
    // 0x229704: 0xe22806  srlv        $a1, $v0, $a3
    ctx->pc = 0x229704u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x229708: 0xae84a720  sw          $a0, -0x58E0($s4)
    ctx->pc = 0x229708u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294944544), GPR_U32(ctx, 4));
    // 0x22970c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x22970cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x229710: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x229710u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x229714: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x229714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x229718: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x229718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x22971c: 0xac62a73c  sw          $v0, -0x58C4($v1)
    ctx->pc = 0x22971cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944572), GPR_U32(ctx, 2));
    // 0x229720: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x229720u;
    {
        const bool branch_taken_0x229720 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x229724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229720u;
            // 0x229724: 0xac85a740  sw          $a1, -0x58C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294944576), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229720) {
            ctx->pc = 0x229734u;
            goto label_229734;
        }
    }
    ctx->pc = 0x229728u;
    // 0x229728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22972c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22972cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229730: 0xaec2f9e0  sw          $v0, -0x620($s6)
    ctx->pc = 0x229730u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294965728), GPR_U32(ctx, 2));
label_229734:
    // 0x229734: 0xe61004  sllv        $v0, $a2, $a3
    ctx->pc = 0x229734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x229738: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x229738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22973c: 0xc08a45c  jal         func_229170
    ctx->pc = 0x22973Cu;
    SET_GPR_U32(ctx, 31, 0x229744u);
    ctx->pc = 0x229740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22973Cu;
            // 0x229740: 0xaec2f9e0  sw          $v0, -0x620($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294965728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229170u;
    if (runtime->hasFunction(0x229170u)) {
        auto targetFn = runtime->lookupFunction(0x229170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229744u; }
        if (ctx->pc != 0x229744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229170_0x229170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229744u; }
        if (ctx->pc != 0x229744u) { return; }
    }
    ctx->pc = 0x229744u;
label_229744:
    // 0x229744: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x229744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x229748: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x229748u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x22974c: 0xac62a780  sw          $v0, -0x5880($v1)
    ctx->pc = 0x22974cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944640), GPR_U32(ctx, 2));
    // 0x229750: 0x24c64480  addiu       $a2, $a2, 0x4480
    ctx->pc = 0x229750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17536));
    // 0x229754: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x229754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229758: 0xc0985b8  jal         func_2616E0
    ctx->pc = 0x229758u;
    SET_GPR_U32(ctx, 31, 0x229760u);
    ctx->pc = 0x22975Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229758u;
            // 0x22975c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (runtime->hasFunction(0x2616E0u)) {
        auto targetFn = runtime->lookupFunction(0x2616E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229760u; }
        if (ctx->pc != 0x229760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002616E0_0x2616e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229760u; }
        if (ctx->pc != 0x229760u) { return; }
    }
    ctx->pc = 0x229760u;
label_229760:
    // 0x229760: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x229760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x229764: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229764u;
    {
        const bool branch_taken_0x229764 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x229768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229764u;
            // 0x229768: 0xac62a730  sw          $v0, -0x58D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229764) {
            ctx->pc = 0x229774u;
            goto label_229774;
        }
    }
    ctx->pc = 0x22976Cu;
    // 0x22976c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22976Cu;
    {
        const bool branch_taken_0x22976c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22976Cu;
            // 0x229770: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22976c) {
            ctx->pc = 0x2297C0u;
            goto label_2297c0;
        }
    }
    ctx->pc = 0x229774u;
label_229774:
    // 0x229774: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x229774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x229778: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x229778u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x22977c: 0x8c62a734  lw          $v0, -0x58CC($v1)
    ctx->pc = 0x22977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944564)));
    // 0x229780: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x229780u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x229784: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x229784u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x229788: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x229788u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x22978c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x229790: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x229790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x229794: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x229794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x229798: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x229798u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x22979c: 0xac62a734  sw          $v0, -0x58CC($v1)
    ctx->pc = 0x22979cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944564), GPR_U32(ctx, 2));
    // 0x2297a0: 0xad40a788  sw          $zero, -0x5878($t2)
    ctx->pc = 0x2297a0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294944648), GPR_U32(ctx, 0));
    // 0x2297a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2297a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297a8: 0xace0a78c  sw          $zero, -0x5874($a3)
    ctx->pc = 0x2297a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294944652), GPR_U32(ctx, 0));
    // 0x2297ac: 0xad00a790  sw          $zero, -0x5870($t0)
    ctx->pc = 0x2297acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294944656), GPR_U32(ctx, 0));
    // 0x2297b0: 0xad20a798  sw          $zero, -0x5868($t1)
    ctx->pc = 0x2297b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294944664), GPR_U32(ctx, 0));
    // 0x2297b4: 0xac80a794  sw          $zero, -0x586C($a0)
    ctx->pc = 0x2297b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294944660), GPR_U32(ctx, 0));
    // 0x2297b8: 0xaca0a7a0  sw          $zero, -0x5860($a1)
    ctx->pc = 0x2297b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294944672), GPR_U32(ctx, 0));
    // 0x2297bc: 0xacc0a79c  sw          $zero, -0x5864($a2)
    ctx->pc = 0x2297bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294944668), GPR_U32(ctx, 0));
label_2297c0:
    // 0x2297c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2297c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2297c4: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2297c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2297c8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2297c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2297cc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2297ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2297d0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2297d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2297d4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2297d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2297d8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2297d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2297dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2297dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2297e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2297e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2297e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2297e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2297e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2297E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2297ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2297E8u;
            // 0x2297ec: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2297F0u;
    ctx->pc = 0x2297f0u;
}
