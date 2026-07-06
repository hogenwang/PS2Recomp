#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010B1C8
// Address: 0x10b1c8 - 0x10b5e8
void sub_0010B1C8_0x10b1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B1C8_0x10b1c8");
#endif

    switch (ctx->pc) {
        case 0x10b29cu: goto label_10b29c;
        case 0x10b528u: goto label_10b528;
        case 0x10b534u: goto label_10b534;
        case 0x10b578u: goto label_10b578;
        case 0x10b588u: goto label_10b588;
        default: break;
    }

    ctx->pc = 0x10b1c8u;

    // 0x10b1c8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x10b1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x10b1cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b1d0: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x10b1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x10b1d4: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x10b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x10b1d8: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x10b1d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1dc: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x10b1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x10b1e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10b1e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1e4: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x10b1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x10b1e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10b1e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b1ec: 0xffb70180  sd          $s7, 0x180($sp)
    ctx->pc = 0x10b1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 23));
    // 0x10b1f0: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x10b1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x10b1f4: 0xffb50160  sd          $s5, 0x160($sp)
    ctx->pc = 0x10b1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
    // 0x10b1f8: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x10b1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
    // 0x10b1fc: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x10b1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
    // 0x10b200: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x10b200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x10b204: 0x8e430184  lw          $v1, 0x184($s2)
    ctx->pc = 0x10b204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x10b208: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B208u;
    {
        const bool branch_taken_0x10b208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B208u;
        // 0x10b20c: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b208) {
            ctx->pc = 0x10B224u;
            goto label_10b224;
        }
    }
    ctx->pc = 0x10B210u;
    // 0x10b210: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x10b210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x10b214: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x10b214u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b218: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x10b218u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b21c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10B21Cu;
    {
        const bool branch_taken_0x10b21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B21Cu;
        // 0x10b220: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b21c) {
            ctx->pc = 0x10B22Cu;
            goto label_10b22c;
        }
    }
    ctx->pc = 0x10B224u;
label_10b224:
    // 0x10b224: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x10b224u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b228: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x10b228u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10b22c:
    // 0x10b22c: 0x8e530868  lw          $s3, 0x868($s2)
    ctx->pc = 0x10b22cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x10b230: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x10b230u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x10b234: 0x26630018  addiu       $v1, $s3, 0x18
    ctx->pc = 0x10b234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x10b238: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x10b238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x10b23c: 0x26770010  addiu       $s7, $s3, 0x10
    ctx->pc = 0x10b23cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x10b240: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x10b240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x10b244: 0x11200024  beqz        $t1, . + 4 + (0x24 << 2)
    ctx->pc = 0x10B244u;
    {
        const bool branch_taken_0x10b244 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B244u;
        // 0x10b248: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b244) {
            ctx->pc = 0x10B2D8u;
            goto label_10b2d8;
        }
    }
    ctx->pc = 0x10B24Cu;
    // 0x10b24c: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x10b24cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x10b250: 0x4630025  bgezl       $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x10B250u;
    {
        const bool branch_taken_0x10b250 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x10b250) {
            ctx->pc = 0x10B254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B250u;
            // 0x10b254: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B2E8u;
            goto label_10b2e8;
        }
    }
    ctx->pc = 0x10B258u;
    // 0x10b258: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x10b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x10b25c: 0x4420022  bltzl       $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x10B25Cu;
    {
        const bool branch_taken_0x10b25c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10b25c) {
            ctx->pc = 0x10B260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B25Cu;
            // 0x10b260: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B2E8u;
            goto label_10b2e8;
        }
    }
    ctx->pc = 0x10B264u;
    // 0x10b264: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x10b264u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x10b268: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x10b268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10b26c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x10b26cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x10b270: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x10b270u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x10b274: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x10b274u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10b278: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x10b278u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x10b27c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x10b27cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x10b280: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x10b280u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x10b284: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x10b284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x10b288: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10b288u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10b28c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x10b28cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x10b290: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x10b290u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x10b294: 0xc048082  jal         func_120208
    ctx->pc = 0x10B294u;
    SET_GPR_U32(ctx, 31, 0x10B29Cu);
    ctx->pc = 0x10B298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B294u;
    // 0x10b298: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x10B294u, 0x10B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B29Cu;
