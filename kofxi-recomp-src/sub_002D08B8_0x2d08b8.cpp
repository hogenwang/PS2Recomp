#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D08B8
// Address: 0x2d08b8 - 0x2d09b8
void sub_002D08B8_0x2d08b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D08B8_0x2d08b8");
#endif

    switch (ctx->pc) {
        case 0x2d08e4u: goto label_2d08e4;
        case 0x2d0918u: goto label_2d0918;
        case 0x2d0924u: goto label_2d0924;
        case 0x2d0964u: goto label_2d0964;
        case 0x2d0984u: goto label_2d0984;
        default: break;
    }

    ctx->pc = 0x2d08b8u;

    // 0x2d08b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d08b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d08bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d08bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d08c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d08c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d08c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d08c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d08c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d08c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d08cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d08ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d08d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d08d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d08d4: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D08D4u;
    {
        const bool branch_taken_0x2d08d4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D08D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D08D4u;
            // 0x2d08d8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d08d4) {
            ctx->pc = 0x2D08ECu;
            goto label_2d08ec;
        }
    }
    ctx->pc = 0x2D08DCu;
    // 0x2d08dc: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D08DCu;
    SET_GPR_U32(ctx, 31, 0x2D08E4u);
    ctx->pc = 0x2D19A8u;
    if (runtime->hasFunction(0x2D19A8u)) {
        auto targetFn = runtime->lookupFunction(0x2D19A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D08E4u; }
        if (ctx->pc != 0x2D08E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D19A8_0x2d19a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D08E4u; }
        if (ctx->pc != 0x2D08E4u) { return; }
    }
    ctx->pc = 0x2D08E4u;
label_2d08e4:
    // 0x2d08e4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D08E4u;
    {
        const bool branch_taken_0x2d08e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d08e4) {
            ctx->pc = 0x2D08E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D08E4u;
            // 0x2d08e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D0904u;
            goto label_2d0904;
        }
    }
    ctx->pc = 0x2D08ECu;
label_2d08ec:
    // 0x2d08ec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2d08ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d08f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d08f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d08f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d08f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d08f8: 0xfc710000  sd          $s1, 0x0($v1)
    ctx->pc = 0x2d08f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 17));
    // 0x2d08fc: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x2d08fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x2d0900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0904:
    // 0x2d0904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d0904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d090c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D090Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D090Cu;
            // 0x2d0910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D0914u;
    // 0x2d0914: 0x0  nop
    ctx->pc = 0x2d0914u;
    // NOP
label_2d0918:
    // 0x2d0918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d0918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d091c: 0x24020104  addiu       $v0, $zero, 0x104
    ctx->pc = 0x2d091cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x2d0920: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d0920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d0924:
    // 0x2d0924: 0x48983  sra         $s1, $a0, 6
    ctx->pc = 0x2d0924u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 6));
    // 0x2d0928: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d092c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2d092cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0930: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d0930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d0934: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d0934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0938: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d0938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d093c: 0x4800017  bltz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D093Cu;
    {
        const bool branch_taken_0x2d093c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2D0940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D093Cu;
            // 0x2d0940: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d093c) {
            ctx->pc = 0x2D099Cu;
            goto label_2d099c;
        }
    }
    ctx->pc = 0x2D0944u;
    // 0x2d0944: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d0944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d0948: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x2d0948u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d094c: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x2d094cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2d0950: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x2d0950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2d0954: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0954u;
    {
        const bool branch_taken_0x2d0954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0954u;
            // 0x2d0958: 0x838823  subu        $s1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0954) {
            ctx->pc = 0x2D096Cu;
            goto label_2d096c;
        }
    }
    ctx->pc = 0x2D095Cu;
    // 0x2d095c: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D095Cu;
    SET_GPR_U32(ctx, 31, 0x2D0964u);
    ctx->pc = 0x2D0960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D095Cu;
            // 0x2d0960: 0x26040002  addiu       $a0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (runtime->hasFunction(0x2D19A8u)) {
        auto targetFn = runtime->lookupFunction(0x2D19A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0964u; }
        if (ctx->pc != 0x2D0964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D19A8_0x2d19a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0964u; }
        if (ctx->pc != 0x2D0964u) { return; }
    }
    ctx->pc = 0x2D0964u;
label_2d0964:
    // 0x2d0964: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2D0964u;
    {
        const bool branch_taken_0x2d0964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0964) {
            ctx->pc = 0x2D0968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D0964u;
            // 0x2d0968: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D09A0u;
            goto label_2d09a0;
        }
    }
    ctx->pc = 0x2D096Cu;
label_2d096c:
    // 0x2d096c: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x2d096cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2d0970: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2d0970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d0974: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x2d0974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x2d0978: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d0978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d097c: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2D097Cu;
    SET_GPR_U32(ctx, 31, 0x2D0984u);
    ctx->pc = 0x2D0980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D097Cu;
            // 0x2d0980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0984u; }
        if (ctx->pc != 0x2D0984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0984u; }
        if (ctx->pc != 0x2D0984u) { return; }
    }
    ctx->pc = 0x2D0984u;
label_2d0984:
    // 0x2d0984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d0984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0988: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2d0988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2d098c: 0x2231814  dsllv       $v1, $v1, $s1
    ctx->pc = 0x2d098cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 17) & 0x3F));
    // 0x2d0990: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0994: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x2d0994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2d0998: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x2d0998u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
label_2d099c:
    // 0x2d099c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d099cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d09a0:
    // 0x2d09a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d09a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d09a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d09a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d09a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d09a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d09ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d09acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d09b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D09B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D09B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D09B0u;
            // 0x2d09b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D09B8u;
    ctx->pc = 0x2d09b8u;
}
