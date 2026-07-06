#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D6208
// Address: 0x2d6208 - 0x2d6358
void sub_002D6208_0x2d6208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6208_0x2d6208");
#endif

    switch (ctx->pc) {
        case 0x2d6230u: goto label_2d6230;
        case 0x2d62e0u: goto label_2d62e0;
        case 0x2d62f0u: goto label_2d62f0;
        case 0x2d6328u: goto label_2d6328;
        default: break;
    }

    ctx->pc = 0x2d6208u;

    // 0x2d6208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d6208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d620c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d620cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d6210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6214: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x2d6214u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6218: 0x244e9630  addiu       $t6, $v0, -0x69D0
    ctx->pc = 0x2d6218u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940208));
    // 0x2d621c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2d621cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d6220: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2d6220u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6224: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x2d6224u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d6228: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2d6228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d622c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2d622cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6230:
    // 0x2d6230: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d6230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d6234: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x2d6234u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6238: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2D6238u;
    {
        const bool branch_taken_0x2d6238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D623Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6238u;
            // 0x2d623c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6238) {
            ctx->pc = 0x2D62E0u;
            goto label_2d62e0;
        }
    }
    ctx->pc = 0x2D6240u;
    // 0x2d6240: 0x552d000c  bnel        $t1, $t5, . + 4 + (0xC << 2)
    ctx->pc = 0x2D6240u;
    {
        const bool branch_taken_0x2d6240 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 13));
        if (branch_taken_0x2d6240) {
            ctx->pc = 0x2D6244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6240u;
            // 0x2d6244: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D6274u;
            goto label_2d6274;
        }
    }
    ctx->pc = 0x2D6248u;
    // 0x2d6248: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d6248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d624c: 0x5445000a  bnel        $v0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D624Cu;
    {
        const bool branch_taken_0x2d624c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2d624c) {
            ctx->pc = 0x2D6250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D624Cu;
            // 0x2d6250: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D6278u;
            goto label_2d6278;
        }
    }
    ctx->pc = 0x2D6254u;
    // 0x2d6254: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d6254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d6258: 0x54460006  bnel        $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D6258u;
    {
        const bool branch_taken_0x2d6258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2d6258) {
            ctx->pc = 0x2D625Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6258u;
            // 0x2d625c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D6274u;
            goto label_2d6274;
        }
    }
    ctx->pc = 0x2D6260u;
    // 0x2d6260: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d6260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2d6264: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x2d6264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x2d6268: 0x162480a  movz        $t1, $t3, $v0
    ctx->pc = 0x2d6268u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 11));
    // 0x2d626c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d626cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d6270: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2d6270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2d6274:
    // 0x2d6274: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d6274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d6278:
    // 0x2d6278: 0x144effed  bne         $v0, $t6, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2D6278u;
    {
        const bool branch_taken_0x2d6278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        ctx->pc = 0x2D627Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6278u;
            // 0x2d627c: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6278) {
            ctx->pc = 0x2D6230u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d6230;
        }
    }
    ctx->pc = 0x2D6280u;
    // 0x2d6280: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d6280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d6284: 0x11230017  beq         $t1, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D6284u;
    {
        const bool branch_taken_0x2d6284 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D6288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6284u;
            // 0x2d6288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6284) {
            ctx->pc = 0x2D62E4u;
            goto label_2d62e4;
        }
    }
    ctx->pc = 0x2D628Cu;
    // 0x2d628c: 0x1881021  addu        $v0, $t4, $t0
    ctx->pc = 0x2d628cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x2d6290: 0x93080  sll         $a2, $t1, 2
    ctx->pc = 0x2d6290u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2d6294: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d6294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6298: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2d6298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d629c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2d629cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d62a0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2d62a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2d62a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d62a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d62a8: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D62A8u;
    {
        const bool branch_taken_0x2d62a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D62ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D62A8u;
            // 0x2d62ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d62a8) {
            ctx->pc = 0x2D62E4u;
            goto label_2d62e4;
        }
    }
    ctx->pc = 0x2D62B0u;
    // 0x2d62b0: 0xc81021  addu        $v0, $a2, $t0
    ctx->pc = 0x2d62b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2d62b4: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2d62b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2d62b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d62b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d62bc: 0x1e0202d  daddu       $a0, $t7, $zero
    ctx->pc = 0x2d62bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d62c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d62c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d62c4: 0x24a5964c  addiu       $a1, $a1, -0x69B4
    ctx->pc = 0x2d62c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940236));
    // 0x2d62c8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d62c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d62cc: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2d62ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d62d0: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x2d62d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x2d62d4: 0x80b3d08  j           func_2CF420
    ctx->pc = 0x2D62D4u;
    ctx->pc = 0x2D62D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D62D4u;
            // 0x2d62d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF420u;
    if (runtime->hasFunction(0x2CF420u)) {
        auto targetFn = runtime->lookupFunction(0x2CF420u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002CF420_0x2cf420(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D62DCu;
    // 0x2d62dc: 0x0  nop
    ctx->pc = 0x2d62dcu;
    // NOP
label_2d62e0:
    // 0x2d62e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d62e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d62e4:
    // 0x2d62e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d62e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d62e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D62E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D62ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D62E8u;
            // 0x2d62ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D62F0u;
label_2d62f0:
    // 0x2d62f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d62f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d62f4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d62f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d62f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d62f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2d62fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d62fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6300: 0x24429640  addiu       $v0, $v0, -0x69C0
    ctx->pc = 0x2d6300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940224));
    // 0x2d6304: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2d6304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d6308: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d6308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d630c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2d630cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2d6310: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d6310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d6314: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d6314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6318: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2d6318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2d631c: 0x24c6964c  addiu       $a2, $a2, -0x69B4
    ctx->pc = 0x2d631cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940236));
    // 0x2d6320: 0xc0b3d2e  jal         func_2CF4B8
    ctx->pc = 0x2D6320u;
    SET_GPR_U32(ctx, 31, 0x2D6328u);
    ctx->pc = 0x2D6324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6320u;
            // 0x2d6324: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF4B8u;
    if (runtime->hasFunction(0x2CF4B8u)) {
        auto targetFn = runtime->lookupFunction(0x2CF4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6328u; }
        if (ctx->pc != 0x2D6328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF4B8_0x2cf4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6328u; }
        if (ctx->pc != 0x2D6328u) { return; }
    }
    ctx->pc = 0x2D6328u;
label_2d6328:
    // 0x2d6328: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6328u;
    {
        const bool branch_taken_0x2d6328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D632Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6328u;
            // 0x2d632c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6328) {
            ctx->pc = 0x2D6338u;
            goto label_2d6338;
        }
    }
    ctx->pc = 0x2D6330u;
    // 0x2d6330: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6330u;
    {
        const bool branch_taken_0x2d6330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6330u;
            // 0x2d6334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6330) {
            ctx->pc = 0x2D6348u;
            goto label_2d6348;
        }
    }
    ctx->pc = 0x2D6338u;
label_2d6338:
    // 0x2d6338: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d6338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d633c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2d633cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2d6340: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2d6340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d6344: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x2d6344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_2d6348:
    // 0x2d6348: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d6348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d634c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d634cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6350: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6350u;
            // 0x2d6354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6358u;
    ctx->pc = 0x2d6358u;
}