label_10b29c:
    // 0x10b29c: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x10b29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x10b2a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10b2a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10b2a4: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x10b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x10b2a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10b2ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10b2b0: 0xfe630010  sd          $v1, 0x10($s3)
    ctx->pc = 0x10b2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
    // 0x10b2b4: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x10b2b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10b2b8: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x10b2b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x10b2bc: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B2BCu;
    {
        const bool branch_taken_0x10b2bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2BCu;
        // 0x10b2c0: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2bc) {
            ctx->pc = 0x10B2E4u;
            goto label_10b2e4;
        }
    }
    ctx->pc = 0x10B2C4u;
    // 0x10b2c4: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x10b2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10b2c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10b2cc: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x10b2ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x10b2d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10B2D0u;
    {
        const bool branch_taken_0x10b2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2D0u;
        // 0x10b2d4: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2d0) {
            ctx->pc = 0x10B2E8u;
            goto label_10b2e8;
        }
    }
    ctx->pc = 0x10B2D8u;
label_10b2d8:
    // 0x10b2d8: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x10b2d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x10b2dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B2DCu;
    {
        const bool branch_taken_0x10b2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2DCu;
        // 0x10b2e0: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2dc) {
            ctx->pc = 0x10B2E8u;
            goto label_10b2e8;
        }
    }
    ctx->pc = 0x10B2E4u;
label_10b2e4:
    // 0x10b2e4: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x10b2e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_10b2e8:
    // 0x10b2e8: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x10b2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x10b2ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b2f0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B2F0u;
    {
        const bool branch_taken_0x10b2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10b2f0) {
            ctx->pc = 0x10B2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B2F0u;
            // 0x10b2f4: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B318u;
            goto label_10b318;
        }
    }
    ctx->pc = 0x10B2F8u;
    // 0x10b2f8: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x10b2f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x10b2fc: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B2FCu;
    {
        const bool branch_taken_0x10b2fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10b2fc) {
            ctx->pc = 0x10B300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B2FCu;
            // 0x10b300: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B318u;
            goto label_10b318;
        }
    }
    ctx->pc = 0x10B304u;
    // 0x10b304: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x10b304u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x10b308: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b30c: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x10b30cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x10b310: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x10b310u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x10b314: 0x8ea60040  lw          $a2, 0x40($s5)
    ctx->pc = 0x10b314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_10b318:
    // 0x10b318: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x10b318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b31c: 0x8ea5003c  lw          $a1, 0x3C($s5)
    ctx->pc = 0x10b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x10b320: 0x266a0028  addiu       $t2, $s3, 0x28
    ctx->pc = 0x10b320u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x10b324: 0x8ea40038  lw          $a0, 0x38($s5)
    ctx->pc = 0x10b324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x10b328: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x10b328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x10b32c: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x10b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x10b330: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x10b330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x10b334: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x10b334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x10b338: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x10b338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x10b33c: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x10b33cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x10b340: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x10b340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x10b344: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10b344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x10b348: 0xdea50020  ld          $a1, 0x20($s5)
    ctx->pc = 0x10b348u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x10b34c: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x10b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x10b350: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x10b350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x10b354: 0x8ea7002c  lw          $a3, 0x2C($s5)
    ctx->pc = 0x10b354u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x10b358: 0x266b0030  addiu       $t3, $s3, 0x30
    ctx->pc = 0x10b358u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x10b35c: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x10b35cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x10b360: 0x266c0038  addiu       $t4, $s3, 0x38
    ctx->pc = 0x10b360u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x10b364: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10b364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10b368: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x10b368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x10b36c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x10b36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x10b370: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10b370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x10b374: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x10b374u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x10b378: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x10b378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x10b37c: 0xfe4800a0  sd          $t0, 0xA0($s2)
    ctx->pc = 0x10b37cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 8));
    // 0x10b380: 0x11200018  beqz        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x10B380u;
    {
        const bool branch_taken_0x10b380 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B380u;
        // 0x10b384: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b380) {
            ctx->pc = 0x10B3E4u;
            goto label_10b3e4;
        }
    }
    ctx->pc = 0x10B388u;
    // 0x10b388: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x10b388u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x10b38c: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x10B38Cu;
    {
        const bool branch_taken_0x10b38c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10b38c) {
            ctx->pc = 0x10B390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B38Cu;
            // 0x10b390: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B3ECu;
            goto label_10b3ec;
        }
    }
    ctx->pc = 0x10B394u;
    // 0x10b394: 0x4620015  bltzl       $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x10B394u;
    {
        const bool branch_taken_0x10b394 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x10b394) {
            ctx->pc = 0x10B398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B394u;
            // 0x10b398: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B3ECu;
            goto label_10b3ec;
        }
    }
    ctx->pc = 0x10B39Cu;
    // 0x10b39c: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x10b39cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10b3a0: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x10b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10b3a4: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x10b3a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x10b3a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10b3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10b3ac: 0x427f8  dsll        $a0, $a0, 31
    ctx->pc = 0x10b3acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 31);
    // 0x10b3b0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x10b3b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x10b3b4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x10b3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x10b3b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10b3bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10b3c0: 0xfe630028  sd          $v1, 0x28($s3)
    ctx->pc = 0x10b3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 3));
    // 0x10b3c4: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x10b3c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10b3c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10b3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10b3cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B3CCu;
    {
        const bool branch_taken_0x10b3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3CCu;
        // 0x10b3d0: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3cc) {
            ctx->pc = 0x10B3ECu;
            goto label_10b3ec;
        }
    }
    ctx->pc = 0x10B3D4u;
    // 0x10b3d4: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x10b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10b3d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10b3dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10B3DCu;
    {
        const bool branch_taken_0x10b3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B3DCu;
        // 0x10b3e0: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b3dc) {
            ctx->pc = 0x10B3ECu;
            goto label_10b3ec;
        }
    }
    ctx->pc = 0x10B3E4u;
