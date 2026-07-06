#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024C300
// Address: 0x24c300 - 0x24c418
void sub_0024C300_0x24c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C300_0x24c300");
#endif

    switch (ctx->pc) {
        case 0x24c338u: goto label_24c338;
        case 0x24c358u: goto label_24c358;
        case 0x24c388u: goto label_24c388;
        case 0x24c3a4u: goto label_24c3a4;
        default: break;
    }

    ctx->pc = 0x24c300u;

    // 0x24c300: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x24c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x24c304: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x24c304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x24c308: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x24c308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x24c30c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x24c30cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c310: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x24c310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x24c314: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x24c314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x24c318: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x24c318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x24c31c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24c31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24c320: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24c320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24c324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c328: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x24c328u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24c32c: 0x1215002f  beq         $s0, $s5, . + 4 + (0x2F << 2)
    ctx->pc = 0x24C32Cu;
    {
        const bool branch_taken_0x24c32c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x24C330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C32Cu;
            // 0x24c330: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c32c) {
            ctx->pc = 0x24C3ECu;
            goto label_24c3ec;
        }
    }
    ctx->pc = 0x24C334u;
    // 0x24c334: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x24c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_24c338:
    // 0x24c338: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24C338u;
    {
        const bool branch_taken_0x24c338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C338u;
            // 0x24c33c: 0x8e160008  lw          $s6, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c338) {
            ctx->pc = 0x24C358u;
            goto label_24c358;
        }
    }
    ctx->pc = 0x24C340u;
    // 0x24c340: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x24c340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24c344: 0x54540005  bnel        $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C344u;
    {
        const bool branch_taken_0x24c344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x24c344) {
            ctx->pc = 0x24C348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24C344u;
            // 0x24c348: 0x8e100050  lw          $s0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24C35Cu;
            goto label_24c35c;
        }
    }
    ctx->pc = 0x24C34Cu;
    // 0x24c34c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24c34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c350: 0xc093130  jal         func_24C4C0
    ctx->pc = 0x24C350u;
    SET_GPR_U32(ctx, 31, 0x24C358u);
    ctx->pc = 0x24C354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C350u;
            // 0x24c354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C4C0u;
    if (runtime->hasFunction(0x24C4C0u)) {
        auto targetFn = runtime->lookupFunction(0x24C4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C358u; }
        if (ctx->pc != 0x24C358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024C4C0_0x24c4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C358u; }
        if (ctx->pc != 0x24C358u) { return; }
    }
    ctx->pc = 0x24C358u;
label_24c358:
    // 0x24c358: 0x8e100050  lw          $s0, 0x50($s0)
    ctx->pc = 0x24c358u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_24c35c:
    // 0x24c35c: 0x52000021  beql        $s0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x24C35Cu;
    {
        const bool branch_taken_0x24c35c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c35c) {
            ctx->pc = 0x24C360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24C35Cu;
            // 0x24c360: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24C3E4u;
            goto label_24c3e4;
        }
    }
    ctx->pc = 0x24C364u;
    // 0x24c364: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24c364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24c368: 0x50540001  beql        $v0, $s4, . + 4 + (0x1 << 2)
    ctx->pc = 0x24C368u;
    {
        const bool branch_taken_0x24c368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x24c368) {
            ctx->pc = 0x24C36Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24C368u;
            // 0x24c36c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24C370u;
            goto label_24c370;
        }
    }
    ctx->pc = 0x24C370u;
label_24c370:
    // 0x24c370: 0x96050006  lhu         $a1, 0x6($s0)
    ctx->pc = 0x24c370u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x24c374: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24c374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c378: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x24C378u;
    {
        const bool branch_taken_0x24c378 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C378u;
            // 0x24c37c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c378) {
            ctx->pc = 0x24C3D4u;
            goto label_24c3d4;
        }
    }
    ctx->pc = 0x24C380u;
    // 0x24c380: 0x26130008  addiu       $s3, $s0, 0x8
    ctx->pc = 0x24c380u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x24c384: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x24c384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_24c388:
    // 0x24c388: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x24c388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x24c38c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c390: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x24c390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24c394: 0x14740005  bne         $v1, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C394u;
    {
        const bool branch_taken_0x24c394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x24c394) {
            ctx->pc = 0x24C3ACu;
            goto label_24c3ac;
        }
    }
    ctx->pc = 0x24C39Cu;
    // 0x24c39c: 0xc092c44  jal         func_24B110
    ctx->pc = 0x24C39Cu;
    SET_GPR_U32(ctx, 31, 0x24C3A4u);
    ctx->pc = 0x24C3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24C39Cu;
            // 0x24c3a0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24B110u;
    if (runtime->hasFunction(0x24B110u)) {
        auto targetFn = runtime->lookupFunction(0x24B110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C3A4u; }
        if (ctx->pc != 0x24C3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024B110_0x24b110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24C3A4u; }
        if (ctx->pc != 0x24C3A4u) { return; }
    }
    ctx->pc = 0x24C3A4u;
label_24c3a4:
    // 0x24c3a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24C3A4u;
    {
        const bool branch_taken_0x24c3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C3A4u;
            // 0x24c3a8: 0x96050006  lhu         $a1, 0x6($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3a4) {
            ctx->pc = 0x24C3C4u;
            goto label_24c3c4;
        }
    }
    ctx->pc = 0x24C3ACu;
label_24c3ac:
    // 0x24c3ac: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C3ACu;
    {
        const bool branch_taken_0x24c3ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C3ACu;
            // 0x24c3b0: 0x2511023  subu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3ac) {
            ctx->pc = 0x24C3C4u;
            goto label_24c3c4;
        }
    }
    ctx->pc = 0x24C3B4u;
    // 0x24c3b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24c3b8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x24c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x24c3bc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x24c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x24c3c0: 0x96050006  lhu         $a1, 0x6($s0)
    ctx->pc = 0x24c3c0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_24c3c4:
    // 0x24c3c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24c3c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24c3c8: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x24c3c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x24c3cc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x24C3CCu;
    {
        const bool branch_taken_0x24c3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C3CCu;
            // 0x24c3d0: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3cc) {
            ctx->pc = 0x24C388u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c388;
        }
    }
    ctx->pc = 0x24C3D4u;
label_24c3d4:
    // 0x24c3d4: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x24c3d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x24c3d8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x24c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24c3dc: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x24c3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x24c3e0: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x24c3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24c3e4:
    // 0x24c3e4: 0x5615ffd4  bnel        $s0, $s5, . + 4 + (-0x2C << 2)
    ctx->pc = 0x24C3E4u;
    {
        const bool branch_taken_0x24c3e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x24c3e4) {
            ctx->pc = 0x24C3E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24C3E4u;
            // 0x24c3e8: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24C338u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c338;
        }
    }
    ctx->pc = 0x24C3ECu;
label_24c3ec:
    // 0x24c3ec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x24c3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24c3f0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x24c3f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24c3f4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24c3f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24c3f8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x24c3f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c3fc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24c3fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c400: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24c400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c404: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24c404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c40c: 0x3e00008  jr          $ra
    ctx->pc = 0x24C40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24C40Cu;
            // 0x24c410: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24C414u;
    // 0x24c414: 0x0  nop
    ctx->pc = 0x24c414u;
    // NOP
    ctx->pc = 0x24c418u;
}