label_10b3e4:
    // 0x10b3e4: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x10b3e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x10b3e8: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x10b3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_10b3ec:
    // 0x10b3ec: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x10b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x10b3f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b3f4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B3F4u;
    {
        const bool branch_taken_0x10b3f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10b3f4) {
            ctx->pc = 0x10B3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B3F4u;
            // 0x10b3f8: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B41Cu;
            goto label_10b41c;
        }
    }
    ctx->pc = 0x10B3FCu;
    // 0x10b3fc: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x10b3fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x10b400: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B400u;
    {
        const bool branch_taken_0x10b400 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10b400) {
            ctx->pc = 0x10B404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B400u;
            // 0x10b404: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B41Cu;
            goto label_10b41c;
        }
    }
    ctx->pc = 0x10B408u;
    // 0x10b408: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x10b408u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x10b40c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10b410: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x10b410u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x10b414: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x10b414u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x10b418: 0x8ec60040  lw          $a2, 0x40($s6)
    ctx->pc = 0x10b418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
label_10b41c:
    // 0x10b41c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x10b41cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b420: 0x8ec5003c  lw          $a1, 0x3C($s6)
    ctx->pc = 0x10b420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x10b424: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x10b424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x10b428: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x10b428u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x10b42c: 0x8ec7002c  lw          $a3, 0x2C($s6)
    ctx->pc = 0x10b42cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x10b430: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x10b430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x10b434: 0x8ec40038  lw          $a0, 0x38($s6)
    ctx->pc = 0x10b434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x10b438: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x10b438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x10b43c: 0x8ec30030  lw          $v1, 0x30($s6)
    ctx->pc = 0x10b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x10b440: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x10b440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x10b444: 0xdec50020  ld          $a1, 0x20($s6)
    ctx->pc = 0x10b444u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x10b448: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10b448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10b44c: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x10b44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x10b450: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x10b450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x10b454: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x10b454u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10b458: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10b458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x10b45c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x10b45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x10b460: 0xfd650000  sd          $a1, 0x0($t3)
    ctx->pc = 0x10b460u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 5));
    // 0x10b464: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10b464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x10b468: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x10b468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x10b46c: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x10b46cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x10b470: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x10b470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x10b474: 0xfe4900a0  sd          $t1, 0xA0($s2)
    ctx->pc = 0x10b474u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 9));
    // 0x10b478: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x10b478u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x10b47c: 0xde620020  ld          $v0, 0x20($s3)
    ctx->pc = 0x10b47cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x10b480: 0x8ea4005c  lw          $a0, 0x5C($s5)
    ctx->pc = 0x10b480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x10b484: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x10b484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x10b488: 0xde630038  ld          $v1, 0x38($s3)
    ctx->pc = 0x10b488u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x10b48c: 0xae4400e0  sw          $a0, 0xE0($s2)
    ctx->pc = 0x10b48cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 4));
    // 0x10b490: 0xfe620020  sd          $v0, 0x20($s3)
    ctx->pc = 0x10b490u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 2));
    // 0x10b494: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10b494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10b498: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x10b498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x10b49c: 0xfe630038  sd          $v1, 0x38($s3)
    ctx->pc = 0x10b49cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 3));
    // 0x10b4a0: 0xae4400e4  sw          $a0, 0xE4($s2)
    ctx->pc = 0x10b4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 4));
    // 0x10b4a4: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x10b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x10b4a8: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x10b4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
    // 0x10b4ac: 0x8ec30048  lw          $v1, 0x48($s6)
    ctx->pc = 0x10b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x10b4b0: 0xae4300cc  sw          $v1, 0xCC($s2)
    ctx->pc = 0x10b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
    // 0x10b4b4: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x10b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x10b4b8: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x10b4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x10b4bc: 0x8ec30054  lw          $v1, 0x54($s6)
    ctx->pc = 0x10b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x10b4c0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x10B4C0u;
    {
        const bool branch_taken_0x10b4c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4C0u;
        // 0x10b4c4: 0xae4300d8  sw          $v1, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4c0) {
            ctx->pc = 0x10B4ECu;
            goto label_10b4ec;
        }
    }
    ctx->pc = 0x10B4C8u;
    // 0x10b4c8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x10b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x10b4cc: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x10b4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x10b4d0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10b4d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10b4d4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10B4D4u;
    {
        const bool branch_taken_0x10b4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4D4u;
        // 0x10b4d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4d4) {
            ctx->pc = 0x10B504u;
            goto label_10b504;
        }
    }
    ctx->pc = 0x10B4DCu;
    // 0x10b4dc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x10b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x10b4e0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x10b4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10b4e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10B4E4u;
    {
        const bool branch_taken_0x10b4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B4E4u;
        // 0x10b4e8: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b4e4) {
            ctx->pc = 0x10B504u;
            goto label_10b504;
        }
    }
    ctx->pc = 0x10B4ECu;
label_10b4ec:
    // 0x10b4ec: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x10b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x10b4f0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x10b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x10b4f4: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x10b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x10b4f8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x10b4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10b4fc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10b4fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10b500: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x10b500u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10b504:
    // 0x10b504: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x10B504u;
    {
        const bool branch_taken_0x10b504 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b504) {
            ctx->pc = 0x10B508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B504u;
            // 0x10b508: 0x8e830028  lw          $v1, 0x28($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B540u;
            goto label_10b540;
        }
    }
    ctx->pc = 0x10B50Cu;
    // 0x10b50c: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x10b50cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x10b510: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x10b510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x10b514: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x10b514u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x10b518: 0x24c6a448  addiu       $a2, $a2, -0x5BB8
    ctx->pc = 0x10b518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943816));
    // 0x10b51c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10b51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b520: 0xc043e24  jal         func_10F890
    ctx->pc = 0x10B520u;
    SET_GPR_U32(ctx, 31, 0x10B528u);
    ctx->pc = 0x10B524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B520u;
    // 0x10b524: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F890u, 0x10B520u, 0x10B528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B528u;
label_10b528:
    // 0x10b528: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10b528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b52c: 0xc04305a  jal         func_10C168
    ctx->pc = 0x10B52Cu;
    SET_GPR_U32(ctx, 31, 0x10B534u);
    ctx->pc = 0x10B530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B52Cu;
    // 0x10b530: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C168u, 0x10B52Cu, 0x10B534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B534u;
label_10b534:
    // 0x10b534: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x10B534u;
    {
        const bool branch_taken_0x10b534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B534u;
        // 0x10b538: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b534) {
            ctx->pc = 0x10B5BCu;
            goto label_10b5bc;
        }
    }
    ctx->pc = 0x10B53Cu;
    // 0x10b53c: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x10b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_10b540:
    // 0x10b540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b544: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x10B544u;
    {
        const bool branch_taken_0x10b544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B544u;
        // 0x10b548: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b544) {
            ctx->pc = 0x10B5BCu;
            goto label_10b5bc;
        }
    }
    ctx->pc = 0x10B54Cu;
    // 0x10b54c: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x10b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x10b550: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x10B550u;
    {
        const bool branch_taken_0x10b550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10b550) {
            ctx->pc = 0x10B554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B550u;
            // 0x10b554: 0xdfbe0190  ld          $fp, 0x190($sp) (Delay Slot)
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B5C0u;
            goto label_10b5c0;
        }
    }
    ctx->pc = 0x10B558u;
    // 0x10b558: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x10b558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x10b55c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x10b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10b560: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x10b560u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x10b564: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x10b564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x10b568: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B568u;
    {
        const bool branch_taken_0x10b568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B568u;
        // 0x10b56c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b568) {
            ctx->pc = 0x10B580u;
            goto label_10b580;
        }
    }
    ctx->pc = 0x10B570u;
    // 0x10b570: 0xc042e3e  jal         func_10B8F8
    ctx->pc = 0x10B570u;
    SET_GPR_U32(ctx, 31, 0x10B578u);
    ctx->pc = 0x10B574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B570u;
    // 0x10b574: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B8F8u, 0x10B570u, 0x10B578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B578u;
label_10b578:
    // 0x10b578: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10B578u;
    {
        const bool branch_taken_0x10b578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B578u;
        // 0x10b57c: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b578) {
            ctx->pc = 0x10B58Cu;
            goto label_10b58c;
        }
    }
    ctx->pc = 0x10B580u;
label_10b580:
    // 0x10b580: 0xc042b1e  jal         func_10AC78
    ctx->pc = 0x10B580u;
    SET_GPR_U32(ctx, 31, 0x10B588u);
    ctx->pc = 0x10B584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B580u;
    // 0x10b584: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AC78u, 0x10B580u, 0x10B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B588u;
label_10b588:
    // 0x10b588: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x10b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_10b58c:
    // 0x10b58c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x10b58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b590: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10b590u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10b594: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x10b594u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x10b598: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x10b598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x10b59c: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B59Cu;
    {
        const bool branch_taken_0x10b59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x10B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B59Cu;
        // 0x10b5a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b59c) {
            ctx->pc = 0x10B5B4u;
            goto label_10b5b4;
        }
    }
    ctx->pc = 0x10B5A4u;
    // 0x10b5a4: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x10b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x10b5a8: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x10b5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x10b5ac: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x10b5acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x10b5b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b5b4:
    // 0x10b5b4: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x10b5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x10b5b8: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x10b5b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_10b5bc:
    // 0x10b5bc: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x10b5bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_10b5c0:
    // 0x10b5c0: 0xdfb70180  ld          $s7, 0x180($sp)
    ctx->pc = 0x10b5c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x10b5c4: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x10b5c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x10b5c8: 0xdfb50160  ld          $s5, 0x160($sp)
    ctx->pc = 0x10b5c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x10b5cc: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x10b5ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x10b5d0: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x10b5d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x10b5d4: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x10b5d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10b5d8: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x10b5d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10b5dc: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x10b5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10b5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x10B5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5E0u;
        // 0x10b5e4: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B5E8u;
}
